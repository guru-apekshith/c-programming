#include<stdio.h>
int main() {

    int a,b,c;
    printf("enter random number a =");
    scanf("%d",&a);

    printf("enter random number b =");
    scanf("%d",&b);

    printf("enter random number c =");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
        printf("%d is the biggest value",a);
        }
    }
    if(b>a){
        if(b>c){
        printf("%d is the biggest value",b);
        }
    }
    if(c>a){
        if(b<c){
        printf("%d is the biggest value ",c);
        }
    }
        
            return 0;
}