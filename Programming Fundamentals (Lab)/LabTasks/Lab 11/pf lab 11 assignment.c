//q5
#include<stdio.h>
int main()
{
    char filename{100};
    printf("enter file name :");
    scanf("%s",filename);
    FILE *fptr;
    fptr = fopen(filename,"r");
    if(fptr == NULL)
    {
        printf("file dont exist ");
        return 0;
    }
    int length =0;
    while((ch = fgetc(fptr))!= EOF)
    {
        length++;

    }
    char array[length+1] = '\0';
    int i =0;
    while((ch = fgetc(fptr))!= EOF)
    {
        array[i] = charachter;

    }
    char reversedarray[length+1]='\0'; 
    int j = length;
    for(int i =0; i<length;i++)
    {
        char cgar = array[i];
        reversedarray[j]= cgar;
        j--;


    }
    fclose(fptr);

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

    FILE *destinityptr = open(destinationfile,"w");
    if(destinityptr == NULL)
    {
        printf("file dont exist ");
        return 1;
    }

    FILE *fptr = fopen(filename,"r");
    char CH;
    while((CH = fgetc(fptr) ) !=EOF)
    {
        fputc(CH,destinityptr);
    }

    fclose(destinityptr);
    fclose(fptr);


    

}
