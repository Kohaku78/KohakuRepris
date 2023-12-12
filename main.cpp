#include <math.h>
#include <stdio.h>

int main() {
	int A = 0, B = 0;
	float C = 0, S;

	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%f", &C);

	S = sqrt(pow((A + B + C), 2) - pow((A - B - C), 2));

	printf("%f", S);

	return 0;
}