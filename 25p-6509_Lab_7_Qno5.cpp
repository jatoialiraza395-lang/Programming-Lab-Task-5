#include<stdio.h>
int prime(int);
int perfect(int);
int reverseNumber(int);
int palindrome(int);
int digitsum(int);
void report(int);
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	report(n);
	return 0;
}
int prime(int n){
	int i;
	int count =0;
	if(n<2){
		return 0;;
	}
	for(i=2;i< n;i++){
		if(n%i ==0){
			count++;
			return 0;;
		}
	}
	return 1;
}
int perfect(int n){
	int sum=0;
	int i;
	for(i=1;i<=n/2;i++){
		if(n%i ==0){
			sum =sum+i;
		}
	}
	if(n==sum){
		return 1;
	}else{
		return 0;
	}
}
int reverseNumber(int n){
	int n1;       
	int r =0;
	int i=1;
	while(n){
		n1 = n%10;      
		r = r*10+n1;     
		n = n/10;   
	}
	return (r);
}
int palindrome(int n){
	int r;
	r = reverseNumber(n);
	if(n==r){
		return 1;
	}else{
		return 0;
	}
}
int digitsum(int n){
	int sum =0;
	int r;
	while(n){
		r=n%10;
		sum = sum+r;
		n=n/10;
	}
	return (sum);
}
void report(int n){
	int i;
	if(prime(n)==0){
		printf("prime: No\n");
	}else{
		printf("prime: yes\n");
	}
	if(perfect(n)==1){
		printf("Perfect: Yes\n");
	}else{
		printf("Perfect: No\n");
	}
	printf("Reverse: %d\n",reverseNumber(n));
	if(palindrome(n)==1){
		printf("Palindrome: Yes\n");
	}else{
		printf("Palindrome: No\n");
	}
	printf("Sum of digits: %d\n",digitsum(n));
	
	printf("Primes from 1 to %d: ",n);
	for(i=1;i<=n;i++){
		if(prime(i)==0){
			continue;
		}
		printf("%d ",i);
	}
}



















