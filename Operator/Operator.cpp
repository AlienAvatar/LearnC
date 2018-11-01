#include "StringAndFormattingIO.h"
#include <stdio.h>
#include <string.h>
#include <float.h>
#pragma warning( disable : 4996)
#include "Operator.h"
#define INTERVAL 60;

//5.11 - 1
//int main() {
//	int minute;
//	unsigned hours;
//	unsigned minutes;
//	printf("Please input minutes\n");
//	scanf("%d", &minute);
//	while (minute > 0) {
//		hours = minute / INTERVAL;
//		minutes = minute % INTERVAL;
//		printf("%d hours %d minutes\n", hours, minutes);
//		printf("Please input minutes\n");
//		scanf("%d", &minute);
//	}
//	printf("End");
//	return 0;
//}

//5.11 - 2
//int main() {
//	int num;
//	printf("Please input a number\n");
//	scanf("%d", &num);
//	int n = num;
//	num = num + 10;
//	while (n <= num) {
//		printf("%d ", n);
//		n++;
//	}
//	return 0;
//}

//5.11 - 3
//int main() {
//	const unsigned week = 7;
//	unsigned input;
//	unsigned weeks;
//	unsigned days;
//	printf("Please input your days\n");
//	scanf("%d",&input);
//	weeks = input / week;
//	days = input % week;
//	printf("%d days are %d weeks,%d days", input, weeks, days);
//	return 0;
//}

//5.11 - 4
//int main() {
//	//height = feet * 30.48 + inches * 2.54
//	const float con_inch = 2.54;
//	const float con_feet = 30.48;
//	int height;
//	printf("Please input a height(cm)\n");
//	scanf("%d", &height);
//	printf("Enter a height in centimeters %d:", height);
//	while (height > 0)
//	{
//		float f_height = (float)height;
//		int feet = (int)f_height / con_feet;
//		float inches = (f_height - feet * con_feet) / 2.54;
//		printf("%.1f cm = %d feet,%.1f inches\n", f_height, feet, inches);
//		scanf("%d", &height);
//		printf("Enter a height in centimeters (<=0 to quit) %d:\n", height);
//	}
//	printf("bye");
//	return 0;
//}

//5.11 - 5
//int main() {
//	int count, sum;
//	count = 0;
//	sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (count++ < n) {
//		sum = sum + count;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//5.11 - 6
//int main() {
//	int count, sum;
//	count = 0;
//	sum = 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (count++ < n) {
//		sum = count * count;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//5.11 - 7
//float pow(float n) {
//	return n * n * n;
//}
//
//int main() {
//	float n;
//	scanf("%f", &n);
//	float re = pow(n);
//	printf("%f", re);
//	return 0;
//}

//5.11-8
//double Temperatures(double Fahrenheit) {
//	float Fahrenheit_f = (float)Fahrenheit;
//	const double Celsius = 1.8 * Fahrenheit_f + 32.0;
//	const double Kelvin = Celsius + 273.16;
//	return Kelvin;
//}
//
//int main() {
//	float input;
//	int re = scanf("%f", &input);
//	while (re > 0) {
//		double Kelvin = Temperatures(input);
//		printf("Kelvin %.2f", Kelvin);
//		re = scanf("%f", &input);
//	}
//	
//	return 0;
//}
Operator::Operator()
{
}


Operator::~Operator()
{
}
