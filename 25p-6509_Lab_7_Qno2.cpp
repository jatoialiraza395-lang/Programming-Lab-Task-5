#include<stdio.h>
#include<math.h>
void calculated(double,double);
int main(){
	double a,b;
	printf("Enter the number of a: ");
	scanf("%lf",&a);
	printf("Enter the number of b: ");
	scanf("%lf",&b);
	calculated(a,b);
	return 0;
}
void calculated(double a,double b){
	double c;
	double area;
	c = sqrt(pow(a,2)+pow(b,2));
	area = (a*b)/2;
	printf("Hypotenues = %.2lf\n",c);
	printf("Rounded up = %.2lf\n",ceil);
	printf("Rounded down = %.2lf\n",floor);
	printf("Area = %.2lf\n",area);
}
