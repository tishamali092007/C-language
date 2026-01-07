#include<stdio.h>
#include<conio.h>
main(){
	int angle1,angle2,angle3;
	clrscr();
	printf("enter first angle:");
	scanf("%d",&angle1);
	printf("enter second angle:");
	scanf("%d", &angle2);
	angle3 = 180 - (angle1 + angle2);
	printf("third angle is : %d",angle3);
	getch();
	return 0;




	}