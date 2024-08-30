#include<stdio.h>
int main() {
int n=1;
int N;
printf("enter number of choice=");
scanf("%d",&N);      // forgot comma again .....

while(n<=10){       // i put N instead of small n in n<=10 therefore it was going to infinite loop     
    printf("%d*%d=%d\n",N,n,N*n);
    n=n+1;

}


return 0;

}