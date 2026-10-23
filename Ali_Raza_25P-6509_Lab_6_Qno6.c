#include<stdio.h>
int main(){
int n;
int i,j;
printf("Enter the number: ");
scanf("%d",&n);
for(i=0;i<=n;i++){
for(j=1;j<=n-i;j++){
printf(" ");
}
if(i==0){
printf("0");
}else{
for(j=1;j<=2*i-1;j++){
printf("%d",i);
}
}
printf("\n");
}
for(i=n-1;i>=0;i--){
for(j=1;j<=n-i;j++){
printf(" ");
}if(i==0){
printf("0");
}else{
for(j=1;j<=2*i-1;j++){
printf("%d",i);
}
}
printf("\n");
}
return 0;
}