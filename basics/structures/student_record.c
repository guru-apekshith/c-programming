#include<stdio.h>
#include<string.h>

int main() {
char name[4][10];
int rollno[3];
int phymarks[3];
int chemmarks[3];
int mathmarks[3];
int biomarks[3];
char answer;

for(int i=0;i<2;i++){
printf("\n%d\n",i);
    printf("enter students name  ");
    scanf("%s",name[i]);

    printf("enter students roll number ");
    scanf("%d",&rollno[i]);

    printf("enter students marks in phy ");
    scanf("%d",&phymarks[i]);

    printf("enter students marks in chem ");
    scanf("%d",&chemmarks[i]);

    printf("enter students marks in maths ");
    scanf("%d",&mathmarks[i]);

    printf("enter students marks in bio/cs ");
    scanf("%d",&biomarks[i]);
}

printf("do you want to retreive the information ? (y or n)");
scanf(" %c",&answer);

if(answer=='y'){
    printf("\n     name   rol   phy   che   mat   bio\n");
    for(int i=0;i<2;i++){
        printf("%10s %3d  %3d  %3d   %3d   %3d \n",name[i],rollno[i],phymarks[i],chemmarks[i],mathmarks[i],biomarks[i]);
        
    }
}

else{
    printf("thank you");
}
 return 0;
}