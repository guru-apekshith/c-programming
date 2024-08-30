#include<stdio.h>
int main() {

    int a,b;
    printf("enter number a");
    scanf("%d",&a);

    printf("enter number b");
    scanf("%d",&b);

    if(a>b) {
        printf("the number %d is greater than the number %d",a,b);
    }

     else {
        printf("the number %d is lesser than the number %d",a,b);
     }
 return 0;

}