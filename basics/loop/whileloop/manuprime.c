#include<stdio.h>
int main() {

    int number;
    int integer=2;
    printf("enter number of choice =");
    scanf("%d",&number);

    while(integer<(number)){
        integer=integer+1;
            if(number%integer==0){
            printf("your number is composite because it is divisible %d", integer);
            break;
           }

    }
            
    if(integer>(number))
         printf("your number is prime");
        
        
    
    
return 0;

    }

