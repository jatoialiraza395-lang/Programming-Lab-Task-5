#include<stdio.h>
int main(){
int n;
int i,j;
char c;
printf("Enter the number: ");
scanf("%d",&n);
printf("Enter symbol: ");     //Sir, I have taken the symbol as input from the user but the program is not accepting the symbol input correctly. 
scanf(" %c",&c);
for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){
printf(" ");
}
for(j=1;j<=2*i-1;j++){
printf("%c",c);
}
printf("\n");
}
return 0;
}