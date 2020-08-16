#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	float avg = 0;
	float SD = 0;
	scanf("%d %d", &a, &b);
	avg = (b + a) * 0.5;
	if (a < b) {
		for (int i = a; i <= b; i++)
		{
			printf("%d\t", i);
			SD += ((i - avg)*(i - avg));
		}
		printf("\nAverage = %.2f", avg);
		SD = sqrt(SD / (abs(a - b)));
		printf("\nS.D. = %.2f", SD);
	}
	else if (a > b) {
		for (int i = a; i >= b; i--)
		{
			printf("%d\t", i);
			SD += ((i - avg) * (i - avg));
		}
		printf("\nAverage = %.2f", avg);
		SD = sqrt(SD / (abs(a - b)));
		printf("\nS.D. = %.2f", SD);
	}
	else if (a == b){
		printf("Error");
	}

	return 0;
}

	return 0;
}
