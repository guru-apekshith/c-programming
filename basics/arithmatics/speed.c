 #include<stdio.h>
int main() {

    float dist,time;

    printf("enter distance travelled in mtrs :");
    scanf("%f",&dist);

    printf("enter time taken in secs :");
    scanf("%f",&time);  //fgot to put ,7 at first 

    printf("the avg speed of given that has travelled %f mtrs in %f secs = %f m/s ",dist,time,dist/time);

    return 0;

}