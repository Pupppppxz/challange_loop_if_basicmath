#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, sum1 = 0, sum3 = 0, count = 0;
	float avg = 0, SD = 0;
	scanf("%d %d", &a, &b);
	if (a < b) {
		for (int i = a; i <= b; i++)
		{
			printf("%d\t", i);
			sum1 += i;
			count += 1;
			sum3 += (i * i);
		}
		avg = sum1 / count;
		printf("\nAVG = %.2f", avg);
		SD = sqrt(((count * sum3) - sum3) / (count * (count - 1)));
		printf("\nS.D. = %.2f", SD);
	}
	else if (a > b) {
		for (int i = a; i >= b; i--)
		{
			printf("%d\t", i);
			sum1 += i;
			count += 1;
			sum3 += (i * i);
		}
		avg = sum1 / count;
		printf("\nAVG = %.2f", avg);
		SD = sqrt(((count * sum3) - sum3) / (count * (count - 1)));
		printf("\nS.D. = %.2f", SD);
	}
	else {
		printf("Error");
	}

	return 0;
}