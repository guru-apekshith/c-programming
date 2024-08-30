#include<stdio.h>
#include<string.h>
struct studrecord{
char name[10];
int rollno;
int phymarks;
int chemmarks;
int mathmarks;
int biomarks;
};

int main() {
char answer;
struct studrecord info[2];

for(int i=0;i<2;i++){
printf("\n%d\n",i);
    printf("enter students name  ");
    scanf("%s",&info[i].name);

    printf("enter students roll number ");
    scanf("%d",&info[i].rollno);

    printf("enter students marks in phy ");
    scanf("%d",&info[i].phymarks);

    printf("enter students marks in chem ");
    scanf("%d",&info[i].chemmarks);

    printf("enter students marks in maths ");
    scanf("%d",&info[i].mathmarks);

    printf("enter students marks in bio/cs ");
    scanf("%d",&info[i].biomarks);
}

printf("do you want to retreive the information ? (y or n)");
scanf(" %c",&answer);

if(answer=='y'){
    printf("\n     name   rol   phy   che   mat   bio\n");
    for(int i=0;i<2;i++){
        printf("%10s %3d  %3d  %3d   %3d   %3d \n",info[i].name,info[i].rollno,info[i].phymarks,info[i].chemmarks,info[i].mathmarks,info[i].biomarks);
        
    }
}

else{
    printf("thank you");
}
 return 0;
}