// area of a circle //

#include<stdio.h>
int main() {
    int r;
    float pi=3.14;
    
    printf("Enter the value for radius: ");
    scanf("%d",&r);

    
    printf("area of circle of radious %d is  %f",r,pi*r*r); // i put area (pi*r*r) as %d so i got error
    return 0;
}