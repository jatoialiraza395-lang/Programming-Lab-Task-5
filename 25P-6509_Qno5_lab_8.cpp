#include<stdio.h>
void showbalance(float *balance);
void deposit(float *balance,float amount);
int withdraw(float *balance,float amount);
int main(){
    float balance =5000;
    float amount;
    int choice,result;
    do{
        printf("\n----- BANK ACCOUNT -----\n");
        printf("1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                showbalance(&balance);
                break;
            case 2:
                printf("Enter the amount: ");
                scanf("%f",&amount);
                deposit(&balance,amount);
                break;
            case 3:
                printf("Enter the amount: ");
                scanf("%f",&amount);
                result = withdraw(&balance,amount);
                if(result ==1){
                    printf("Withdrawn the amount.\n");
                }else{
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice != 4);
    return 0;
}
void showbalance(float *balance){
    printf("Balance: Rs %.2f\n",*balance);
}
void deposit(float *balance, float amount){
    if(amount >0){
        *balance = *balance+amount;
    }
}
int withdraw(float *balance,float amount){
    if(amount >0 && *balance >= amount){
        *balance= *balance -amount;
        return 1;
    }else{
        return 0;
    }
}

