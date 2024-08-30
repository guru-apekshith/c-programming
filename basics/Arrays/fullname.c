#include<stdio.h>
int main() {
int i;
char firstname[100];
char lastname[100];
char fullname[100];
printf("enter your first name = ");
scanf("%s",&firstname);

printf("enter your last name = ");
scanf("%s",&lastname);
int sum =0;
for( i=0;firstname[i]!='\0';i++){
    fullname[i]=firstname[i];
    sum++;
}
for( i=0;lastname[i]!='\0';i++){
    fullname[sum+i]=lastname[i];
}
fullname[sum+i]='\0';
printf("your full name is =%s",fullname);

return 0;

}