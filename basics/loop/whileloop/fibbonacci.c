#include<stdio.h>
int main() {

    int a=0,b=1,c,n;
    
    printf("enter final number = ");
    scanf("%d",&n);
printf("0 ,1 ");
while((a+b)<n){
c=a+b;
printf("%d ,",c);
a=b;
b=c;
}



}