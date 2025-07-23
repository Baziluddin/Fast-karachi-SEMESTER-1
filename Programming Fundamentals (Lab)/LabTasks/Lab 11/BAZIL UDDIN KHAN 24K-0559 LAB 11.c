//Q2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   

    while(1)
    {
        char choice[100];
        printf("enter choice ;");
        scanf("%s",choice);
        char filename[100];
        if(strcmp(choice,"Read") == 0)
        {
            
            printf("enter file name ");
            scanf("%s",filename);
            FILE *fptr ;
            fptr = fopen(filename,"r");
            if(fptr == NULL)
            {
                printf("File donot exist");
                exit(1);
            }
            char ch;
            while((ch = getc(fptr)) != EOF)
            {
                printf("%c",ch);
            }
            fclose(fptr);

        }
        else if(strcmp(choice, "write")==0)
        {
            printf("enter file name ");
            scanf("%s",filename);
            FILE *fptr ;
            fptr = fopen(filename,"w");
            if(fptr == NULL)
            {
                printf("File donot exist");
                exit(1);
            }
            char data[100];
            printf("eenter data to updtae ");
            getchar();
            fgets(data,sizeof(data),stdin);
            data[strcspn(data,"\n")] = '\0';
            fprintf(fptr,"%s",data);
            fclose(fptr);

        }

       else if(strcmp(choice, "append")==0)
        {
            printf("enter file name ");
            scanf("%s",filename);
            FILE *fptr ;
            fptr = fopen(filename,"a");
            if(fptr == NULL)
            {
                printf("File donot exist");
                exit(1);
            }
            char data[100];
            printf("enter data to append");
            getchar();
            fgets(data,sizeof(data),stdin);
            data[strcspn(data,"\n")] = '\0';
            fprintf(fptr,"%s",data);
            fclose(fptr);

        }
        else if(strcmp(choice, "exit")==0)
        {
            
            break;
        }

        else
        {
            printf("invalid input re try");
        }
        


    }
    

}

//Q3
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char sourcefile[100];
    char destinationfile[100];
    printf("enter source file ");
    scanf("%s",sourcefile);
    printf("enter destination file ");
    scanf("%s",destinationfile);
    FILE *fptr;
    fptr = fopen(sourcefile,"r");
    if(fptr == NULL)
    {
        printf("file dont exist :");
        return 1;
    }
    FILE *fotr = fopen(destinationfile,"w");
    if(fotr == NULL)
    {
        printf("file dont exist :");
        return 1;
    }
    
    
    char charachter ;
    while((charachter = fgetc(fptr) ) != EOF)
    {
      fputc(charachter,fotr);
    }
    
    
    fclose(fptr);
    fclose(fotr);


}

//q4
//Q4
#include<stdio.h>
int main()
{
    char filename[100];
    printf("enter file name ");
    scanf("%s",filename);
    FILE *fptr = fopen(filename,"r");
     if(fptr == NULL)
    {
        printf("file dont exist ");
    }
    int totalcharachters =0;
    int totalwords = 0;
    int totalines = 0;
    char charachter;
    int firstlinecount = 0;
    int words =0;
    while((charachter = fgetc(fptr)) != EOF)
    {
        totalcharachters++;
        if(firstlinecount == 0)
        {
            firstlinecount++;
        }
        if(charachter == '\n' )
        {
            
            totalines++;
        }
        
        if(charachter == '\n' || charachter == ' ')
        {
            
            if(words == 0)
            {
                totalwords++;
                words=0;

            }
            else{
                words =1;
            }
        }
   

    }
    if(words ==1)
    {
        totalwords++;
    }
    if(charachter !='\n')
    {
        totalines++;
    }
    printf("number of charachters are %d",totalcharachters);
     printf("number of words are %d",totalwords);
      printf("number of lines  are %d",totalines);
    fclose(fptr);

}

//q5
#include<stdio.h>
int main()
{
    char filename[100];
    printf("enter file name :");
    scanf("%s",filename);
    FILE *FPTR;
    FPTR = fopen(filename,"r");
    if(FPTR == NULL)
    {
        printf("file dont exist ");
        return 0;
    }
    int length =0;
    char ch;
    while((ch = fgetc(FPTR))!= EOF)
    {
        length++;

    }
    char array[length];
    int i =0;
    while((ch = fgetc(FPTR))!= EOF)
    {
        array[i] = ch;

    }
    array[length] = '\0';
    char reversedarray[length]; 
    int j = length;
    for(int i =0; i<length;i++)
    {
        char cgar = array[i];
        reversedarray[j]= cgar;
        j--;


    }
     reversedarray[length+1]='\0'; 
    fclose(FPTR);
    
    FILE *fptr = fopen(filename,"w");
    for(int j =0; j<length;j++)
    {
        char CHAR = reversedarray[j];
        fputc(CHAR,fptr);
       
    }
    fclose(fptr);
    char destinyfile[100];
    printf("enter file name ");
    scanf("%s",destinyfile);

    FILE *destinityptr = fopen(destinyfile,"w");
    if(destinityptr == NULL)
    {
        printf("file dont exist ");
        return 1;
    }

    FILE *Fptr = fopen(filename,"r");
    char CH;
    while((CH = fgetc(Fptr) ) !=EOF)
    {
        fputc(CH,destinityptr);
    }

    fclose(destinityptr);
    fclose(Fptr);


    

}

//Q6
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE  *fptr;
    FILE  *Fptr;
    char Firstfilename[100];
    printf("enter file name ");
    scanf("%s",Firstfilename);
    fptr = fopen(Firstfilename,"r");
    if(fptr == NULL)
    {
        printf("Invalid file");
        exit(1);
    }
    char Secondfilename[100];
    printf("enter file name ");
    scanf("%s",Secondfilename);
    Fptr = fopen(Secondfilename,"r");
    if(Fptr == NULL)
     {
        printf("Invalid file");
        exit(1);
    }
    int lengthfileone = 0;
    int lengthfiletwo =0;
    char ch;
    while((ch = getc(fptr)) != EOF)
    {
        lengthfileone++;

    }
    while((ch = getc(Fptr)) != NULL)
    {
        lengthfiletwo++;

    }


    char dataonefile[lengthfileone-1=   '\0';
    char datatwofile[lengthfiletwo]=' \0';
    int i=0;
    while((ch = getc(fptr)) != NULL)
    {
        dataonefile[i] = ch;
        i++;

    }
    dataonefile[strcspn(dataonefile,"\n")] = '\0';
    int j =0;
    while((ch = getc(fptr)) != NULL)
    {
        datatwofile[j] = ch;
        j++;
        

    }
    datatwofile[strcspn(datatwofile,"\n")] = '\0';
    fclose(fptr);
    fclose(Fptr);
    char filename[100];
    FILE *FPTR;

    printf("enter file for data storing ");
    scanf("%s",filename);
    FPTR = fopen(filename,"w");

    char wholedatathree[lengthfileone + lengthfiletwo]; 

    strcpy(wholedatathree,dataonefile);
    strcat(wholedatathree,datatwofile);

    wholedatathree[lengthfiletwo+1] = " ";
    for(int i = 0; i < lengthfileone+lengthfiletwo;i++)
    {
        fprintf(FPTR,"%c",wholedatathree[i]);
    }

    fclose(FPTR);

}

//Q7
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Item{
    int productid;
    char name[100];
    float price;
    int quantity;

};
void addinventory(FILE * fptr,struct Item item [],int n );
void appenddata(FILE * fptr,struct Item item [],int n );
void searchdata(FILE * fptr);
void delete(FILE *fptr,struct Item item[],int n,char filename[]);
int main()
{
    
    printf("welcome to simple inventory management system \n");
    char choice[100];
    char filename[100];
    int n;
    while(1)
    {
        printf("enter choice :");
        scanf("%s",choice);
        if(strcmp(choice,"add")==0)
        {
               FILE *fptr;
               printf("enter n products \n");
               scanf("%d",&n);
               printf("enter file name ");
               scanf("%s",filename);
               struct Item item[n];

               fptr = fopen(filename,"w");
               if(fptr == NULL)
               {
                printf("invalid ");
                exit(1);
               }
               addinventory(fptr,item,n);
               fclose(fptr);
        }
        else if(strcmp(choice,"append")==0)
        {
               FILE *fptr;
               printf("enter n products \n");
               scanf("%d",&n);
               printf("enter file name ");
               scanf("%s",filename);
               struct Item item[n];

               fptr = fopen(filename,"a");
                if(fptr == NULL)
               {
                printf("invalid ");
                exit(1);
               }
               appenddata( fptr, item, n );
               fclose(fptr);
        }
        else if(strcmp(choice,"search")==0)
        {
               FILE *fptr;
              

               fptr = fopen(filename,"r");
                if(fptr == NULL)
               {
                printf("invalid ");
                exit(1);
               }
               searchdata(fptr);
               fclose(fptr);
        }
        else if(strcmp(choice,"delete")==0)
        {
               FILE *fptr;
               printf("enter n products \n");
               scanf("%d",&n);
               struct Item item[n];
            printf("enter file name ");
               scanf("%s",filename);
               fptr = fopen(filename,"w");
                if(fptr == NULL)
               {
                printf("invalid ");
                exit(1);
               }
               delete(fptr, item, n,filename);
               fclose(fptr);
        }
       else if(strcmp(choice,"exit")==0)
       {
        break;
       }
       else{
        printf("invalid input ");
       }

    }
    
}
void addinventory(FILE * fptr,struct Item item [],int n)
{
   for(int i =0; i<n;i++)
   {
    printf("details for products %d\n",i+1);
    printf("enter product id ");
    scanf("%d",&item[i].productid);
    printf("enter product name ");
    scanf("%s",item[i].name);
    printf("enter price ");
    scanf("%f",&item[i].price);
    printf("enter total quantity ");
    scanf("%d",&item[i].quantity);
    fprintf(fptr,"%d  %s %f %d\n",item[i].productid,item[i].name,item[i].price,item[i].quantity);
   }


}

void appenddata(FILE * fptr,struct Item item [],int n )
{
    for(int i =0; i<n;i++)
   {
    printf("details for products %d\n",i+1);
    printf("enter product id ");
    scanf("%d",&item[i].productid);
    printf("enter product name ");
    scanf("%s",item[i].name);
    printf("enter price ");
    scanf("%f",&item[i].price);
    printf("enter total quantity ");
    scanf("%d",&item[i].quantity);
    fprintf(fptr,"%d  %s %f %d\n",item[i].productid,item[i].name,item[i].price,item[i].quantity);
   }

}

void searchdata(FILE * fptr )
{
    rewind(fptr);
    char charachter;
    struct Item item;
    printf("enter charachter ");
    scanf(" %c ",&charachter);
    int Found = 0;
    while(fscanf(fptr,"%d %s %f %d ",&item.productid,item.name,&item.price,&item.quantity) )
    {
        if(item.name[0] == charachter)
        {
            printf("product id %d \n",item.productid);
            printf("name id %s \n",item.name);
            printf("price id %f \n",item.price);
            printf("quantity id %d \n",item.quantity);
            Found =1;
        }

    }
    if(!Found)
    {
        printf("not found ");
    }
}

void delete(FILE *fptr,struct Item item[],int n,char filename[])
{
    int Productid;
    printf("enter product id ");
    scanf("%d",&Productid);
    FILE *Fptr = fopen("temp.txt","w");
    int FOUND = 0;
    for(int i = 0; i < n;i++)
    {
        

        if(item[i].productid==Productid)
        {
           FOUND =1;

        }
        else{
            fprintf(Fptr,"%d %s %f %d \n",item[i].productid,item[i].name,item[i].price,item[i].quantity);
        }
        
    }
    fclose(Fptr);
    if(FOUND == 1)
    {

    
    remove(filename);
    rename("temp.txt",filename);
    }
    else{
        printf("not found ");
    }
}

//q8 lab 11
#include<stdio.h>
#include<math.h>

struct point
{
    float pointx;
    float pointy;
    
 
};

struct shape
{
    char shapename[20];
    int totalvertex;
    struct point  VERTEX[4];

};
void inputshape(struct shape Shape[],int n);
void displayshape(struct shape Shape[],int n,float perimeter[],float area[]);
void findlargestarea(struct shape Shape[],int n, float area[]);
void calculatePerimeterAndArea(struct shape Shape[], int n, float perimeter[], float area[]);

int main()
{
    int n;
    printf("enter n shapes info  ");
    scanf("%d",&n);
 
  

    struct shape Shape[n];
    
    float perimeter[n];
    float area[n];
    inputshape( Shape, n);
    calculatePerimeterAndArea(Shape, n,perimeter , area);
    displayshape(Shape, n, perimeter, area);
    findlargestarea(Shape, n,  area);
    

}
void inputshape(struct shape Shape[],int n)
{
  for(int y = 0; y < n;y++)
  {
    printf("enter info on shape %d \n",y+1);
    printf("enter shape ");
    scanf("%s",Shape[y].shapename);

    printf("enter tnumber of vertex ",y+1);
    scanf("%d",&Shape[y].totalvertex);
    if(Shape[y].totalvertex <=4 && Shape[y].totalvertex >=3)
    {
        printf("continue \n");
        for(int x =0; x < Shape[y].totalvertex ;x++)
        {
            printf("enter xcoordinate of point %d " ,x+1);
            scanf("%f",&Shape[y].VERTEX[x].pointx);
            printf("enter ycoordinate of ppoint %d ",x+1);
            scanf("%f",&Shape[y].VERTEX[x].pointy);
        
        }
    }
    else
    {
        printf("re enter ");
    }
  
 
  }
}


void displayshape(struct shape Shape[],int n,float perimeter[],float area[])
{
    for(int i = 0; i < n; i++)
    {
        printf("shape is %s \n",Shape[i].shapename);
        printf("Area is %.2f \n",area[i]);
         printf("perimeter is %.2f \n",perimeter[i]);
        
        
    }
}

void findlargestarea(struct shape Shape[],int n, float area[])
{
    
    float largest = area[0];
    int index =0;
    for(int i =0; i < n; i++)
    {
        if(area[i] >   largest )
        {
            largest = area[i];
            index = i;
            
        }
    }
    printf("shape with largest area is %f , %d",largest,index);
    
  
}

void calculatePerimeterAndArea(struct shape Shape[], int n, float perimeter[], float area[]) {
    for (int i = 0; i < n; i++) {
        perimeter[i] = 0;  
        area[i] = 0;       

        if (Shape[i].totalvertex == 3) 
        {  
            for (int j = 0; j < 3; j++) {
                int next = (j + 1) % 3; 
                float dx = pow(Shape[i].VERTEX[next].pointx - Shape[i].VERTEX[j].pointx,2);
                float dy = pow(Shape[i].VERTEX[next].pointy - Shape[i].VERTEX[j].pointy,2);
                perimeter[i] = perimeter[i] + sqrt(dx + dy);
            }

            area[i] = 0.5 * fabs(
                Shape[i].VERTEX[0].pointx * (Shape[i].VERTEX[1].pointy - Shape[i].VERTEX[2].pointy) +
                Shape[i].VERTEX[1].pointx * (Shape[i].VERTEX[2].pointy - Shape[i].VERTEX[0].pointy) +
                Shape[i].VERTEX[2].pointx * (Shape[i].VERTEX[0].pointy - Shape[i].VERTEX[1].pointy)
            );
        }
        else if (Shape[i].totalvertex == 4)
        { 
            perimeter[i] = 0;
            for (int j = 0; j < 4; j++) {
                int next = (j + 1) % 4;
               
                float dx = pow(Shape[i].VERTEX[next].pointx - Shape[i].VERTEX[j].pointx,2);
                float dy = pow(Shape[i].VERTEX[next].pointy - Shape[i].VERTEX[j].pointy,2);
              
                perimeter[i] = perimeter[i] +  sqrt(dx + dy);
            }

          
            float width = sqrt(pow(Shape[i].VERTEX[1].pointx - Shape[i].VERTEX[0].pointx, 2) + 
                               pow(Shape[i].VERTEX[1].pointy - Shape[i].VERTEX[0].pointy, 2));
            float height = sqrt(pow(Shape[i].VERTEX[2].pointx - Shape[i].VERTEX[1].pointx, 2) + 
                                pow(Shape[i].VERTEX[2].pointy - Shape[i].VERTEX[1].pointy, 2));
            area[i] = width * height;  
        }
    }

 }

//q9
#include<stdio.h>
#include<math.h>


struct point{
    float startx;
    float starty;
    float startz;
    float endx;
    float endy;
    float endz;
    float timetaken;
    
};

struct vehicle{
    int vehicleid;
    struct point info;
    
};

void inputpoint(struct vehicle disto[],int n);
void calculatedistance(struct vehicle disto[],int n,float vehiclesspeed[],float vehiclesdistance[]);
void largestspeed(int n, struct vehicle disto[], float vehiclesspeed[]);
void findvehicles(int n,float vehiclesdistance[],struct vehicle disto[]);

int main ()
{
    int n;
    printf("enter n vehicles");
    scanf("%d",&n);

    struct vehicle disto[n];
    float vehiclesspeed[n];
    float vehiclesdistance[n];

    inputpoint(disto,n);
    calculatedistance(disto,n,vehiclesspeed,vehiclesdistance);
    largestspeed(n,disto,vehiclesspeed);
    findvehicles(n,vehiclesdistance,disto);
    
}
void inputpoint(struct vehicle disto[],int n)
{
    for(int y =0;  y< n; y++)
    {
        printf("info for vehicle %d \n",y+1);

        printf("enter vehicle id ");
        scanf("%d",&disto[y].vehicleid);

        printf("enter x point of start");
        scanf("%f",&disto[y].info.startx);

        printf("enter y point of start");
        scanf("%f",&disto[y].info.starty);

        printf("enter z point of start");
        scanf("%f",&disto[y].info.startz);

        printf("enter x point of end");
        scanf("%f",&disto[y].info.endx);

        printf("enter y point of end");
        scanf("%f",&disto[y].info.endy);

        printf("enter z point of end");
        scanf("%f",&disto[y].info.endz);

          printf("enter timetaken for whole journey");
        scanf("%f",&disto[y].info.timetaken);




    }
}

void calculatedistance(struct vehicle disto[],int n,float vehiclesspeed[],float vehiclesdistance[])

{
    for(int i =0; i<n;i++)
    {
        float x =pow(disto[i].info.endx - disto[i].info.startx,2);
        float y =pow(disto[i].info.endy - disto[i].info.starty,2);
        float z =pow(disto[i].info.endz - disto[i].info.startz,2);

        float distance = sqrt(x+y+z);
        vehiclesdistance[i] = distance;
        printf("vehicle %d has length of %f \n",i+1,distance);

        float speed = distance/disto[i].info.timetaken;
        vehiclesspeed[i] = speed;
        printf("speed of vehicle %d is %f\n",i+1,speed);

    }

}

void largestspeed(int n, struct vehicle disto[], float vehiclesspeed[])

{
    float largest = vehiclesspeed[0];
    for(int i =0; i<n;i++)
    {
        if(largest< vehiclesspeed[i])
        {
            largest = vehiclesspeed[i];

        }
    }
    printf("fastest vehicle is %f\n",largest);

}

void findvehicles(int n,float vehiclesdistance[],struct vehicle disto[])
{
    float distance;
    printf("enter threshold for distance \n");
    scanf("%f",&distance);

    for(int i =0; i< n; i++)
    {
        if( vehiclesdistance[i] > distance)
        {
            printf("vehicle is %d\n",disto[i].vehicleid);
        }
    }
}


//Q10
#include<stdio.h>
struct Question
{
    int questionnum;
    float Answertime;
    int Correctype;
};

struct Student{
    char studentname[50];
     struct Question question[10];
    

};

void inputscores(struct Student student[],int n,int cards[]);
void correctanswers(int n ,struct Student student[],int cards[]);
void averagetime(int n , struct Student student[],float averagetimeanswer[],int cards[]);
void fastestaveragetime(int n,float  averagetimeanswer[],struct Student student[]);
void ranking(int n,float averagetimeanswer[],struct Student student[]);


int main()
{
   
    int n;
    printf("enter total students data needed");
    scanf("%d",&n);
    struct Student student[n];
    int cards[n];
    float averagetimeanswer[n];

    inputscores(student,n,cards);
    correctanswers(n , student,cards);
    averagetime(n , student,averagetimeanswer,cards);
    fastestaveragetime( n,  averagetimeanswer,student);
    ranking( n,averagetimeanswer,student);


}


void inputscores(struct Student student[],int n,int cards[])
{
    

    for(int j =0; j<n; j++)
    {
        printf("enter total scorecards to be needed for student %d ",j+1);
        scanf("%d",&cards[j]);
        for(int i = 0; i < cards[j];i++)
        {
        printf("Enter name of student %d :",j+1);
        scanf("%s",student[j].studentname);

        printf("enter question number ");
        scanf("%d",&student[j].question[i].questionnum);

        printf("enter question answeer time  ");
        scanf("%f",&student[j].question[i].Answertime);

        printf("enter is corect or not if correct enter one else enter 0");
        scanf("%d",&student[j].question[i].Correctype);
        }
    }

}

void correctanswers(int n ,struct Student student[],int cards[])

{
 
    for(int i =0; i < n; i++)
    {
        
        int totalcorrect =0;
        for(int y = 0; y < cards[i]; y++)
        {

        

        if(student[i].question[y].Correctype == 1)
        {
            totalcorrect++;
        }
        }
        printf("total correct is %d  for %d student % s \n",totalcorrect,i+1,student[i].studentname);
    }
}

void averagetime(int n , struct Student student[],float averagetimeanswer[],int cards[])
{
    
    
    
   
    for(int y =0; y < n; y++)
    {
           int total = 0;
      
          float average=0.0;
          int totalcorrect =0;
       
        for(int u =0; u < cards[y]; u++)
        {

        
        
        if(student[y].question[u].Correctype == 1)
        {
            total = total + student[y].question[u].Answertime;
            totalcorrect++;

        }
        }
        if(totalcorrect > 0)
        {
              average = (float)total/totalcorrect;
        }
        else
        {
            average = 0.0;
        }
        
        averagetimeanswer[y] = average;
       
        printf("%.2f\n",average);
    }
   

}

void fastestaveragetime(int n,float  averagetimeanswer[],struct Student student[])
{
    

    int index=0;
    float fastesttime =  averagetimeanswer[0];
    for(int r = 1; r < n; r++)
    {
        if(averagetimeanswer[r] < fastesttime)
        {
            fastesttime = averagetimeanswer[r];
            index = r;
        }
    }
    printf("best is %.2f index is %d student %s \n",fastesttime,index,student[index].studentname);
}

void ranking(int n, float averagetimeanswer[], struct Student student[]) {

    int TEMP[n];
    for (int i = 0; i < n; i++)
    {
         TEMP[i] = i;  
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(averagetimeanswer[ TEMP[j]] > averagetimeanswer[ TEMP[j + 1]]) {

                int temp =  TEMP[j];
                 TEMP[j] =  TEMP[j + 1];
                 TEMP[j + 1] = temp;
            }
        }
    }

    
    
    for (int i = 0; i < n; i++) {
        printf("student %d ,  %s with average time %.2f\n", i + 1, student[ TEMP[i]].studentname, averagetimeanswer[ TEMP[i]]);
    }
}




