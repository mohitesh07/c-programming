/*This program calculates the S.I.*/
/*Autor:M.C.Agarwal Date:16.08.2017*/

#include<stdio.h>

int main()
{
	int p, t;
	float si, r;
	printf("Enter principal, rate and time(in years) ");
	scanf(" %d %f %d", &p, &r, &t);
	/*Calculating the S.I.*/
	si = (p*r*t) / 100;
	printf("Principal : Rs%d\nRate : %f\nTime : %d years\nSimple Interest : Rs%f", p, r, t, si);
	return 0;
}
