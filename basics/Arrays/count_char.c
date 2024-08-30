#include<stdio.h>
#include<string.h>
int main () {
    char string[30];

printf("enter your phrase here = ");
scanf("%s",&string);

printf("your phrase is %s",string);         /*if you take string length at [100] but only typy guru then it ends in /0 ie the string has ended 
                                                the remaining space is wasted*/
printf("each indivisual charecters are\n");
int sum=0;
 for(int i=0 ;string[i]!='\0';i++){          //check if this string = \0 if not 
    sum=sum+1;
     printf("\n%c ",string[i]);
 }
printf("no of char in your phrase is = %d",sum);

return 0;    
}