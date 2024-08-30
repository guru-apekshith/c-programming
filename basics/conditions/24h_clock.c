#include<stdio.h>
int main() {

    int hrs,mins;

    printf("enter hours in 24h format =");
    scanf("%d",&hrs);

    printf("enter the minutes");
    scanf("%d",&mins);

    if(hrs<=12){
        printf("the time in 12h format is = %d:%d",hrs,mins);
    }
    else{
        printf("your time in 12h format is = %d:%d",hrs-12,mins);
        
    }

    return 0;
}

 