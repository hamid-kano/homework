#include <stdio.h>
#include <stdlib.h>

void declare_array(){
   int sz;
   printf("Enter the size of array:");
   scanf("%d",&sz);
   int randArray[sz][sz],i,j;
   for(i=0;i<sz;i++)
   {
      for(j=0;j<sz;j++)
      {
      randArray[i][j]=rand()%20;
      }
   }//Generate number between 0 to 99
   printf("\nElements of the array:");
   printf("\n");
   for(i=0;i<sz;i++)
   {
       for(j=0;j<sz;j++)
       {
         printf(" %d", randArray[i][j]);
       }
         printf("\n");
   }
}

int main(void)
{
   declare_array();
   return 0;
}