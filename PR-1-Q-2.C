#include<stdio.h>
#include<conio.h>
main(){
	float Base,HRA,DA,TA,Gross;
	clrscr();
	printf("enter Base Salary: ");
	scanf("%f", &Base);
	printf("enter HRA: ");
	scanf("%f", &HRA);
	printf("enter DA: ");
	scanf("%f", &DA);
	printf("enter TA: ");
	scanf("%f", &TA);
	Gross= Base + (Base * HRA/100)+(Base * DA/100)+(Base * TA/100);
	printf("Gross salary: Rs.%.2f",Gross);
	getch();
	return 0;
	}