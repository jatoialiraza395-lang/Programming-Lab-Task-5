#include<stdio.h>
int main(){
int x,n,k,j,fact=1;
int power;
float s=0;
printf("Enter the number of n:");
scanf("%d",&n);
printf("Enter the number of x:");
scanf("%d",&x);
for(k=0;k<=n;k++){
power =1;
fact=1;
for(j=1;j<=k;j++){
power = power*x;
fact = fact*j;
}
s = s+power/fact;
}
printf("S = %.1f",s);
return 0;
}