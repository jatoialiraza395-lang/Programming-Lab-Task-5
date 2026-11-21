#include<stdio.h>
void pointer(int *pAge, float *pCgpa, char *pGrade);
int main(){
	int age;
	float cgpa;
	char Grade;
	int *pAge;
	float *pCgpa;
	char *pGrade;
	printf("Enter the age:  ");
	scanf("%d",&age);
	printf("Enter the cgpa:  ");
	scanf("%f",&cgpa);
	printf("Enter the Grade:  ");
	scanf(" %c",&Grade);
	pAge = &age;
	pCgpa= &cgpa;
	pGrade= &Grade;
	pointer(pAge,pCgpa,pGrade);
	return 0;
	
}
void pointer(int *pAge, float *pCgpa, char *pGrade){
	int age;
	float cgpa;
	char Grade;
	printf("age = %d  via pointer = %d  &age = %p pAge = %p\n", *pAge,*pAge,(void*)pAge,(void*)pAge);
	printf("Cgpa = %.2f via pointer = %.2f  &cgpa = %p pcgpa = %p\n", *pCgpa,*pCgpa,(void*)pCgpa,(void*)pCgpa);
	printf("Grade = %c  via pointer = %c  &grade = %p pGrade = %p\n", *pGrade,*pGrade,(void*)pGrade,(void*)pGrade);
	printf("&pAge = %p &pCgpa = %p  &pGrade = %p\n",&pAge,&pCgpa,&pGrade );
	printf("\n\n");
	*pAge = *pAge+1;
	*pCgpa = *pCgpa+0.25;
	*pGrade = *pGrade+1;
	printf("Age = %d\n",*pAge);
	printf("Cgpa = %f\n",*pCgpa);
	printf("Grade = %c\n",*pGrade);
}
