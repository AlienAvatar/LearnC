#include "Function.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
//9.10 - 6
//int max(int a,int b,int c) {
//	if (a > b && a > c) {
//		return a;
//	}
//	else if (b > a && b > c) {
//		return b;
//	}
//	else if (c > a && c > b) {
//		return c;
//	}
//}


//9.10 - 7
//void copy() {
//	printf("copy\n");
//}
//void move() {
//	printf("move\n");
//}
//void remove() {
//	printf("remove\n");
//}
//void quit() {
//	printf("quit\n");
//}
//int main() {
//	printf("Please choose one of the following:\n");
//	printf("1)copy files 2)move files\n");
//	printf("3)remove files 4)quit\n");
//	printf("Enter the number of your choice:\n");
//	int n;
//	int m = scanf("%d", &n);
//	while (m == 1) {
//		if (n >= 1 && n <= 4) {
//			switch (n) {
//			case 1: copy();
//				break;
//			case 2:move();
//				break;
//			case 3:remove();
//				break;
//			case 4:quit();
//				break;
//			}
//			return 0;
//		}
//		else {
//			printf("Please choose one of the following:\n");
//			printf("1)copy files 2)move files\n");
//			printf("3)remove files 4)quit\n");
//			printf("Enter the number of your choice:\n");
//			int m = scanf("%d", &n);
//		}
//	}
//	return 0;
//}

//double min(double x,double y) {
//	if (x < y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}

//9.11 - 2
//void chline(char ch[40],int i,int j) {
//	for (i; i < j; i++) {
//		//putchar(ch[i]);
//		printf("%c", ch[i]);
//	}
//}
//int main() {
//	char a[40] = "abc";
//	chline(a,1,3);
//	return 0;
//}

// 9.11 - 3
//void func(char ch, int a, int b) {
//	int count = 0;
//	for (int i = 0; i < b; i++) {
//		for (int j = 0; j < a; j++) {
//			putchar(ch);
//		}
//		count++;
//		if (count == b) {
//			break;
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	char ch = 'a';
//	func(ch, 3, 5);
//	return 0;
//}

//9.11 - 4
//void func(double a, double b) {
//	if (a == 0.0f || b == 0.0f) {
//		return;
//	}
//	double avg = (1 / a + 1 / b) / 2;
//	double davg = 1 / avg;
//	printf("%.2f", davg);
//}
//int main() {
//	func(2.0f, 2.0f);
//	return 0;
//}

//void large_of(double a, double b) {
//	printf("%.2f %.2f \n", a, b);
//	if (a > b) {
//		b = a;
//	}
//	else if (a < b) {
//		a = b;
//	}
//	printf("%.2f %.2f \n", a, b);
//}
//
//int main() {
//	large_of(2.0f, 3.0f);
//	large_of(5.0f, 3.0f);
//	return 0;
//}

//9.11 - 6
//void func(char ch) {
//	if (ch >= 65 && ch <= 90) {
//		printf("%c y %d\n",ch,ch - 65);
//	}
//
//	if (ch >= 97 && ch <= 122) {
//		printf("%c y %d\n",ch, ch - 97);
//	}
//}
//
//int main() {
//	char arr[40];
//	scanf("%s", arr);
//	for (int i = 0; i < 40; i++) {
// 		func(arr[i]);
//             	}
//	return 0;
//}

//9.11 - 7
//double power(double n, int p) {
//	double pow = 1;
//	int i;
//	int f = 1;
//	for (i = 1; i <= p; i++) {
//		pow *= n;
//	}
//	printf("%.2f \n", pow);
//	return pow;
//}

//9.11 - 8
//int pow = 1;
//double power(double n,int p,int i) {
//	if (i <= p) {
//		i++;
//		pow *= n;
//		power(n, p, i);
//	}
//	return pow;
//}
//
//int main() {
//	double re = power(-2, 4,1);
//	printf("%.2f \n", re);
//
//	return 0;
//}

//9.11 - 9
//void to_binary(unsigned long n) {
//	int r;
//	r = n % 2;
//	if (n >= 2) {
//		to_binary(n / 2);
//	}
//	putchar('0' + r);
//	return;
//}

//void to_base_n(unsigned long n,int k) {
//	if (k < 2 || k > 10) {
//		return;
//	}
//	int r;
//	r = n % k;
//	if (n >= k) {
//		to_base_n(n / k,k);
//	}
//	printf("%d", r);
//	return;
//}
//
//int main() {
//	to_base_n(129,2);
//	return 0;
//}

//9.11 - 10
//int Fibonacci(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	if (n == 1) {
//		return 1;
//	}
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main() {
//	int re = Fibonacci(4);
//	printf("%d", re);
//	return 0;
//}
Function::Function()
{
}


Function::~Function()
{
}
