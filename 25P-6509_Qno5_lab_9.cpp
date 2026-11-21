#include<stdio.h>
int main(){
	int arr[7];
	int i,j;
	int genuine =7;
	int forged =0;
	for(i=0;i<7;i++){
	printf("Ticket of person %d: ",i+1);
	scanf("%d",&arr[i]);
	}
	
	
	printf("----- Gate Report -----\n");
	for(i=0;i<7;i++){
		for(j=0;j<i;j++){
			if(arr[i] == arr[j]){
				printf("Forged: person %d copied ticket of person %d\n",i+1,j+1);
				forged=forged+1;
				genuine= genuine-1;
				break;
			}
		}
	}
	printf("Genuine = %d\n",genuine);
	printf("Forged  = %d\n",forged);
	return 0;
}
