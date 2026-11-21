#include<stdio.h>
int main(){
	int arr[10];
	int i;
	int find,count=0;
	int total_locker =0;
	int empty =0;
	int empty_count =0;
		printf("Enter the item code in each locker (0 = empty)\n");
	for(i=0;i<10;i++){
		printf("Locker %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter item code to search: ");
	scanf("%d",&find);
	for(i=0;i<10;i++){
	if(find == arr[i]){
		printf("Item %d is in locker %d\n",find,i+1);
		total_locker  = total_locker + 1;
	}	
	}
	printf("Total lockers with this item: %d\n",total_locker);
	for(i=0;i<10;i++){
		if(empty == arr[i]){
			empty_count = empty_count+1;
		}
	}
	printf("Empty lockers: %d\n",empty_count);
	if(total_locker == 0 ){
		printf("Item %d is not in any locker\n",find);
	}else{
		printf("Total lockers with this item: %d\n", total_locker);
	}
	
	return 0;
}
