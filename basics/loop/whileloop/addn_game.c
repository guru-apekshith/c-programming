#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {

    while(1==1){
        int num1=(rand()*time(NULL))%100;
        int num2=(rand()*time(NULL))%100;
        int answer;
        char yess;
        printf("\nAdd %d and %d  : ",num1,num2);
        scanf("%d",&answer);

        int correct=num1+num2;

        if(answer==correct){
            printf("horayyyyy answer %d is correct\n",answer);
        }
        else{
            printf("oops thats wrong\n");
            printf("the correct answer is = %d",correct);  // i forgot to put , before correct uggghh
        }
        printf("\ndo you want to continue(y or n)?");
        scanf(" %c",&yess);
        printf("you entered %c",&yess);

        if(yess=='n'||yess=='N')
        break;




    }

    return 0;
}