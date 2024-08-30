#include<stdio.h>
int main() {

int number,num2;
printf("enter your number of choice");
scanf("%d",&number);
num2=number;
int sum=0;
     while(number>0){
     number=number/10;
     sum++;
     }
printf("your number %d has %d digits\n",num2,sum); 
int pows=sum/2;
printf("\npows= %d\n", pows);
int count=0 ,divnum=10;

while (count<pows-1){
    divnum=divnum*10;
    count++;
}

printf("\ndiv %d \n",divnum); 
printf("%d",(num2/divnum)%10);
return 0;

}  