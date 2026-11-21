#include<stdio.h>
int main(){
	int arr[6];
	int i;
	int total_runs =0;
	float run_rate;
	int best_over =0;
	for(i=0;i<6;i++){
		printf("Enter runs in over %d: ",i+1);
		scanf("%d",&arr[i]);
		total_runs = total_runs+arr[i];
	}
	printf("Total = %d\n",total_runs);
	run_rate = total_runs/6;
	printf("Run rate: %.2f per over\n",run_rate );
	
	for(i=0;i<6;i++){
		if(arr[i]>arr[best_over]){
			best_over = i;
		}
	}
	printf("Best over: over %d with %d runs\n",best_over +1,arr[best_over]);
	if(total_runs >= 60){
		printf("Team reached the target of 60\n");
	}else{
		printf("Needed %d more runs to reach 60\n",60-total_runs);
	}
	return 0;
}

