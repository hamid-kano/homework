#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

const int N = 5;

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
       avgm +=arr[k][i];
    }
    printf("%d. Satir Ortalama:%f0.2\n" , k,avgm / N);
}
// Mod
void mod(int arr[N][N],int mod_number)
{
    int _new_mod_num = mod_number;

    int arr_count[10] ;
     for (int i = 0; i < 10; i++) {
       arr_count[i] =0;
    }
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
    srand(time(NULL));
    int arr[N][N],i,j ,mod_number;
    
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
      {
      arr[i][j]=rand()%9;
      }
   }
    print(arr);
    
    for(i=0;i<N;i++)
    {
        max(arr,i);
        min(arr,i);
        avg(arr,i);
    }
    
    mod_number = rand()%N;
    // printf("%d\n" , mod_number);
    mod(arr,mod_number);

    return 0;
}
