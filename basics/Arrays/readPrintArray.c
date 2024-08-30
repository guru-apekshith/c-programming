#include<stdio.h>
#include<string.h>
void main(){
    int arr_num[10];
    printf("Enter 10 int values for int Array ");
   
    for(int i=0;i<10;i++)
        scanf("%d",&arr_num[i]);

    printf("\n You entered below int values\n");
    
    for(int i=0;i<10;i++)
        printf("%d ",arr_num[i]);




char arr_ch[10];

    printf("\n Enter string  value:  ");
    scanf("%s",&arr_ch);
    printf("\n You entered below STRING value %s\n", arr_ch);
    
    printf( "\n Printing string as individual char seperated by - \n");
    for(int i=0;i<strlen(arr_ch);i++)
        printf("%c- ",arr_ch[i]);

 }