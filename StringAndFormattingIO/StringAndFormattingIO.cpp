#include "StringAndFormattingIO.h"
#include <stdio.h>
#include <string.h>
#include <float.h>
#pragma warning( disable : 4996)
#define DENSITY 62.4;
//4.7 - 1
//int main() {
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//	printf("Hi! What's your first name?\n");
//	scanf_s("%s", name,20);
//	printf("%s,what's your weight in pounds?\n", name);
//	scanf_s("%f", &weight);
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well.%s,your volume is %2.2f cubic feet.\n",
//		name, volume);
//	printf("Also,your first name has %d letters, \n",
//		letters);
//	printf("and we have %d bytes to store it in. \n", size);
//	return 0;
//}

//4.8 - 1
//int main() {
//	char firstname[20];
//	char lastname[20];
//	scanf("%s", firstname);
//	scanf("%s", lastname);
//	printf("%s,%s", firstname, lastname);
//	return 0;
//}

//4.8 - 2 
//int main() {
//	char name[20];
//	scanf("%s", name);
//	//a
//	//printf("\"%s\"", name);
//	//b
//	//printf("\"%20s\"", name);
//	//c
//	//printf("\"%-20s\"", name);
//	//d
//    int len = strlen(name);
//    len = len+3;
//    printf("%*s",len,name);
//	return 0;
//}

//4.8 - 3
//int main() {
//	float inputFloat;
//	scanf("%f", &inputFloat);
//	//printf("The input is %.1f or %0.1e", inputFloat,inputFloat);
//	printf("THe input is %+.3f or %.3E", inputFloat,inputFloat);
//	return 0;
//}

//4.8 - 4
//int main() {
//	char name[40];
//	float height;
//	printf("Please input your name \n");
//	scanf("%s", name);
//	printf("Please input your height (cm) \n");
//	scanf("%f", &height);
//	height = height / 100;
//	printf("%s,you are %0.3fm feet tall", name, height);
//	return 0;
//}

//4.8 - 5
//int main() {
//	char firstname[20];
//	char lastname[20];
//	printf("Please input your lastname\n");
//	scanf("%s", lastname);
//	printf("Please input your firstname\n");
//	scanf("%s", firstname);
//	printf("%s %s\n", lastname, firstname);
//	int len1 = strlen(lastname);
//	int len2 = strlen(firstname);
//	/*printf("%*d", len1,len1);
//	printf("%*d", len2+1,len2);*/
//	printf("%-*d", len1, len1);
//	printf("%-*d", len2+1, len2);
//	return 0;
//}

//4.9 - 6
//int main() {
//	double d = 1.0 / 3.0;
//	float  f = 1.0 / 3.0f;
//	printf("%.4f,%.12f,%.16f\n", d);
//	printf("%.4f,%.12f,%.16f\n", f);
//	printf("%.4f,%.12f,%.16f\n", FLT_DIG);
//	printf("%.4f,%.12f,%.16f\n", DBL_DIG);
//	return 0;
//}

//4.9 - 7
//int main() {
//	int gallon;
//	float mile;
//	printf("Please input your gallon and miles\n");
//	scanf("%d", &gallon);
//	scanf("%f", &mile);
//	//float consume = gallon / mile;//每消耗一加仑走多少英里
//	const float litre = gallon * 3.785;
//	const float kilometer = mile * 1.609;
//    float consume2 = litre / kilometer;//每消耗3.785升，走多少公里
//	float result = 100 / consume2;
//	printf("%.1f(L)", result);
//	return 0;
//}


StringAndFormattingIO::StringAndFormattingIO()
{
}


StringAndFormattingIO::~StringAndFormattingIO()
{
}
