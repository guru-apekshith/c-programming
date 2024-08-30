#include<stdio.h>

int add(int a, int b);
void exchange(int *a1, int *a2);

void passArr(int arr[]){
    for(int i=0;i<5;i++)
        arr[i]=arr[i]*2;
}

int main(){

    int n1,n2;
    printf("Enter value for n1");
    scanf("%d",&n1);//pass ny reference(adress)
     printf("Enter value for n2");
    scanf("%d",&n2);


    int sum=add(n1,n2);// Pass by value
    printf("sum is %d",sum);
     printf("\n you entered %d %d before exchange",n1,n2);
    exchange(&n1,&n2) ;
    printf("\n you entered %d %d after exchange",n1,n2);
    int arr[]={1,2,3,4,5};
    passArr(arr);//Passing array to function , passes address of the array not the values
    for(int i=0;i<5;i++)
        printf(" %d",arr[i]);

    return 0;
}

int add(int n1, int n2){
    int sum=n1+n2;
    n1=0;
    n2=0;
   return (sum);
}

void exchange(int *n1, int *n2){ //here * reperesents the n1 and n2 are address of integer variable
  int temp=*n1;
  *n1=*n2;
  *n2=temp;

}

