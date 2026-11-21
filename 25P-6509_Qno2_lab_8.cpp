#include<stdio.h>
void swap(int *x,int *y);
void sortthree(int *a,int *b,int *c);
int main(){
    int a,b,c;
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    printf("Enter number c: ");
    scanf("%d",&c);
    printf("Before: %d %d %d\n",a,b,c);
    sortthree(&a,&b,&c);
    printf("After: %d %d %d\n",a,b,c);
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp =*x;
    *x =*y;
    *y =temp;
}
void sortthree(int *a,int *b,int *c){
    if(*a >*b){
        swap(a,b);
    }if(*b >*c){
        swap(b,c);
    }if(*a >*b){
        swap(a,b);
    }
}

