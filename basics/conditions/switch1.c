#include<stdio.h>
void main(){
    int num;
    printf("Enter  Your choice :");
    scanf("%d", &num);

    switch(num){
        case 1:
           printf("You selected case 1 for execution");
           break;
        case 2:
           printf("You selected case 2 for execution");
           break;
        case 3:
           printf("You selected case 3 for execution");
           break;
        default:
           printf("You selected  other than case 1,2,3 for execution");
           break;   
    }
}