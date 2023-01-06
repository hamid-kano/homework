#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

const int N = 5;
// تابع لطباعة مصفوفة
void print(int arr[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
}

// Maximun

void max(int arr[N][N],int k)
{
    int maxm = arr[k][0];
    
    for (int i = 0; i < N; i++) {
        if (arr[k][i] > maxm)
        maxm = arr[k][i];
    }
    printf("%d. Satir Maksimum:%d\n" , k,maxm);

}
// Minmum

void min(int arr[N][N],int k)
{
    int minum = arr[k][0];

    for (int i = 0; i < N; i++) {
        if (arr[k][i] < minum)
        minum = arr[k][i];
    }
    printf("%d. Satir Minimum:%d\n" , k,minum);
}

// Avg

void avg(int arr[N][N],int k)
{
    float avgm = 0;

    for (int i = 0; i < N; i++) {
       avgm +=arr[k][i]; // avgm = avgm + arr[k][i];
    }
    printf("%d. Satir Ortalama:%f\n" , k,avgm / N);
}

// Mod
void mod(int arr[N][N],int mod_number)
{
    int _new_mod_num = mod_number;

// تعريف مصفوفة بطول مجال توليد العناصر العشوائية
    int arr_count[10] ;
     for (int i = 0; i < 10; i++) {
       arr_count[i] =0;
    }
    
    
    // حساب تكرار كل عنصر ضمن العمود وتخزين قيمة التكرار في المصفوفة arr_count حسب ترتبه في المصفوفة
    int m ;
    for (int i = 0; i < N; i++) {
      m=  arr[i][mod_number];
      //   printf("mmmmm:%d\n" ,m);
      arr_count[m] =   arr_count[m] + 1;   
    }
    
    // for (int i = 0; i < 10; i++) {
    //       m=arr_count[i];
    //       printf("countmmmmm:%d\n" ,m);
    // }


    // يجاد اكبر عنصر في المصفوفة
    int maxm = 0;
    int index_max = 0;
    for (int i = 0; i < 10; i++) {
        if (arr_count[i] > maxm)
           {maxm = arr_count[i];
           index_max = i;}
    }
    
    // printf("maxmxxxx:%d and index:%d \n" ,maxm , index_max);
    // printf("indexxx:%d\n" ,index_max);
    // printf("_new_mod_num:%d\n" ,_new_mod_num);
        if(maxm > 1){
          printf("%d. Sutun Mod Degeri:%d\n" , _new_mod_num,index_max);
        }else{
          printf("%d. Not Sutun Mod Degeri" , _new_mod_num);
        }
    
}

int main()
{
    // لاجل تصفير مؤقت الحاسوب- لاعطاء قيمة عشوائية في كل مرة
    srand(time(NULL));
    // التصريح عن مصفوفة ثنائية مع عدادات
    int arr[N][N],i,j ,mod_number;
    // تهيئة قيم عناصر المصفوفة
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
      {
      arr[i][j]=rand()%10;
      }
   }
   // طباعة المصفوفة بعد تعيين قيمها
    print(arr);
    
    // من اجل كل سطر 0 1 2 3 4
    for(i=0;i<N;i++)
    {
        // الماكس للسطر i
        max(arr,i);
        min(arr,i);
        avg(arr,i);
    }
    // اختيار العمود العشوائي بين 0 - 4
    mod_number = rand()%N;
    // printf("%d\n" , mod_number);
    mod(arr,mod_number);
    return 0;
}
