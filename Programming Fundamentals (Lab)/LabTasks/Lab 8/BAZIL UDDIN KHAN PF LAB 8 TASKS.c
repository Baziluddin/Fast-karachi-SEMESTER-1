//lab 8 task 
#include <stdio.h>

int main()
{
    int array[2][3][3];
    for(int i =0; i <2; i++)
    {
        for(int j =0; j<3; j++)
        {   
            for(int u =0; u <3; u++)
            {      
                int num;
                printf("enter number you want \n ");
                scanf("%d",&num);
                array[i][j][u] = num;
                
            }
        }
    }
    
   for(int i =0; i <2; i++)
    {
        int sum =0;
        for(int j =0; j<3; j++)
        {   
            for(int u =0; u <3; u++)
            {      
                sum = sum +array[i][j][u];
                
            }
        }
        printf("the sum is %d on page %d \n",sum,i+1);

    }
    
    

    return 0;
}


//LAB8
//more problems Q1
#include <stdio.h>

int main() 
{
    
    int startnum;
    int endnum;
    printf("enter starting num");
    scanf("%d",&startnum);
    printf("enter ending num");
    scanf("%d",&endnum);
    int count;
    count=0;
    for(int i =startnum; i < endnum; i++)
    {
        
        for(int j =i; j <= i; j++)
            {
                
                   
             if(j%2!=0 && j%2!=0)
                     {
                     printf("%d",j);
                     break;
                    
                    }
                    
        
                
            }
            printf(" ");
                
    }
    

    return 0;
}

//MORE PROBLEM Q2
#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        
        for (int j = 0; j < 2*i + 1; ++j)
            printf("*");
        
        printf("\n");
    }
    
    for (int i = n-2; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        
        for (int j = 0; j < 2*i + 1; ++j)
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}

//lab 8 more problem q3

#include <stdio.h>

int main()
{
    int array[3][3];
    for(int i =0; i <3; i++)
    {
        for(int j =0; j <3;j++)
            {
                int num;
                printf("enter number :\n ");
                scanf("%d",&num);
                array[i][j] = num;
                
            }
                
    }
     int found =0;
    
    for(int y =0; y <3; y++)
    {
        int smallest =array[y][0];
     
        int indexrow=0;
        int colindex=0;
        for(int j =1; j<3; j++)
        {
            if(array[y][j] < smallest )
            {
                smallest = array[y][j];
                indexrow =y;
            }
        }
        int col=0;
        int largest =array[y][col];
       
        for(int e=0; e < 3; e++)
        {
            if( array[e][col] > largest)
            {
                largest = array[e][col];
                colindex=col;
            }
        }
      
        col++;
        if(largest == smallest)
                {
                    printf(" it is saddle point %d \n",array[y][colindex]);
                    found =1;
                    
                    
                    
                }
                
       
        
    }
    if(found ==0)
                    {
                        printf("no saddle point");
                    }
                    
   
}


//more priblem Q4

#include <stdio.h>

int main()
{
    int array1[3][3];
    int array2[3][3];
    int multiarray[3][3];
    
    for(int i =0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
            {
                int num;
                printf(" enter num in array1 ");
                scanf("%d",&num);
                array1[i][j] = num;
            }
    }
    for (int i =0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
            {
                int numb;
                printf(" enter num in array2 ");
                scanf("%d",&numb);
                array2[i][j] = numb;
            }
    }
      for(int i =0; i < 3; i++)
       {
        for(int j =0; j < 3; j++)
         {
                
                  
                   multiarray[i][j] =0;
                  
            }
    }    
    for(int i =0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
         {
                for(int h =0; h<3 ; h++)
                  {
                   multiarray[i][j] = multiarray[i][j] + array1[i][h] * array2[h][j];
                  }
            }
            
    }
  
    
   for(int i =0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
            {
              printf("%d",multiarray[i][j]);
              printf(" ");
            }
            
            printf("\n ");
            
            
    }
    


    return 0;
}
//MORE PROBLEMS Q5
#include<stdio.h>
int main()
{
    int upperrow;
    printf("enter upper nu of rows in diamond ");
    scanf("%d",&upperrow);

    for(int i = 0; i < upperrow; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("");  
        }

        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int n = upperrow; upperrow > 0; n--)
    {
        for(int k = 1; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}