#include<stdio.h>
int main(void)
{
	//test 1
	double a;
	do {
		printf("Enter initial investment amount: ");
		scanf("%lf", &a);
		if (a<0) printf("initial investment cannot be negative\n");
	} while (a < 0); /* investment amount*/ 
	//test 2
	int b;
	do {
		printf("Enter total years: ");
		scanf("%d", &b);
		if (b <= 0) printf("Years must be greater than 0\n");
	} while (b <= 0);/* years */

	double c;
	do {
		printf("Enter return rate: ");
		scanf("%lf", &c);
		if (c < 0) printf("Rate cannot be negative\n");
	} while (c < 0);/* rate */

	double d;
	do {
		printf("Enter additional contribution per year: ");
		scanf("%lf", &d);
		if (d < 0) printf("Contribution cannot be negative\n");
	} while (d < 0);/* contribution */

	double i;
	double m;
	double start;
	double year;
	double inte;
	double end;

	printf("Year      Start Balance       Interest            End Balance         \n");
	printf("**********************************************************************\n");
	for (i = 1; i <= b; i++) {
		if (i == 1) start = a;
		else start = end+d;
		inte = start * (c / 100);
		end = start + inte;
		printf("%-10.0f%-20.2f%-20.2f%-20.2f\n", i, start, inte, end);
	}

	return 0;
}