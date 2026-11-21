
#include <stdio.h>
#include <math.h>
int solvequadratic(double a,double b,double c,double *r1,double *r2);
int main(){
    double a,b,c;
    double r1,r2;
    int result;
    printf("Enter the number of a: ");
    scanf("%lf",&a);
    printf("Enter the number of b: ");
    scanf("%lf",&b);
    printf("Enter the number of c: ");
    scanf("%lf",&c);
    result =solvequadratic(a,b,c,&r1,&r2);
    if(result ==2){
        printf("Two roots: %.2lf and %.2lf\n",r1,r2);
    }else if(result == 1){
        printf("One root: %.2lf\n", r1);
    }else{
        printf("No real roots.\n");
    }
    return 0;
}
int solvequadratic(double a,double b,double c,double *r1,double *r2){
    double d;
    d = b*b-4*a*c;
    if(d > 0){
        *r1 =(-b +sqrt(d))/(2 * a);
        *r2 =(-b-sqrt(d))/(2 * a);
        return 2;
    }else if(d == 0){
        *r1 = -b/(2 *a);
        return 1;
    }else{
        return 0;
    }
}

