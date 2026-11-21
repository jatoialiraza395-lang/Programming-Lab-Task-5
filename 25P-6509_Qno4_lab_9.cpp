#include<stdio.h>
int main(){
	int arr[7];
	int arr2[7];
	int i;
	int ID;
	int n;
	printf("Enter the guard IDs for Day 1 to Day 7:\n");
	for(i=0;i<7;i++){
		printf("Day %d: ",i+1);
		scanf("%d",&arr[i]);
	}

    printf("Shift roster forword by how many days(1-6)? : ");
    scanf("%d",&n);
    printf("Day    Old    New\n");
    for(i=0;i<7;i++){
     printf("Day %d   %d    ",i+1,arr[i]);
     scanf("%d",&arr2[i]);
	}
	
	printf("Enter your guard ID: ");
	scanf("%d",&ID);
	for(i=0;i<7;i++){
		if(ID == arr2[i]){
			printf("Guard %d now has duty on Day %d",ID,i+1);
		}
	}
	return 0;
}
