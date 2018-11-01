#include "stdafx.h"
#include "C_Summarize.h"
#include <stdio.h>

////2.12 - 1
//int main() {
//	//printf("my name is Paul Caffery ");
//	//printf("my name is \nPaul \nCaffery");
//	printf("Paul ");
//	printf("Caffery");
//	return 0;
//}

//2.12 - 2
//int main() {
//	printf("Name:Paul Caffery Address: China");
//	return 0;
//}

//2.12 - 3
//int main() {
//	int age = 24;
//	int days = age * 365;
//	printf("%d age convert %d days", age, days);
//	return 0;
//}

//2.12 - 4
//void printPraise() {
//	printf("For he's a jolly good fellow!\n");
//}
//
//void printLast() {
//	printf("Which nobody can deny");
//}
//
//int main() {
//	printPraise();
//	printPraise();
//	printPraise();
//	printLast();
//	return 0;
//}


//2.12 - 5
//int main() {
//	int toes = 10;
//	printf("%d \n%d \n%d", toes, toes + toes, toes*toes);
//	return 0;
//}

//2.12 - 6
//void printSmile() {
//	printf("Smile!");
//}
//
//int main() {
//	printSmile(); 
//	printSmile(); 
//	printSmile(); 
//	printf("\n");
//	printSmile();
//	printSmile();
//	printf("\n");
//	printSmile();
//	return 0;
//}
void two() {
	printf("two\n");
}
void one_three() {
	printf("one\n");
	two();
	printf("three\n");
}
int main() {
	printf("starting now: \n");
	one_three();
	printf("done!");
	return 0;
}
C_Summarize::C_Summarize()
{

}


C_Summarize::~C_Summarize()
{
}
