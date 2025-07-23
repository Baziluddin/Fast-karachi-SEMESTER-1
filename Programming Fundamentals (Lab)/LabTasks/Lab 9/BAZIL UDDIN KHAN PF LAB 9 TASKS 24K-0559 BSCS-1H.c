//lab 9
//section 2 
#include<stdio.h>
#include<string.h>

int main ()
{
    char destinationstr[100];
    printf("enter destination string :: ");
    scanf("%s",destinationstr);
    char sourcestr[100];
    printf("enter source string ::");
    scanf("%s",sourcestr);
    int length = strlen(sourcestr);
    int n ;
    printf("enter n no of elements\n");
    scanf("%d",&n);
    char chara[100] =" ";
    int index =0;
    
   
            
    for(int i =0;i < n; i++)
    {
       chara[index] = sourcestr[i];
       index++;
    }
    chara[index]='\0';
    strcat(destinationstr,chara);
    printf(" destination string is now %s",destinationstr);
}

// lab 9 section3 qs
#include <stdio.h>
#include<string.h>
int main()
{
    int totalrow;
    printf("enter total row ::");
    scanf("%d",&totalrow);
     int totalcol;

    char words[totalrow][90];
    
    for(int i =0; i< totalrow; i++)
    {
                
                    printf("enter word");
                    scanf("%s",words[i]);
                    
                
                
    }
    char userword[100];
    printf("enter your word");
    scanf("%s",userword);
    int found =-1;
    for(int e =0; e< totalrow; e++)
    {
      
                if(strcmp(words[e] ,userword)==0)
                 {
                     printf("word %s found at [%d]",userword,e);
                     
                     found=1;
                     
                 }
                
              }
     if(found==-1)
      {      
          printf("not found");
      }
    
                
    }

//Q1 LAB 9 TASKS MORE PROBLEMS
#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][20];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the  word: ");
        fgets(words[i], sizeof(words[i]), stdin);
    
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    for(int i = 0; i < 5; i++)
    {
        char reversed[20];
        int length = strlen(words[i]);

      
        for(int j = 0; j < length; j++)
        {
            reversed[j] = words[i][length - 1 - j];
        }
        reversed[length] = '\0'; 

        
        int found = 1; 
        for(int k = 0; k < length; k++)
        {
            if(words[i][k] != reversed[k])
            {
                found = 0; 
                break;
            }
        }

        if(found==1)
        {
            printf("it is a Palindrome %s \n", words[i]);
        }
        else
        {
            printf("it is  not a palindrome %s \n", words[i]);
        }
    }
 }


//lab 9 q2 moreproblems 
#include<stdio.h>
int findUniqueElements(int totalelements, int numbers[],int updatenum[]);
int main()
{
    int totalelements;
    printf("enter total elements im array ::");
    scanf("%d",&totalelements);
    int numbers[totalelements];
    for(int z =0; z < totalelements; z++)
    {
        int num;
        printf("enter ele");
        scanf("%d",&num);
        numbers[z] = num;
    }
    int updatenum[totalelements];
    
    int new =  findUniqueElements(totalelements, numbers,updatenum);
    for(int y =0; y < new;y++)
    {
       printf("%d \n",updatenum[y]);
        
    }
}
int findUniqueElements(int totalelements, int numbers[],int updatenum[])
{
    int count = 0;
    for(int y =0; y < totalelements;y++)
    {
       if(y<totalelements-1&&numbers[y] != numbers[y+1])
        {
          
          
            updatenum[count] = numbers[y];
            count++;
            
          
        }
    
    
    
       else if(y== totalelements-1)
        {
         
          
            updatenum[count] = numbers[y];
            count++;
            
        }
          
        
    }
    

    return count;
}





// lab 9 more problems 
//Q3

#include <stdio.h>
void findCommonElements(int num1[],int num2[],int totalelementsone,int totalelementstwo);

int main() 
{
    // Write C code here
    int totalelementsone ;
   
    printf("enter totalelements in 1st array ");
    scanf("%d",&totalelementsone);
     int  num1[totalelementsone];
    int totalelementstwo ;
   
    printf("enter totalelements in 2nd array ");
    scanf("%d",&totalelementstwo);
   int  num2[totalelementstwo];
    for(int i = 0; i < totalelementsone; i++)
    {
        int number;
        printf("entyer number in aray1 ");
        scanf("%d",&number);
        num1[i] = number;
        
    }
     for(int j = 0; j < totalelementstwo; j++)
    {
        int number;
        printf("entyer number in array 2 ");
        scanf("%d",&number);
        num2[j] = number;
        
    }
    findCommonElements(num1,num2, totalelementsone, totalelementstwo);
}


void findCommonElements(int num1[],int num2[],int totalelementsone,int totalelementstwo)
{
     
    
    int largest= 0; 
    if(totalelementsone> totalelementstwo)
    {
        largest = totalelementsone;
    }
    else if(totalelementstwo> totalelementsone)
    {
        largest = totalelementstwo;
    }
    else

    {
        largest = totalelementsone;
    }

    
    
    int commanelements[largest];
    
    
    int countarray =0;
    for(int y =0; y<totalelementsone ; y++)
            {
                 
    
              for (int j =0;j<totalelementstwo ; j++)
              {
             
                  if(num1[y] == num2[j])
                 {
                   
                   commanelements[countarray]= num1[y];
                   countarray ++;
                   break;
                    
                
                 }




                 
                  
                 
        }
            }
        
        for(int index =0; index < countarray ; index ++)
        
                    {
                        printf("%d\n",commanelements[index]);
                
            
                    }
                    
}



//MOREPROBLEM q4 lab 9
#include<stdio.h>
void functionoperation(int num1, int num2);
int main()
{
int num1,num2;
printf("enter number 1 ");
scanf("%d",&num1);
printf("enter number 2 ");
scanf("%d",&num2);
functionoperation(num1,num2);

}
void functionoperation(int num1, int num2)
{
char choice;
printf("enter choice for addition enter A ,for subtraction enter S,for multiplication enter M,for DIVISION enter D  ");
scanf(" %c",&choice);
switch(choice)
{
case 'A' :
{
printf("sum is %d",num1+num2);
break;
}


case 'S' :
{
printf("subtarction is %d",num1-num2);
break;

}


case 'M' :
{
printf("multiplication is %d",num1*num2);
break;

}

case 'D' :
{
printf("division is %.2f",(float
)num1/num2);
break;

}
default:{
printf("Invalid");

break;
}


}
}




// lab 9 more problems Q5

#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[67];
    printf(" enter sentence ");
    fgets(sentence,sizeof(sentence),stdin);
    
    int count =0;
    sentence[strcspn(sentence, "\n")] = '\0';
    
    int length = strlen(sentence);
    int indexcount =0;

    for(int i = 0; i < sizeof(sentence) ; i++ )
    {
        
        if(sentence[i] == ' ')
            {
                indexcount =0;
            }
        else if(indexcount ==0)
           {
                        count++;
                        indexcount++;
                        
           }
                        
            
    }
    
    printf(" number of words is %d",count);
    
}

//q6 lab 9 MORE PROBLEMS
#include<stdio.h>
#include<string.h>
void functionstring(char word[],int totalelements);
int main()
{
char word[28];
printf("enter string");
scanf(" %s",&word);
int totalelements = strlen(word);
functionstring(word,totalelements);


}
void functionstring(char word[],int totalelements)
{
char reversedword[totalelements+1];

int index = 0;
for(int i = totalelements -1 ; i>=0; i--)
{
char charachter = word[index];
reversedword[i] = charachter;
index++;
}
reversedword[index] = '\0';
int h =0;

if (strcmp(reversedword , word) == 0)
{
printf(" same string");

}
else
{
printf("dont same string");

}
}
