#include "LoopStatement.h"
#pragma warning( disable : 4996)
#include <stdio.h>
#include <string.h>
//6.15 - 6
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 8; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 6.16 - 1
//int main() {
//	char arr[30];
//	char c = 'a';
//	for (int i = 0; i < 26; i++,c++) {
//		arr[i] = c;
//	}
//
//	for (int i = 0; i < 26; i++) {
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//6.16 - 2
//int main() {
//	char ch = '$';
//	for (int i = 1; i <= 5; i++) {
//		for (int j = 0; j < i; j++) {
//			printf("%c",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.16 - 3
//int main() {
//	char ch = 'A';
//	for (int i = 1; i < 6; i++) {
//		for (int j = 0; j < i; j++, ch--) {
//			printf("%c", ch);
//		}
//		ch = 'F';
//		printf("\n");
//	}
//    return 0;
//}

//6.16 - 4
//int main() {
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'E') {
//		scanf("%c", &ch);
//	}
//	char c = 65;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4 -i; j++) {
//			printf("%c", 32);
//		}
//		for (int k = 0; k < 2*i + 1; k+=2) {
//			printf("%c",c++);
//		}
//		c-=2;
//		for (int k = 2 * i + 1; k > 1; k-=2) {
//			printf("%c", c--);
//		}
//		for (int j = 0; j < 4 - i; j++) {
//			printf("%c", 32);
//		}
//		printf("\n");
//		c = 65;
//	}
//	return 0;
//}

//6.16 - 5
//int main() {
//	int max;
//	int min;
//	printf("Please input max\n");
//	scanf("%d", &max);
//	printf("Please input min\n");
//	scanf("%d", &min);
//	for (int i = min; i>= min && i <= max; i++) {
//		printf("%2d %4d %6d \n", i,i*i,i*i*i);
//	}
//	return 0;
//}

//6.16 - 6
//int main() {
//	char input[40];
//	scanf("%s", input);
//	int n = strlen(input);
//	for (int i = n-1; i >=0; i--) {
//		printf("%c", input[i]);
//	}
//	return 0;
//}

//6.16 - 7
//int main() {
//	float f1;
//	float f2;
//	printf("Please input two nums \n");
//	while (scanf("%f %f", &f1, &f2) == 2) {
//		float result = (f1 * f2) / (f1 - f2);
//		printf("%f", result);
//	}
//	printf("end\n");
//	return 0;
//}

//6.16 - 8
//int getValue() {
//	float f1;
//	float f2;
//	printf("Please input two nums \n");
//	while (scanf("%f %f", &f1,&f2) == 2) {
//		float result = (f1 * f2) / (f1 - f2);
//		return result;
//	}
//	
//	printf("end\n");
//}
//
//int main() {
//	float result = getValue();
//	printf("%f", result);
//	return 0;
//}

// 6.16 - 9
//int main() {
//	int min;
//	int max;
//	scanf("%d",&min);
//	scanf("%d",&max);
//	printf("Enter lower and upper integer limits : %d %d \n",min,max);
//	while (min != max) {
//		int sum = 0;
//		for (int i = min; i <= max; i++) {
//		    sum = sum + (i * i);
//		}
//		printf("The sum of the squares from %d to %d is %d \n", min*min, max*max, sum);
//		scanf("%d", &min);
//		scanf("%d", &max);
//		printf("Enter lower and upper integer limits : %d %d \n", min, max);
//	}
//	printf("Done");
//	return 0;
//}
LoopStatement::LoopStatement()
{
}


LoopStatement::~LoopStatement()
{
}
