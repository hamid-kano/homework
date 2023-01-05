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

void max(int arr[N][N])
{
    for (int i = 0; i < N; i++) {
    int maxm = arr[0][i];
        for (int j = 1; j < N; j++) {
            if (arr[j][i] > maxm)
                maxm = arr[j][i];
        }
    printf("Maximum value in column %d = %d\n" , i,maxm);
    }
}
// Minmum

void min(int arr[N][N])
{
    for (int i = 0; i < N; i++) {
    int min = arr[0][i];
        for (int j = 1; j < N; j++) {
            if (arr[j][i] < min)
                min = arr[j][i];
        }
    printf("Minmum value in column %d = %d\n" , i,min);
    }
}


int main()
{
    int arr[N][N],i,j;
    
    for(i=0;i<N;i++)
   {
      for(j=0;j<N;j++)
      {
      arr[i][j]=rand()%20;
      }
   }
    print(arr);
    max(arr);
    min(arr);
    return 0;
}