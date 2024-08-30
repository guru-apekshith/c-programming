#include<stdio.h>
int main() {

    int num,ten=10;

    printf("enter large number here =");
    scanf("%d",&num);
    int sum=0;

while(num>0){
    num=num/10;
    sum++;

    }

printf("no of digits = %d",sum);
}

