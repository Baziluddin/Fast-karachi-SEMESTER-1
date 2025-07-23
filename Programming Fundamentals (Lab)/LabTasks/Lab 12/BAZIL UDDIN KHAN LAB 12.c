//Q1 lab 12 problems
#include <stdio.h>
#include <stdlib.h>

int main() {
  int totalstudents;
  printf("Enter total students :");
  scanf("%d",&totalstudents);
  
  int **arr;
  arr = (int **) malloc(sizeof(int )* totalstudents);
  int totalgrades;
   int totalGrade[totalstudents];
  for(int i =0 ; i < totalstudents;i++)
  {
       printf("enter grades for %d student ",i+1);
      scanf("%d",&totalgrades);
     arr[i] =(int *) malloc(sizeof(int)*totalgrades );
     
     
      for(int j = 0; j < totalgrades; j++)
      {
          printf("enter grade ");
          scanf("%d",&arr[i][j]);
      }
  }
  
  for(int y = 0; y < totalstudents;y++)
  {
      printf("enter grades for %d student",y+1);
      for(int u =0; u<totalgrades;u++)
      {
       printf(" %d ",arr[y][u]);
      }
      printf("\n");
      
      
  }
  
  for(int r =0; r < totalstudents;r++)
  {
      free(arr[r]);
  }
  free(arr);

    return 0;
}