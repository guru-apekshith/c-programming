#include<stdio.h>
int main() {

    int major=18,minor,age;

    printf("your age is");
    scanf("%d",&age);

    if(age>18){
        printf("you are an adult");
    }
    else{
        printf("you are a minor");
    }
return 0;

}