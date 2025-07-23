//Bazil Uddin Khan
//Q1
    #include<stdio.h>
    int main(){
	
         int timeformat;
         printf("e nter hours time");
         scanf("%d",&timeformat);
        
         if(timeformat >5 && timeformat <11){
		 
            printf("good morning");}
         else if (timeformat >12 && timeformat <18 ){
		 
            printf("good evening");} 
         else if (timeformat >18 && timeformat < 24)	{
		 
		 
            printf("good night");}
        else {
        	printf("invalid");
		}

	
	
}


// Q2
    #include<stdio.h>
    int main(){
	
        int num1;
        int num2;
        int num3;
        
        printf("input first number");
	    scanf("%d",&num1);
	    printf("input second number");
	    scanf("%d",&num2);
	    printf("input 3 rd number");
	    scanf("%d",&num3);
	    
	    if (num1 > num2 && num1 > num3){
		
	       printf("largest number is  %d",num1);}
	    else if (num2 > num3 && num2 > num1) {
		
	        printf("largest number is  %d",num2);}
	    else {
		
		    printf("largest number is  %d",num3);
		
		    
	 }  
	       
		 char operationtype[20];
		  printf("type of operation");
		  scanf("%c",operationtype);
		  if operationtype == ''  
	       

}
// Q3 through for loop alternate below
/*

#include<stdio.h>
int main() {
	int noofsnack,total=0;
	char snack;
    printf("enter no of snacks to be buyed");
	scanf("%d", &noofsnack);
	for (int i = 0; i < noofsnack; i++){

	 printf("enter the snack among f/p/s/b");
	 scanf(" %c", &snack);
	 switch(snack) {

	 
	    case 'b':{
	     int totalburgerprice;
		 totalburgerprice = 200;
		 total = total + totalburgerprice;
		 printf("so burger price is %d \n",totalburgerprice);
		 
		 break;
	   }
	    case 'f':{
	     int totalfrenchprice;
		 totalfrenchprice =  50;
		 total = total + totalfrenchprice;
		 printf("so french price is %d \n ",totalfrenchprice);
		 
		 break;
	 }
	    case 'p':{
	     int totalpizzaprice;
		 totalpizzaprice =  500;
		 total = total + totalpizzaprice;
		 printf("so pizza price is %d \n ",totalpizzaprice);
		 
		 break;
	 }
	   	case 's':{
	     int totalsandwitchprice;
		 totalsandwitchprice = 150;
		 total = total + totalsandwitchprice;
		 printf("so sandwitchprice is %d \n",totalsandwitchprice);
		 
		 break;
	 }
	 }
	} 


	 
	 printf("the total is %d",total);
	 return 0;
	 */
} 
//Q3
#include<stdio.h>

int main()
{
	int Totalchoice = 0 ;
	
	printf("enter type of snack to be buyed  ");
	scanf("%d", &Totalchoice );
	char firstchoice, secondchoice, thirdchoice, fourthchoice;
	int firstprice = 0, secondprice = 0, thirdprice = 0, fourthprice = 0;
	int firstquantity = 0;
	int secondquantity =0 ;
	int thirdquantity = 0;
	int fourthquantity = 0;
	int total = 0;

	if(Totalchoice >= 1)
	{
		printf("Enter your choice in small letters p/f/b/s");
		scanf(" %c", &firstchoice);
		printf("enter total  quantity of specific item needed ");
		scanf("%d", &firstquantity);
		switch(firstchoice){
			case 'b':
				firstprice = firstquantity* 200;
				break;
	
			case 'f':
				firstprice = firstquantity * 50;
				break;
			
			case 'p':
			    firstprice= firstquantity * 500;
				break;
			
			case 's':
				firstprice = firstquantity * 150;
				break;
				
			default:
				printf("Invalid ");
				break;
		}
	}
	if(Totalchoice >= 2)
	{
		printf("Enter your choice in small letters p/f/b/s ");
		scanf(" %c", &secondchoice);
		printf("enter total  quantity of specific item needed  ");
		scanf("%d", &secondquantity);
		switch(secondchoice){
			
			case 'b':
				secondprice = secondquantity * 200;
				break;
			
			case 'f':
				secondprice = secondquantity * 50;
				break;
			
			case 'p':
				secondprice = secondquantity * 500;
				break;
			
			case 's':
				secondprice = secondquantity * 150;
				break;
			default:
				printf("Invalid  ");
				break;
		}
	}
	if(Totalchoice >= 3)
	{
		printf("Enter your choice in small letters p/f/b/s");
		scanf(" %c", &thirdchoice);
		printf("enter total  quantity of specific item needed  ");
		scanf("%d", &thirdquantity);
		switch(thirdchoice){
			
			case 'b':
				thirdprice = thirdquantity * 200;
				break;
			
			case 'f':
				thirdprice = thirdquantity * 50;
				break;
			
			case 'p':
				thirdprice = thirdquantity * 500;
				break;
			
			case 's':
				thirdprice = thirdquantity * 150;
				break;
			default:
				printf("Invalid ");
				break;
		}
	}
	if(Totalchoice == 4)
	{
		printf("Enter your choice in small letters p/f/b/s ");
		scanf(" %c", &fourthchoice);
		printf("enter total  quantity of specific item needed  ");
		scanf("%d", &fourthquantity);
		switch(fourthchoice){
			
			case 'b':
				fourthprice = fourthquantity * 200;
				break;
			
			case 'f':
			    fourthprice = fourthquantity * 50;
				break;
			
			case 'p':
				fourthprice = fourthquantity * 500;
				break;
			
			case 's':
				fourthprice = fourthquantity * 150;
				break;
			default:
				printf("invalid");
				break;
		}
	}
	
	total = firstprice + secondprice + thirdprice + fourthprice;
	printf("Total: %d \n",total);
	if(firstquantity > 0)
		printf("%d %c for %d \n", firstquantity, firstchoice, firstprice);
	if(secondquantity > 0 )
		printf("%d %c for %d \n",secondquantity, secondchoice, secondprice);
	if(thirdquantity > 0 )
		printf("%d %c for %d \n",thirdquantity, thirdchoice, thirdprice);
	if(fourthquantity > 0 )
		printf("%d %c for %d \n",fourthquantity, fourthchoice, fourthprice);



//Q4
#include<stdio.h>
int main() {
	char coffetype;
	float totaltime = 0;
	printf("ENTER Type of coffe");
	scanf("%c",&coffetype);
	char coffesize;
	printf("enter cffoe ");
	scanf("%c", &coffesize);
	totaltime = 0;
	switch (coffetype){
		case 'B' : {
		   totaltime = totaltime + 20 // time toputwater
		   totaltime = totaltime + 20 //sugar
		   totaltime = totaltime + 25  //mixwell
		   totaltime = totaltime + 15   // addcoffe
		   totaltime = totaltime + 25 //mix well
		   if (coffesize == 'd')
		   {
			totaltime = totaltime + (totaltime*0.5);
		   }
		   break;
	}
		case 'W' : {
		   totaltime = totaltime + 15 // time toputwater
		   totaltime = totaltime + 15 //sugar
		   totaltime = totaltime + 20  //mixwell
		   totaltime = totaltime + 2  // addcoffe
		   totaltime = totaltime + 4 // addmilk
		   totaltime = totaltime + 20  //mix well
		   if (coffesize == 'd')
		   {
			totaltime = totaltime + (totaltime*0.5);
		   }
		   break;
		}
		default {
			printf("invalid input");
		}  
	printf("the total time it took in making %c coffe ",coffetype,"is %f",totaltime);
	return 0;

	}
}






//Q6
#include<stdio.h>
int main() {
	int price,discountprice;
	printf("ENTER TOTAL PRICE");
	scanf("%d",price);
	if (price >=500) {
		if (price < 2000){
		
		   	discountprice = price * 0.05;
		   	}
		else if (price >= 2000 && price < 4000){
			discountprice = price * 0.1;
		}
		else if (price >= 40000 && price <6000){
			discountprice = price * 0.2;
			
		}

		else if (price > 6000)
		{
			discountprice = price * 0.35;
		}
		
		printf("the amount is %d",discountprice);
		printf("the discountis%d",price - discountprice);
		printf("the discountis%d",price);
  }
	else
	{
		printf("not eligible for discount");
	}
	
}

//Q5
#include <stdio.h>
int main() {
	float electricityunit;
	float totalprice;

	printf("enter electricity units");
	scanf("%f",&electricityunit);

	if (electricityunit <=50)
	 {
		totalprice = electricityunit * 0.5;
	}

	else if (electricityunit > 50 && electricityunit <= 150)
	{
		totalprice = (50*0.5) +  (electricityunit - 50 * 0.75);

	}
	else if (electricityunit > 150 && electricityunit <= 250)
	{
		totalprice = (50 * 0.5) + (100 * 0.75) +  (electricityunit - 150  * 1.2);

	}
	else if electricityunit >=250 
	{
		totalprice =(50 *0.5) + (100 * 0.75 ) + (100 * 1.2) + (electricityunit - 250) * 1.5;

	}
	totalprice = totalprice + (totalprice * 0.2);
	printf("the total bill is %f", totalprice);
	return 0;


}
//q7
#include <stdio.h>
int main(){
	int number;
	printf("enter the number");
	scanf("%d",&number);

	if (number == 1)
	{
		printf("the number %d is one",number);

	}
	else if (number == 2)
	{
		printf("the number %d is two",number);
	}
	else if (number == 3)
	{
		printf("the number %d is three",number);
	}
	else if (number == 4)
	{
		printf("the number %d is four",number);
	}
	else if (number == 5)
	{
		printf("the number %d is five",number);
	}
	else if (number == 6)
	{
		printf("the number %d is six",number);
	}
	else if (number == 7)
	{
		printf("the number %d is seven",number);
	}
	else if (number == 8)
	{
		printf("the number %d is eight",number);
	}
	else if (number == 9)
	{
		printf("the number %d is nine",number);
	}
	else if (number > 9)
	{
		printf("the number is greater than 9 %d",number);
	}
	else
	{
		printf("invalid");
	}

}
