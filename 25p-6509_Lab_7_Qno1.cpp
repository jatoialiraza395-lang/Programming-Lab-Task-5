#include<stdio.h>
void wellcome();
void printsquare(int side,char ch);
int main(){
	int side;
	char ch;
	wellcome();
	printf("Enter the side: ");
	scanf("%d",&side);
	printf("Enter the Char: ");
	scanf(" %c",&ch);
	printsquare(side,ch);
	wellcome();
	return 0;
}
void wellcome(){
	printf("------------------------------------------\n");
	printf("          Pattern Printer v1.0\n");
	printf("------------------------------------------\n");
}
void printsquare(int side,char ch){
	int i,j;
	for(i=1;i<=side;i++){
		for(j=1;j<=side;j++){
			printf("%c",ch);
		}
		printf("\n");
	}
}
