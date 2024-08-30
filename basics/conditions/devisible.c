#include<stdio.h>
int main() {

    int a,b;
    
    printf("enter valu of a =");
    scanf("%d",&a);


    printf("enter value of b =");
    scanf("%d",&b);  // i put % instead of & and got error 
 int c=a%b;
    if(c==0){
        printf("the numbers are devisible");
    }
    else{
        printf("the numbers are not devisible");
    }
return 0;
}