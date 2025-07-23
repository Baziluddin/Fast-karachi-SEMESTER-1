//Bazil-uddin-khan
#include<stdio.h>

int main() {
    int number, a = 0, b = 1, next;

    // Take user input
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (number <= 1) {  // **Important 
        printf("Number is not prime\n");
        
    }

    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {  // **If a 
            printf("Number is not prime\n");
            
        }
    }

    
    printf("Number is prime\n");
    printf("Series is = %d %d", a, b);  // **

    next = a + b;

    while (next <= number) {  // **Print 
        printf(" %d", next);
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}



//Q9
#include<stdio.h>
int main(){
    int number;
    
    printf("enter number");
    scanf("%d",&number);
    int total = 0;
    int num = number;


    while (number > 0)
    {    
         
         int digit = number % 10;
         total = total + (digit * digit* digit); 
         number = number / 10;
         

    }
    if (total == num){
        printf("its a armstrong number");
    }
    else
    {

        printf("its not a armstrong number");
    }
    return 0;

   
}