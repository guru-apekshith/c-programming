#include<stdio.h>
int main() {

    float tempF;
    printf("enter temp in farenheit :");
    scanf("%f",&tempF);  // i put %F instead of %f and got error
 
    float convert=tempF-32;       //(Fahrenheit - 32) × 5/9//

    printf("temparature in celcius is %f",convert*0.555555);      // i missed (;) symbol and got error

    return 0;


}