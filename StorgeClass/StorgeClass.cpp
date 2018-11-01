#include "StorgeClass.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//12.11 - 1
//int critic(int units);
//int main() {
//	int units = 0;
//
//	printf("How many punnds to a firkin of butter?\n");
//	scanf("%d", &units);
//	units = critic(units);
//	while (units != 56)
//		critic(units);
//	printf("You must have looked it up!\n");
//	return 0;
//}
//
//int critic(int units) {
//	printf("No luck,chummy,Try again.\n");
//	scanf("%d", &units);
//	return units;
//}
void set_mode(int mode) {

}

void get_info() {}
void show_info() {}
int main(void) {
	int mode;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0) {
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode,1 for US mode");
		printf("(-1 to quit): ");
		scanf("%d", &mode);
	}
	printf("Done.\n");
	return 0;
}
StorgeClass::StorgeClass()
{
}


StorgeClass::~StorgeClass()
{
}
