#include<stdio.h>
int main()  {

    int number;
    int N;
    printf("enter starting number of choice");
    scanf("%d",&N);
    printf("enter last number");
    scanf("%d",&number);    //forgot to put, befor &
    printf("your AP is =");
    int sum=0;
    while(N<=number)
    {
        
        printf("%d,",N);
        sum=sum+N;
        N=N+1;
        


    }
    printf(" the sum is = %d",sum);

return 0;

}