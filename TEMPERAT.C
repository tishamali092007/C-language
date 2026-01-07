#include<stdio.h>
#include<conio.h>
main()
	{
	int celcius;
	float fahrenheit;
	clrscr();
	printf("enter the valur of celcius:");
	scanf("%d", &celcius);
	fahrenheit=(9.0/5.0*celcius)+32;
	printf("temperature in fahrenheit is %.2f",fahrenheit);
	getch();
	return 0;
	}