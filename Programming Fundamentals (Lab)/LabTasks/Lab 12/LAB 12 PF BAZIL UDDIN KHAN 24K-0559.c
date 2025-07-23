//Q2
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int totalnum;
    printf("Enter total elements in array ");
    scanf("%d",&totalnum);
    int *array;
    int element;
    array = malloc(sizeof(int )* totalnum);
    for(int i =0; i < totalnum;i++)
    {
        printf("Enter element ");
        scanf("%d",&element);
        array[i] = element;
    }
    for(int i =0; i < totalnum;i++)
    {
        if(array[i]%2!=0)
        {
            array[i] = array[i] -1;
            
        }
    
    }
    for(int y =0; y < totalnum;y++)
      {
          printf(" %d ",array[y]);
          
      }
      free(array);
    return 0;
}

//q3


#include <stdlib.h>
#include <stdio.h>

void addnewnum(float **ptr, int *size, int *capacity);
void display(float *ptr, int size);
void remove_last(float **ptr, int *size, int *capacity);
void reducememory(float **ptr, int *size, int *capacity);

int main() {
    int size = 0, capacity = 4; 
    float *ptr = malloc(sizeof(float) * capacity);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    addnewnum(&ptr, &size, &capacity);
    display(ptr, size);

   
    remove_last(&ptr, &size, &capacity);
    display(ptr, size);

   
    reducememory(&ptr, &size, &capacity);
    display(ptr, size);

    free(ptr);  
    return 0;
}


void addnewnum(float **ptr, int *size, int *capacity) {
    float num;
    
   
    if (*size >= *capacity) {
        *capacity *= 2;  
        *ptr = realloc(*ptr, sizeof(float) * (*capacity));
        if (*ptr == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }
    
   
    printf("Enter a number: ");
    scanf("%f", &num);
    (*ptr)[*size] = num;
    (*size)++;
}


void display(float *ptr, int size) {
    printf("Current elements in the array: ");
    for (int i = 0; i < size; i++) {
        printf("%f ", ptr[i]);
    }
    printf("\n");
}


void remove_last(float **ptr, int *size, int *capacity) {
    if (*size > 0) {
        (*size)--;  
        if (*size <= *capacity / 4) {
            reducememory(ptr, size, capacity);  
        }
    } else {
        printf("Array is already empty.\n");
    }
}


void reducememory(float **ptr, int *size, int *capacity) {
    if (*capacity > 4 && *size <= *capacity / 4) {
        *capacity /= 2;  // Halve the capacity
        *ptr = realloc(*ptr, sizeof(float) * (*capacity));
        if (*ptr == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
}


//q4
#include <stdio.h>

#define MAX_NUM 10000

int main() {
    int total;
    scanf("%d", &total);

    int results[total];

    for (int testCase = 0; testCase < total; testCase++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        int frequency[MAX_NUM] = {0};

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            frequency[arr[i]]++;
        }

        int maxFreq = 0;
        int result = MAX_NUM;

        for (int i = 1; i < MAX_NUM; i++) {
            if (frequency[i] > maxFreq) {
                maxFreq = frequency[i];
                result = i;
            } else if (frequency[i] == maxFreq && i < result) {
                result = i;
            }
        }

        results[testCase] = result;
    }

    for (int testCase = 0; testCase < t; testCase++) {
        printf("%d\n", results[testCase]);
    }

    return 0;
}

//Q5
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int total;
    scanf("%d", &total);

    while (total--) {
        int n;
        scanf("%d", &n);

        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int currentSize = n;

        char op;
        int pos, value;
        scanf(" %c %d %d", &op, &pos, &value);
        if (op == 'I') {
            arr = (int *)realloc(arr, (currentSize + 1) * sizeof(int));

            for (int i = currentSize; i > pos; i--) {
                arr[i] = arr[i - 1];
            }

            arr[pos] = value;
            currentSize++;
        }

        for (int i = 0; i < currentSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        scanf(" %c %d", &op, &pos);
        if (op == 'D') {
            for (int i = pos; i < currentSize - 1; i++) {
                arr[i] = arr[i + 1];
            }

            currentSize--;
            arr = (int *)realloc(arr, currentSize * sizeof(int));
        }

        for (int i = 0; i < currentSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);
    }

    return 0;
}


//q6
#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int totalelement;
    printf("Enter total elements bw 1 to 100 :");
    scanf("%d",&totalelement);
    int element;
    if(totalelement > 1 && totalelement < 100)
    {
        int *array;
        array = malloc(sizeof(int)*totalelement);
        for(int i =0; i < totalelement;i++)
            {
                printf("Enter element :");
                scanf("%d",&element);
                array[i] = element;
                
            }
            int largest =array[0];
        for(int y =0; y < totalelement; y++)
         {
             if(largest < array[y])
            {
                 largest=array[y];
            }
         }
         printf( "Largest element is %d ",largest);
         free(array);
    }
    else
     {
         printf("re try");
     }

    return 0;
}

// q7
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int totalpoints;
    printf("Enter total points :");
    scanf("%d",&totalpoints);
    int *array;
    array = malloc(sizeof(int)* totalpoints);
    int fees;
    for(int i =0; i< totalpoints;i++)
    {
        printf("Enter fees for point dollar  %d ",i+1);
        scanf("%d",&fees);
        array[i] = fees;
    }
    float total =0;
    
    for(int i =0; i < totalpoints;i++)
      {
          total = total + array[i];
      }
      printf("The total is %f ",total);
      
    free(array);
    return 0;

}