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
//	printf("Please enter a name\n");
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
//	printf("Please enter a float\n");
//	scanf("%f", &inputFloat);
//	printf("The input is %.1f or %.1e", inputFloat,inputFloat);
//	//printf("THe input is %+.3f or %.3E", inputFloat,inputFloat);
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
//	int len1 = strlen(lastname);
//	int len2 = strlen(firstname);
//	printf("%s %s\n", lastname, firstname);
//	printf("%*d %*d\n", len1, strlen(lastname), len2,strlen(firstname));
//	printf("%s %s\n", lastname, firstname);
//	printf("%-*d %-*d\n", len1, strlen(lastname), len2 + 1, strlen(firstname));
//	return 0;
//}

//update
//int main(void)
//{
//	char first_name[20];
//	char last_name[20];
//
//	printf("Enter your first and last name: ");
//	scanf("%s %s", first_name, last_name);
//	printf("\n");
//	printf("%s %s\n", first_name, last_name);
//	printf("%*lu %*lu\n", // right justified
//		(int)strlen(first_name), strlen(first_name),
//		(int)strlen(last_name), strlen(last_name));
//	printf("\n");
//	printf("%s %s\n", first_name, last_name);
//	printf("%-*lu %-*lu\n", // left justified
//		(int)strlen(first_name), strlen(first_name),
//		(int)strlen(last_name), strlen(last_name));
//	printf("\n");
//
//	return 0;
//}

//4.9 - 6 X
//int main() {
//	double d = 1.0 / 3.0;
//	float  f = 1.0 / 3.0f;
//	printf("%.4f,%.12f,%.16f\n", d);
//	printf("%.4f,%.12f,%.16f\n", f);
//	printf("%.4f,%.12f,%.16f\n", FLT_DIG);
//	printf("%.4f,%.12f,%.16f\n", DBL_DIG);
//	return 0;
//}

//update 
//int main(void)
//{
//	double db_one_third = 1.0 / 3.0;
//	float ft_one_third = 1.0 / 3.0;
//
//	printf("Float                Double              \n");
//	printf("-------------------- --------------------\n");
//	printf("%-20.4f %-20.4f\n", ft_one_third, db_one_third); // show 4 digits
//	printf("%-20.12f %-20.12f\n", ft_one_third, db_one_third); // show 12 digits
//	printf("%-20.16f %-20.16f\n", ft_one_third, db_one_third);
//	printf("\n");
//	printf("FLT_DIG: %d\n", FLT_DIG);
//	printf("DBL_DIG: %d\n", DBL_DIG);
//
//	/* results: both float and double are accurate to at least the amount of sig
//	figs specified by FLT_DIG and DBL_DIG */
//
//	return 0;
//}
//4.9 - 7
//int main() {
//	int gallon;
//	float mile;
//	printf("Please input your gallon and miles\n");
//	scanf("%d", &gallon);
//	scanf("%f", &mile);
//	float per_gallon_mile = mile / gallon;//每消耗一加仑走多少英里
//	printf("per gallon miles %f \n", per_gallon_mile);
//    //每100公里，消耗多少汽油
//
//	float perkm = 100 / ((1.609*mile)/(gallon*3.785));
//	printf("%.1f(L)", perkm);
//	return 0;
//}

//int main(void)
//{
//	const float KM_PER_MILE = 1.609;
//	const float LT_PER_GALLON = 3.785;
//	float miles_travelled, gallons_gas_consumed;
//	float miles_per_gallon, liters_per_100km;
//
//	printf("Enter your distance travelled in miles: ");
//	scanf("%f", &miles_travelled);
//	printf("Enter the amount of gas consumed in gallons: ");
//	scanf("%f", &gallons_gas_consumed);
//
//	// calculate miles per gallon and liters per km
//	miles_per_gallon = miles_travelled / gallons_gas_consumed;
//	liters_per_100km = 100. / miles_per_gallon * LT_PER_GALLON / KM_PER_MILE;
//
//	printf("Miles per gallon: %.1f\n", miles_per_gallon);
//	printf("Liters per 100 kilometers: %.1f\n", liters_per_100km);
//
//	return 0;
//}
StringAndFormattingIO::StringAndFormattingIO()
{
}


StringAndFormattingIO::~StringAndFormattingIO()
{
}
