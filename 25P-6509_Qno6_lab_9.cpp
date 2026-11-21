#include<stdio.h>
int main(){
	int arr[6];
	int arr2[6];
	int arr3[6]={0};
	int maxi;
	int position;
	int i,j;
	for(i=0;i<6;i++){
		printf("Student %d - roll no and marks: ",i+1);
		scanf("%d %d",&arr[i],&arr2[i]);
	}
	
	
	printf("Rank\t Roll\t Marks\n");
	for(i=0;i<6;i++){
		maxi =-1;
		for(j=0;j<6;j++){
			if(arr2[j]>maxi && arr3[j]==0){
				maxi = arr2[j];
				position = j;
			}
		}
		arr3[position] =1;
		printf("%d\t%d\t%d\n",i+1,arr[position],maxi);
	}
	for(i=0;i<6;i++){
		arr3[i]=0;
	}
	printf("Position Holders\n");
	for(i=0;i<3;i++){
		maxi =-1;
		for(j=0;j<6;j++){
			if(arr2[j]>maxi && arr3[j] ==0){
				maxi = arr2[j];
				position =j;
			}
		}
		arr3[position] = 1;
		if(i==0){
		printf("1st: roll no %d (%d marks)\n",arr[position],maxi);
	}else if(i==1){
		printf("2nd: roll no %d (%d marks)\n",arr[position],maxi);
	}else{
		printf("3rd: roll no %d (%d marks)\n",arr[position],maxi);
	}
 }
	return 0;
}
