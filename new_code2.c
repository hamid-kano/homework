#include <stdio.h>
#include <stdlib.h>
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
    printf("Maximum value in row %d = %d\n" , k,maxm);

}
// Minmum

void min(int arr[N][N],int k)
{
    int minum = arr[k][0];

    for (int i = 0; i < N; i++) {
    if (arr[k][i] < minum)
    minum = arr[k][i];
    }
    printf("Minum value in row %d = %d\n" , k,minum);

}

// Avg

void avg(int arr[N][N],int k)
{
    float avgm = 0;

    for (int i = 0; i < N; i++) {
       avgm +=arr[k][i];
    }
    printf("Avg value in row %d = %f\n" , k,avgm / N *1.0);
}


int main()
{
    int arr[N][N],i,j;
    
   for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
      {
      arr[i][j]=rand()%100;
      }
   }
    print(arr);
    
    for(i=0;i<N;i++)
    {
        max(arr,i);
        min(arr,i);
        avg(arr,i);
    }

    return 0;
}