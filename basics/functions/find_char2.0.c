#include<stdio.h>
#include<string.h>

int wordcheck(char[],char );




int main(){
char word[50];
char letter;

printf("enter word source here = ");
scanf("%s",&word);

printf("\nenter letter to find = ");
scanf(" %c",&letter);
int res= wordcheck(word,letter);
if(res==1){
    printf("your charecter exists");
}
else{
    printf("your charecter doesn't exist");
}
return 0;

}

int wordcheck(char word[],char letter)
{
for(int i=0;word[i]!='\0';i++){

         if(word[i]==letter){

         return 1;
         }

}
return 0;
}
