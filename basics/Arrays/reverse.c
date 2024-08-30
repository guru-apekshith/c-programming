#include<stdio.h>
#include<string.h>
int main () {

    char string[30];
    char reverse[30];
    int i;

    printf("enter whatever you want = ");
    scanf("%s",&string);
    printf("you entered = %s\n",string);
    int j=strlen(string)-1;
    
    for(i=0;string[i]!='\0';i++,j--){
        
     reverse[i]=string[j];        // i put string=reverse and forgot right=left rule 
    }
    reverse[i]='\0';
    printf("reverse is = %s",reverse);

}