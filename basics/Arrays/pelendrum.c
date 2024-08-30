#include<stdio.h>
#include<string.h>
int main() {
    char name[100];
    char pel[100];
    int i=0,j;

    printf("enter your name :");
    scanf("%s",&name);
    j=strlen(name)-1;

    for(i=0;i<j;i++,j--){
        //printf("\n%d  %d", i,j);
        //printf("\n%c  %c",name[i],name[j]);

        if(name[i]!=name[j])
        break;
    }
    
    if(i>=j)
        printf("String is palandrom");
    else
        printf("String is not palandrom");
return 0;
}