#include<stdio.h>
void converttime(int totalseconds,int *h,int *m,int *s);
void addseconds(int *h,int *m,int *s,int extra);
int main(){
    int totalseconds,h,m,s,extra;
    printf("Enter the total seconds: ");
    scanf("%d",&totalseconds);
    converttime(totalseconds,&h,&m,&s);
    printf("Time = %02d:%02d:%02d\n", h, m, s);
    printf("Enter extra seconds: ");
    scanf("%d",&extra);
    addseconds(&h,&m,&s,extra);
    printf("New Time = %02d:%02d:%02d\n",h,m,s);
    return 0;
}
void converttime(int totalseconds,int *h,int *m,int *s){
    *h = totalseconds/3600;
    *m = (totalseconds %3600)/60;
    *s = totalseconds %60;
}
void addseconds(int *h,int *m,int *s,int extra){
    int total;
    total = (*h *3600)+(*m *60)+ *s+ extra;
    converttime(total,h,m,s);
}
