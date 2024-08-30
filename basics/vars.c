#include<stdio.h>
void main(){
    char ch;
    printf("Enter a char to see its ASCII value ");
    scanf("%c",&ch);
    int val=(int)ch;
    printf("ASCII value of %c is %d", ch, val);
}


