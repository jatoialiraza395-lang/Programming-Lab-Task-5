#include<stdio.h>
int main(){
int n;
int i,j;
printf("Enter the number: ");
scanf("%d",&n);
for(i =1;i<=n;i++){
for(j=1;j<=i;j++){
    printf("#");
}
printf("\n");
}
for(i=1;i<=n;i++){
for(j=4;j>=i;j--){
printf("#");
}
printf("\n");
}
printf("\n");
for(i =1;i<=n;i++){
for(j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
for(i=1;i<=n;i++){
for(j=4;j>=i;j--){
printf("*");
}
printf("\n");
}
return 0;
}