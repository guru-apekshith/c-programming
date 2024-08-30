#include<stdio.h>
int main() {

    int num1;
    int num2;
    int nprime;

    printf("enter number 1 = ");
    scanf("%d",&num1);
    printf("enter number 2 = ");
    scanf("%d",&num2);

    while (num1<num2)
    {
       
        nprime=2;
        while(nprime<num1){

            if(num1%nprime==0)
                break;        
            nprime++;
        }   

        if(nprime==num1)
            printf("%d ,",num1);
    num1++;
    }
    
  return 0;
}