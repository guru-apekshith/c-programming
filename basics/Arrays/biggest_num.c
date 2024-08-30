#include<stdio.h>
int main() {
    int n;
    printf("please enter n value");
    scanf("%d",&n);
    int array[n];
    printf("please enter %d numbers",n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
       }
printf("your values are");
    for(int i=0;i<n;i++){
        printf("\n%d",array[i]);
    }
int big=array[0];
int big2;

    for(int i=0;i<n;i++){
        if(big<array[i]){
            big2=big;
            big=array[i];
        }
    }
printf("\nbigger number is = %d",big);    
printf("\n the second largest number = %d",big2);
return 0;
    
}