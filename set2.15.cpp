#include <stdio.h>  
   
int main()
{  
    int counter;
    printf("even numbers between 1 to 50\n");  
   
    
    for(counter = 1; counter <= 50; counter++) {  
         
        if(counter%2 == 0) { 
         
            printf("%d ", counter);  
        }  
    }  
   
    return 0;  
} 

15
