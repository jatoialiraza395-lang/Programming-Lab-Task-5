#include<stdio.h>
float fahrenheit(float c);
float celsius(float f);
void table(int,int,int);
int main(){
	float c,f;
	int start,end,step;
	printf("Enter the Start : ");
	scanf("%d",&start);
	printf("Enter the End : ");
	scanf("%d",&end);
	printf("Enter the step: ");
	scanf("%d",&step);
	table(start, end,step);
	printf("Enter the tempreture in fahrenheit: ");
	scanf("%f",&f);
	c = celsius(f);
	printf("%.1f F= %.2f C\n",f,c);
	return 0;
	
}
float fahrenheit(float c){
	float f;
	f = (c*9.0/5.0) +32;
	return (f);
}
float celsius(float f){
	float c;
	c = (f-32)*5.0/9.0;
	return (c);
}
void table(int start,int end,int step){
	int i;
	float f;
	printf("\n Celsius\tFahrenheit\n");
	for(i=start;i<=end;i=i+step){
		f = fahrenheit(i);
		printf("%d   %.1f\n",i,f);
	}
}
