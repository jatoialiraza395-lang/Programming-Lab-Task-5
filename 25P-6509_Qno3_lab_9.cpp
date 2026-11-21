#include<stdio.h>
int main(){
    float arr[7];
    float sum = 0;
    float high_score, low_score;
    float final_score;
    int i;
    int find = 0;
    for(i=0;i<7;i++){
        printf("Judge %d score: ",i+1);
        scanf("%f",&arr[i]);
    }
    high_score = arr[0];                 // Starting low at 0 is wrong because all scores
    low_score = arr[0];                // are greater than 0, so low should start from score[0].
    for(i=0;i<7;i++){
        sum = sum+arr[i];
        if(arr[i] >high_score){
            high_score = arr[i];
        }
        if(arr[i] <low_score){
            low_score = arr[i];
        }
    }
    final_score =(sum-high_score-low_score)/5;
    printf("Highest score dropped: %.1f\n",high_score);
    printf("Lowest score dropped: %.1f\n",low_score);
    printf("Final score: %.2f\n",final_score);
    for(i=0;i<7;i++){
        if(arr[i] ==10){
            printf("Judge %d gave a perfect 10!\n",i+1);
            find = 1;
            break;
        }
    }
    if(find == 0){
        printf("No judge gave a perfect 10\n");
    }
    return 0;
}

