#include <stdio.h>

//Q2
int main() {
    int first= 0; 
    int second = 1; 
    int nextposition;
    int total = 0; 
    printf("Fibonacci series up to 10000 \n");

   
    for (nextposition  = first+ second; nextposition <= 10000; nextposition = first+ second) 
    {
        printf("%d \n", nextposition); 

      
        if (nextposition% 3 == 0 || nextposition% 5 == 0 || nextposition% 7 == 0)
        {
            total += nextposition; 
        }

        
        first = second;
        second = nextposition; 
 
    }

    printf(" Sum of Fibonacci numbers divisible are %d \n", total);

    return 0;
}

//Q3 
#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int temp1;
    int temp2;
    int gcd;
    int lcm;

   
    printf("Enter the  integers on which operation to be performed ");
    scanf("%d",&number1);
     printf("Enter the  integers on which operation to be performed ");
    scanf("%d",&number2);

     
    temp1 = number1;
    temp2 = number2;

    
    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    gcd = temp1;  

    
    lcm = (number1 * number2) / gcd;

   
    printf("gcd  of %d and %d numbers is : %d \n", number1, number2, gcd);
    printf("LCM of %d and %d numbers is: %d \n", number1, number2, lcm);

    return 0;
}    

    

#include <stdio.h>
//Q5
int main() 
{
    // Write C code here
    int array[4] ={0,0,0,0};
    for(int i =0; i <4;i++)
    {
        printf(" %d ",array[i]);
    }
    printf("\n");
    
    int array1[4] ={1,1,1,1} ;
    for(int j =0; j<4;j++)
    {
        if(j%2!=0)
            {
                printf("  ");
                printf(" %d ",array1[j]);
            }
                
        
    }
    printf("\n");
    
    int arrayd[4] = {2,2,2,2};
    
    for(int k =0; k<4;k++)
    {
            
        
           printf(" %d ",arrayd[k]);
        
                
        
    }
     printf("\n");
    int array3[4] ={3,3,3,3} ;
    for(int j =0; j<4;j++)
    {
        if(j%2!=0)
            {
                printf("  ");
            
                printf(" %d ",array3[j]);
            }
                
        
    }
    printf("\n");
    int array4[4] = {4,4,4,4};
    
    for(int k =0; k<4;k++)
    {
        
           
           printf(" %d ",array4[k]);
        
                
        
    }
    printf("\n");
     int array5[4] ={5,5,5,5} ;
    for(int j =0; j<4;j++)
    {
        if(j%2!=0)
            {
                printf("  ");
                printf(" %d ",array5[j]);
            }
                
        
    }
    printf("\n");
    
    int array6[4] = {6,6,6,6};
    
    for(int k =0; k<4;k++)
    {
             
           
        
           printf(" %d ",array6[k]);
        
                
        
    }
    
}

//Q6
#include <stdio.h>

int main() {
    int n = 21;

    while (1) 
    {
        int num;
        printf("Enter number of sticks to pick 1, 2, 3, or 4 ");
        scanf("%d", &num);

        if (num< 1 || num > 4) {
            printf("Invalid choice. Please pick between 1 and 4 sticks.\n");
            continue;
        }

        n -= num;
        printf("Player picked %d stick(s): Remaining sticks = %d\n", num, n);

        
        if (n == 1) {
            printf("Computer wins! Player .\n");
            break;
        }

        int computer_pick = 5 - num;
        n -= computer_pick;
        printf("Computer picked %d stick(s): Remaining sticks = %d\n", computer_pick, n);

        if (n == 1) {
            printf("Player wins! the last stick.\n");
            break;
        }
    }
    return 0;
}

//Q8
#include<stdio.h>

int main()
{
    int totalelements;
    int number;
    printf("enter total elements in array");
    scanf("%d",&totalelements);
    int numbers[totalelements];
    for(int i =0; i< totalelements; i++)
    
     {    
         printf("enter element");
         scanf("%d",&number);
         numbers[i]= number;
     }
     int temp;
     
     for(int j = totalelements/2 ; j>=0; j--)
     {
         temp = numbers[j];
         numbers[j] = numbers[totalelements-j-1];
         numbers[totalelements-j-1]= temp;
         
     }

     printf("reverse element \n ");
     for (int z =0; z<  totalelements; z++)
    
     {    
         
         printf("%d",numbers[z]);
         
     }
}