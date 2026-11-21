#include<stdio.h>
void showMenu(void);
int readNonNegative(void);
void printLine(int);
long power(int,int);
long factorial(int);
int gcd(int,int);
int lcm(int,int);
int main(){
    int choice;
    int a,b;
    do{
        showMenu();
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter base: ");
            a=readNonNegative();
            printf("Enter exponent: ");
            b=readNonNegative();
            printf("Power = %ld\n",power(a,b));
        }else if(choice==2){
            printf("Enter number: ");
            a=readNonNegative();
            printf("Factorial = %ld\n",factorial(a));
        }else if(choice==3){
            printf("Enter first number: ");
            a=readNonNegative();
            printf("Enter second number: ");
            b=readNonNegative();
            printf("GCD = %d\n",gcd(a,b));
        }else if(choice==4){
            printf("Enter first number: ");
            a=readNonNegative();
            printf("Enter second number: ");
            b=readNonNegative();
            printf("LCM = %d\n",lcm(a,b));
        }else if(choice==5){
            printf("Exit\n");
        }else{
            printf("Invalid choice.\n");
        }
        printLine(30);
    }while(choice!=5);
    return 0;
}
void showMenu(void){
    printf("\n1. Power\n");
    printf("2. Factorial\n");
    printf("3. GCD\n");
    printf("4. LCM\n");
    printf("5. Exit\n");
}
int readNonNegative(void){
    int n;
    scanf("%d",&n);
    while(n<0){
        printf("Enter number again: ");
        scanf("%d",&n);
    }
    return n;
}
void printLine(int length){
    int i;
    for(i=1;i<=length;i++){
        printf("-");
    }
    printf("\n");
}
long power(int base,int exp){
    int i;
    long result=1;
    for(i=1;i<=exp;i++){
        result=result*base;
    }
    return result;
}
long factorial(int n){
    int i;
    long fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int gcd(int a,int b){
    int i;
    int result=1;
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            result=i;
        }
    }
    return result;
}
int lcm(int a,int b){
    int result;
    if(a==0 || b==0){
        return 0;
    }
    result=a*b/gcd(a,b);
    return result;
}

