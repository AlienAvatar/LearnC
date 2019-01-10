#include "DataAndC.h"
#include <stdio.h>
#include <limits>

//3.11 - 1
//int main() {
	/*int num = 2147483647;
	float f = 3.4E38f;
	float f2 = -3.4E38f;
	printf("max %d max+1=%d\n",num,num+1);
	printf("max %f max+1=%f\n",f,f+1);
	printf("min %f min-1=%f",f2,f2-1);
	return 0;*/
//}
//update
//int main() {
//	int MAX_INTEGER = INT_MAX;
//	int MIN_INTEGER = INT_MIN;
//	float MIN_FLOAT = FLT_MIN;
//	float MAX_FLOAT = FLT_MAX;
//
//	int int_overflow,int_underflow;
//	float flt_overflow, flt_underflow;
//	int_overflow = INT_MAX + 1;
//	int_underflow = INT_MIN - 1;
//	flt_overflow = FLT_MAX * 2.;
//	flt_underflow = FLT_MIN / 2.;
//	
//	printf("Max integer: %d \tMax integer + 1: %d\n", INT_MAX, int_overflow);
//	printf("Min integer: %d \tMin integer - 1: %d\n", INT_MIN, int_underflow);
//	printf("Max float: %f \tMax float * 2: %f\n", FLT_MAX, flt_overflow);
//	printf("Min float: %f \tMin float / 2: %f\n", FLT_MIN, flt_underflow);
//
//	return 0;
//}


//3.11 - 2
//int main() {
//	printf("%c",66);
//	return 0;
//}
//update
//int main() {
//	int ch;
//	scanf("%d", &ch);
//	printf("%c \n", ch);
//	return 0;
//}

//3.11 - 3
//int main() {
//	printf("\aStartled by the sudddent sound,Sally shouted,\"By the Great Pumpkin,what was that!\"");
//	return 0;
//}

//3.11 - 4
//int main() {
//	float input;
//	scanf_s("%f", &input);
//	printf("The input is %f or %e", input, input);
//	return 0;
//}

//3.11 - 5
//int main() {
//	printf("input your age ");
//	unsigned int age;
//	scanf_s("%d",&age);
//	printf("convert %f seconds", age*3.156e7);
//	return 0;
//}

//update
//int main(void)
//{
//	unsigned int SECONDS_PER_YEAR = 31560000;
//	unsigned int age;
//
//	printf("What is your age (in years)?: ");
//	scanf("%u", &age);
//	printf("You are %u seconds old!\n", SECONDS_PER_YEAR * age);
//
//	return 0;
//}


//3.11 - 6
//int main() {
//	long double mass = 3.0e-23f;
//	long kgQuart = 950;
//	int num_water;
//	printf("Enter an amount of water (in quarts): ");
//	scanf_s("%d", &num_water);
//
//	printf("hydrone nums: %Le", num_water * (kgQuart/mass));
//	return 0;
//}
//update
//int main(void)
//{
//	float H20_MASS = 3.0e-23;
//	float GRAMS_H20_PER_QUART = 950.;
//	float quarts;
//
//	printf("Enter an amount of water (in quarts): ");
//	scanf("%f", &quarts);
//	printf("There are %f molecules in %f quarts of water.\n", quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);
//
//	return 0;
//}

//3.11 - 7
//int main() {
//	printf("input your height(inch) ");
//	float h;
//	scanf_s("%f", &h);
//	printf("%f(cm)",h*2.54);
//	return 0;
//}
//update
//int main(void)
//{
//	float CM_PER_INCH = 2.54;
//	float height;
//
//	printf("Enter your height (in inches): ");
//	scanf("%f", &height);
//	printf("You are %f centimeters tall.\n", height * CM_PER_INCH);
//
//	return 0;
//}
DataAndC::DataAndC()
{
}


DataAndC::~DataAndC()
{
}
