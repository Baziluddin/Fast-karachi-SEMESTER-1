//q1 pf lab 10 section1
#include<stdio.h>

int sum(int n);
int main()
{
int n;
printf("enter num");
scanf("%d",&n);
printf("output num %d is %d", n ,sum(n));


}
int sum(int n)
{
if(n == 0)
{
return 0;
}
else
{
int lastdigit = n %10;


return (lastdigit + sum(lastdigit-1));

}
}

//lab 10 section1 Q2
#include <stdio.h>
#include<string.h>

char* recursestring(char word[],int length, char reversedword[],int count);
int main() 
{

    char word[100];
    printf("enter word ");
    scanf("%s",word);
    int length = strlen(word);
    char reversedword[length];
    int count =0;
    char* Word = recursestring(word,length-1,reversedword,count);
    printf("reversed word is %s",Word);
    

    return 0;
}
 char* recursestring(char word[],int length,char reversedword[],int count)
 {
     
    
     
     if( length <0)
      {
          reversedword[count] = '\0';
          return reversedword;
          
      }
      reversedword[count] = word[length];
      count++;
      return recursestring(word,length-1,reversedword,count);
          
 }



//LAB10 SECTION 2 Q1
#include <stdio.h>
struct uberride {
    char rideid[45];
    char pickuplocation[45];
    char dropofflocation[45];
    char date[20];
    float time;
    char drivername[45];
    int availableseats;
    
};
int main() 
{
    struct uberride info;
    
    printf("enter ride id num ");
    scanf("%s",info.rideid);
    printf("enter pickup destination ");
    scanf("%s",info.pickuplocation);
    printf("enter  destination location ");
    scanf("%s",info.dropofflocation);
    printf("enter date of ride ");
    scanf("%s",info.date);
    printf("enter time");
    scanf("%f",&info.time);
    printf("enter name of driver ");
    scanf("%s",info.drivername);
    printf("enter available seats from website ");
    scanf("%d",&info.availableseats);
    if(info.availableseats!=0)
    {
         printf("ride booked \n ");
         info.availableseats--;
         printf("pickup destination is %s \n",info.pickuplocation);
         printf(" drop off location is %s\n",info.dropofflocation);
         printf("date of ride  is %s \n ",info.date);
         printf("ride time is %f \n",info.time);
         printf("drivername is %s \n",info.drivername);
         printf("updated abailable seats ate %d \n",info.availableseats);
         
        
    }
    else
        {
            printf("no ride abailable for now");
        }
    
    
    
    

    return 0;
}

//lab 10 SECTION 2 qs 2 

#include<stdio.h>
#include<string.h>
struct pharmacy{
    char itemname[100];
    char itemcategory[45];
    char manufacturer[45];
    char manufactureryear[45];
    float price;
    
    
};

int main()
{
    
    int totalitemadded;
    printf(" enter total items to be added ");
    scanf("%d",&totalitemadded);
    struct pharmacy info[totalitemadded];
    for(int u =0; u< totalitemadded; u++)
    {
        printf("enteritem name ");
        scanf("%s",info[u].itemname);
        printf("enteritem category ");
        scanf("%s",info[u].itemcategory);
        printf("enter manufacturer name/info ");
        scanf("%s",info[u].manufacturer);
        printf("enteritem manufacturing year ");
        scanf("%s",info[u].manufactureryear);
        printf("enteritem price ");
        scanf("%f",&info[u].price);
        
    }
    char itemcatgorysearch[75];
    int isfound=0;
    printf("enter item to be searched");
    scanf("%s",itemcatgorysearch);
    for(int j =0; j < totalitemadded; j++)
        {
            
            
            
            if(strcmp(info[j].itemcategory ,itemcatgorysearch)==0)
                    {
                        isfound++;
                        printf(" \n");
                        printf(" found \n");
                        printf("%s \n",info[j].itemname);
                        printf("%s \n",info[j].itemcategory);
                        printf("%s \n",info[j].manufacturer);
                          
                        printf("%s \n",info[j].manufactureryear);
                        
                        printf("%f \n",info[j].price);
                        
                        
                        break;
                    }
                        
            
        }
        if(!(isfound))
                {
                    printf("not found");
                }
                    
   
    
}



//moreproblems lab activity Q1 LAB 10
//q1
#include<stdio.h>
int arraytype(int totalelements, int  array[] );
int main()
{
int totalelements;

printf("enter totalelements");
scanf("%d",&totalelements);
int array[totalelements];
for(int y = 0;y < totalelements; y++)
{
int num;
printf("enter num");
scanf("%d",&num);
array[y] = num;
}
arraytype(totalelements, array);


}

int arraytype(int totalelements, int  array[] )
{
if(totalelements !=0)
{

printf(" %d ",array[ totalelements -1]);
return arraytype(totalelements-1,array);

}
}

//Q2 lab activity
#include<stdio.h>
void recursiveBUBBLESORT(int totalelements,int  array[],int index);
int main()
{
int totalelements;
printf("enter total elements in array  :");
scanf("%d",&totalelements);
int array[totalelements];
for(int i = 0; i<totalelements;i++)
{
int element;
printf("enter element : ");
scanf("%d",&element);
array[i]= element;
}
int index =0;
 recursiveBUBBLESORT(totalelements,array,index);
for(int y =0; y< totalelements; y++)
{
printf("%d \n",array[y]);
}


}
void recursiveBUBBLESORT(int totalelements,int array[],int index)
{
if(totalelements ==1)
{
  return ;
}

if (index < totalelements - 1) {

        if(array[index] > array[index+1])
    {
 int temp = array[index];
 array[index] = array[index+1];
 array[index+1]= temp;

    }
    recursiveBUBBLESORT(totalelements,array,index+1);
    
}

else
        {
            recursiveBUBBLESORT(totalelements-1,array,0);
        }
            
}




// labactivitys MOREPROBLEM  Q3 
#include <stdio.h>
#include<string.h>
struct carsdeal{
    char make[45];
    char model[45];
    char year[15];
    float price;
    float mileage;
};

int main() {
     int totalelements;
     printf("enter totalcars info in dealership ");
     scanf("%d",&totalelements);
     struct carsdeal carsinfo[totalelements];
     for(int y =0; y< totalelements; y++)
     {
         printf("enter make of car info ");
         scanf("%s",carsinfo[y].make);
           printf("enter model of car info ");
         scanf("%s",carsinfo[y].model);
         printf("enter year of car info ");
         scanf("%s",carsinfo[y].year);
         printf("enter price of car info ");
         scanf("%f",&carsinfo[y].price);
         printf(" enter mileage  of car info ");
         scanf("%f",&carsinfo[y].mileage);
         
     }
     for(int f =0; f< totalelements; f++)
     {
         printf("cars details \n"); 
         printf("car make %s \n",carsinfo[f].make);
         printf("car make %s \n",carsinfo[f].make);
         printf("car manufacturing year is  %s \n",carsinfo[f].year);
         printf("car price is %f \n",carsinfo[f].price);
         printf("car mileage is %f \n",carsinfo[f].mileage);
         
     }
     char choice[75];
     printf("enter through which you want to search make or model ");
     scanf("%s",&choice);
     
     if(strcmp(choice,"make") ==0)
          {
              char choicemake[100];
              printf(" enter make to be searched");
              scanf("%s",choicemake);
              for(int j =0; j < totalelements; j++)
                    {
                        if(strcmp(carsinfo[j].make,choicemake) == 0)
                                            {
                                                printf(" cars info \n");
                                                printf("car make is %s \n ",carsinfo[j].make);
                           printf("car mode  is %s \n ",carsinfo[j].model);
                           printf("cars manyfacture year  is %s \n ",carsinfo[j].year);
                           printf("cars price is %f \n ",carsinfo[j].price);
                                        
                           printf("cars mileage is %f \n ",carsinfo[j].mileage);
                                        
                                        
                                        
                                            }
                                                
                            
                }
            }
      else if(strcmp(choice ,"model") ==0)
        {
              char choicemodel[100];
              printf(" enter model to be searched");
              scanf("%s",choicemodel);
              for(int j =0; j < totalelements; j++)
                    {
                        if(strcmp(carsinfo[j].make,choicemodel) == 0)
                                            {
                                                printf(" cars info \n");
                                                printf("car make is %s \n ",carsinfo[j].make);
                           printf("car mode  is %s \n ",carsinfo[j].model);
                           printf("cars manyfacture year  is %s \n ",carsinfo[j].year);
                           printf("cars price is %f \n ",carsinfo[j].price);
                                        
                           printf("cars mileage is %f \n ",carsinfo[j].mileage);
                                        
                                        
                                        
                                            }
                                            }
        }
                                            
                            
              
 }

 //more problems Q4 labactivity
#include<stdio.h>
#include<string.h>
struct travel
{
    char packagename[100];
    char destination[100];
    float duration;
    float cost;
    int seatsavailable;
};
int main ()
{
   
    int totalbooking;
    printf("enter total number of booking you want ");
    scanf("%d",&totalbooking);
    struct travel booking[totalbooking];
    
    for(int i =0; i<totalbooking; i++)
    {

        printf(" enter package name needed \n");
        scanf("%s",booking[i].packagename);
        printf("enter destinatiname  of journey \n");
        scanf("%s",booking[i].destination);
        printf("enter duration of flight\n");
        scanf("%f",&booking[i].duration);
        printf("enter cost of package entered above \n");
        scanf("%f",&booking[i].cost);
        printf("enter available seats have from seeing of actual website are ");
        scanf("%d",&booking[i].seatsavailable);
        
        
        printf("\n");
        
    }
    
    for(int z =0; z < totalbooking; z++)
        {
            printf("\n");
            printf("available packages \n ");
            printf("package name is %s \n",booking[z].packagename);
            printf("destination is %s \n ",booking[z].destination);
            printf("duration is %f \n ",booking[z].duration);
            printf("cost is %f \n ",booking[z].cost);
            printf("available seats are %d \n ",booking[z].seatsavailable);
        }
    int desiredfound=0;
    char packname[100];
    printf("enter package name ");
    scanf("%s",packname);
          
    for(int z =0; z < totalbooking; z++)
        {
            if(strcmp(booking[z].packagename,packname)==0 && booking[z].seatsavailable !=0)
                    {
                        printf("Welcome your ride is booked \n");
                        printf("\n");
                        printf("Package name is %s \n",booking[z].packagename);
                        printf("destination is %s \n",booking[z].destination);
                        printf("duration is %f \n",booking[z].duration);
                        printf("cost is %f \n",booking[z].cost);
                        booking[z].seatsavailable --;
                        printf("available seats are %d \n",booking[z].seatsavailable);
                    desiredfound++;
                    
                    break;
                        
                        
                        
                        
                        
                        
                    }
                    
        
        }
        if(desiredfound ==0)
                {
                    printf(" sorry your desired ride is not available for now");
                }
                    
    
}

//lab 10 Q5 lab activity
#include<stdio.h>
#include<math.h>

struct point {
    int x;
    int y;
   
};

float calculatelength(struct point Point1,struct point Point2);
int checkrectangle(struct point P1, struct point LEFT, struct point RIGHT);

int main()
{
    struct point Point1;
    struct point Point2;
    struct point LEFT;
    struct point RIGHT;
    
    float length = calculatelength(Point1,Point2);
    printf("%f IS THE LENGTH \n ",length);
    for(int i =0;i<1; i++)
    {
        int x;
        int y;
        printf("enter x coordinate ;; ");
        scanf("%d",&x);
        printf("enter y ");
        scanf("%d",&y);
        
    }
    for(int i =0;i<1; i++)
    {
        int x;
        int y;
        printf("enter x coordinate of right :: ");
        scanf("%d",&x);
        printf("enter y  cordinate ");
        scanf("%d",&y);
        
    }
    if(checkrectangle(Point1,LEFT,RIGHT))
        {
            printf("inside rectangle");
            
        }
        else
        {
                printf("not inside IN RECTANGLE");
        }
}
float calculatelength(struct point Point1,struct point Point2)
{
    int pointx;
    int pointy;
    for(int i =0; i <1; i++)
    {
        printf("enter x coordinate of point %d ",i+1);
        scanf("%d",&pointx);
        printf("enter y coordinate of point %d",i+1);
        scanf("%d",&pointy);
        Point1.x = pointx;
        Point1.y =pointy;
        
        
    }
   for(int i =0; i <1; i++)
    {
        printf("enter x coordinate of point %d",i+2);
        scanf("%d",&pointx);
        printf("enter y coordinate of point %d",i+2);
        scanf("%d",&pointy);
        Point2.x = pointx;
        Point2.y =pointy;
        
        
    }
    int lengthx = Point2.x - Point1.x;
    
    int lengthy = Point2.y - Point1.y;
    
    return sqrt(lengthx*lengthx+lengthy*lengthy);
    
    
}

int checkrectangle(struct point P1, struct point LEFT, struct point RIGHT) {
    if (P1.x >= LEFT.x && P1.x <= RIGHT.x && P1.y >= LEFT.y && P1.y <= RIGHT.y) {
        return 1; 
    }
    return 0; 
}




//lab activity Q6
#include <stdio.h>


#define maxtemp 100
void counttemp(int totaltempera, int count);
int main() 
{
   
    int totaltempera;
    
    static int  count =0;
   
    printf("enter total temperature to be checked ");
    scanf("%d",&totaltempera);
   
    counttemp(totaltempera,count);

    return 0;
}

void counttemp(int totaltempera, int count)
{
     int temperature;
     for(int y =0; y < totaltempera; y++)
    {
         printf("enter temperature ");
         scanf("%d",&temperature);
        
         if(temperature > maxtemp)
             {
                 count++;
             }
                 
        
        
    }
    printf("total exceeded limit are %d",count);
    
    
}

//lab activity Q7
#include <stdio.h>


#define maxconvert 0.001
void countconvert(int metervalue);
int main() 
{
   
    int metervalue;
    
    
    printf("enter value  to be converted ");
    scanf("%d",&metervalue);
   
    countconvert(metervalue);

    return 0;
}

void countconvert(int metervalue)
 {
            
        
  static int count =0;
  count++;
   printf("total kilometer value is %f km\n ", maxconvert * metervalue);
   printf("total call of function  is %d",count);
    

    
 }



 // PF LAB 10 LAB ACTIVITY Q8
#include <stdio.h>

int recursivefunction(int arrwy[],int totalelements,int currentindex,int targetelement);

int main() 
{
    int totalelements;
    printf("enter total elements");
    scanf("%d",&totalelements);
    int currentindex;
    printf("enter current index");
    scanf("%d",&currentindex);
    int targetelement;
    int array[totalelements];
    if(currentindex >=0&& currentindex<totalelements)
     {
        printf("valid proceed \n");
       
        for(int i =0; i< totalelements; i++)
             {
                 int element;
                 printf("enter element");
                 scanf("%d",&element);
                 array[i] = element;
                 
             }
             
         printf("enter targetelement");
         scanf("%d",&targetelement);
    }
    else
       
     {
        printf("invalid cant proceed");
    }
    
    int num = recursivefunction(array,totalelements-1,currentindex,targetelement);
    if(num==1)
    {
        printf("found");
    }
    else
        {
            printf("not found");
    }

    return 0;
}

int recursivefunction(int array[],int totalelements,int currentindex,int targetelement)
{
    if(array[currentindex] == targetelement)
    {
        return 1;
    }
    
    else if ( currentindex >= totalelements)
        {
            return 0;
        }

      
       return recursivefunction(array,totalelements,currentindex+1,targetelement);
       
}