#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km, mile; 

	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	// 킬로미터를 마일로 변환 (1 마일 = 1.609 킬로미터)
	mile = km / 1.609;

	printf("%.1lfkm is equal to %.1lf miles", km, mile);
		

	return 0;



}