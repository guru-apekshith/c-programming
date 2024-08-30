#include<stdio.h>
int main() {

    int number;
    

    printf("enter your number = ");
    scanf("%d",&number);

    int denom= number%2;

    if(denom==0){ 
    
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }

}