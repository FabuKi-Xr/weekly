#include<stdio.h>
void multiple(int );
int main() {
	int sum,i=0,num,j=0;
	printf("======Finding sum of all the multiples of 3 or 5 below number that you input======\n");
	printf("Enter number: ");
	scanf_s("%d",&num);
	multiple(num);
	return 0;
}
void multiple(int num) {
	long int sum = 0;
	for (int i = 0; i < num;i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		else if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("sum : %ld",sum);
}