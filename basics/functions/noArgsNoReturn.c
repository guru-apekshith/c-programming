#include<stdio.h>

void add();

int main(){
 add();  
 add();
 add(); 
}

void add(){
    int n1,n2;
    printf("Enter value for n1");
    scanf("%d",&n1);
     printf("Enter value for n2");
    scanf("%d",&n2);
    printf("sum=%d", n1+n2);
}

