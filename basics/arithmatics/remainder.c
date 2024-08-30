#include<stdio.h>
int main() {

    int num,denom;  //declared quot and remain here only and got error cuz i declared it twise

    printf("enter the numerator :");
    scanf("%d",&num);

    printf("enter denominator value :");
    scanf("%d",&denom);
    int quot=num/denom;
    int remain=denom*quot-num;  // remainder theorem:- denom*quot+remain=num( num%denom)

    printf("quotent is = %d\n",quot);
    printf("the remainder is =%d",-remain);  //u need to put -remain cuz remainder is calculated in -ve when you use remainder theorem 

    return 0;
}