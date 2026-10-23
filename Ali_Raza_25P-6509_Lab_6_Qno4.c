#include<stdio.h>
int main(){
int n;
int count =0;
int sum =0;
int i;
printf("Enter the number: ");
scanf("%d",&n);
while(count <4){
sum =0;
for(i=1;i<n;i++){
if(n%i ==0){
sum = sum+i;
}
}
if(sum == n){
printf("%d is a perfect number\n ",n);
for(i=1;i<n;i++){
if(n%i ==0){
printf("%d",i);
if(i<n/2){
printf("+");
}
}
}
printf("=%d\n",sum);
count++;
}
	n++;
	return 0;
}
}