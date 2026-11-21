#include<stdio.h>
int readunits(void);
float calculateBill (int units);
int main(){
	int units;
	float bill;
	 units = readunits();
	 bill = calculateBill(units);
	 printf("Total bill: Rs %.2f\n",bill);
	 return 0;
}
int readunits(void){
	int units;
	printf("------------------------------------------\n");
	printf("Units \t\t\tRate per unit\n");
	printf("------------------------------------------\n");
	printf("First 100 units \tRs 10\n");
	printf("Next 200 units  \tRs 15\n");
	printf("Above 300 units \tRs 20\n");
	printf("------------------------------------------\n");
	printf("Enter the units: ");
	scanf("%d",&units);
	while(units < 0){
		printf("Invalid units\n ");
		printf("Enter the units again : ");
     	scanf("%d",&units);
	}
	return(units);
}
float calculateBill(int units){
	float bill;
	if(units<=100){
		bill= units*10;
	}else if(units <= 300){
		bill = 100*10+(units - 100)*15;
	}else{
		bill= 100*10+200*15+(units - 300)*20;
	}
	if(bill> 3000){
		bill = bill+(bill*0.05);
	}
	return (bill);                      //Bill is returned to main so that main can display it.
                                        //This keeps calculation separate from output.
}

