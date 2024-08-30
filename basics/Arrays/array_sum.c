#include<stdio.h>
int main() {
 int arr[10];
 printf("please enter 10 values to add : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    
                                           /*YOU CAN NOT DO THIS {printf("your values are = %d",arr[i]);} 
                                            instead you need to put another loop to print the values by putting printf instide the loop */
int sum=0;
printf("you entered ");                     // YOU NEED TO PUT THE PRINT ONCE OUTSIDE IF NOT IT WILL LOOP
     for(int i=0;i,i<10;i++){ 
        printf(" %d",arr[i]);
        sum=sum+arr[i];                    // you need to take sum+arr[i] not just sum+i
    } 
printf("sum is %d",sum);

return 0;

}