#include<stdio.h>
void circleinfo(float radius,float *area,float *circumference);
int main(){
    float radius,area,circumference;
    do{
        printf("Enter the radius: ");
        scanf("%f",&radius);
        if(radius < 0){
            printf("Negative radius is not allowed\n");
        }
    }while(radius <0);
    circleinfo(radius,&area,&circumference);
    printf("Area = %.2f\n",area);
    printf("Circumference = %.2f\n",circumference);
    return 0;
}
void circleinfo(float radius,float *area,float *circumference){
    float pi = 3.14159;
    *area =pi*radius*radius;
    *circumference =2*pi*radius;
}

