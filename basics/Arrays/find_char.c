#include<stdio.h>
#include<string.h>
int main() {
char sourcetype;
char word[50];
char letter;

int numbers[50];
int num;
int num2;

printf("is source numbers or letters (enter non caps n or l ) ? = ");
scanf("%c",&sourcetype);
if(sourcetype=='l'){
        printf("enter word source here = ");
        scanf("%s",&word);

        printf("\nenter letter to find = ");
        scanf(" %c",&letter);

        for(int i=0;word[i]!='\0';i++){
               if(word[i]==letter){
                printf("your letter %c exists",letter);
                return 0;
               }
        }
printf(" your letter %c is not present ",letter);
}
else{


        int len;
        printf("\nEnter the length of array:");
        scanf("%d",&len);

        printf("\nenter %d numbers of the array: ",len);
        for(int i=0;i<len;i++)
                scanf("%d",&numbers[i]);

        printf("\nenter number to find = ");
        scanf("%d",&num);
        printf("you want to check number %d",num);
        int flag=0;
        for(int i=0;i<len;i++){

                if(numbers[i]==num){
                        printf("\nThe number %d exists in your source",num);
                        flag=1;
                        break;
                }

                
        }

        if(flag!=1)
        printf("\nyour number %d is not found",num);

         
}



return 0;
}