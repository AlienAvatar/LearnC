#include "Struct.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100
//struct book {
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//int main(void) {
//	struct book library[MAXBKS];
//	int count = 0;
//	int index;
//
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//	while (count < MAXBKS && gets_s(library[count].title) != NULL && library[count].title[0] != '\0') {
//		printf("Now enter the author.\n");
//		gets_s(library[count].author);
//		printf("Now enter the value.\n");
//		scanf("%f", &library[count++].value);
//		while(getchar() != '\n') {
//			continue;
//		}
//		if (count < MAXBKS) {
//			printf("Enter the next title.\n");
//		}
//	}
//
//	if (count > 0) {
//		printf("Here is the list of your books:\n");
//		for (index = 0; index < count; index++) {
//			printf("%s by %s: $%.2f\n", library[index].title,library[index].author,library[index].value);
//		}
//	}
//	else {
//		printf("No books?Too bad\n");
//	}
//	return 0;
//}

//14 .17 - 3
//struct month {
//	char name[10];
//	char addrev[4];
//	int days;
//	int monthNo;
//};
//


//14.17 - 6
//typedef struct lens {
//	float foclen;
//	float fstop;
//	char brand[30];
//}LENS;
//a
//int main() {
//	LENS lenses[10];
//	lenses[3].foclen = 500;
//	lenses[3].fstop = 2.0;
//	/*lenses[3].brand = "sd";*/
//	strcpy(lenses[3].brand, "Remarkatar");
//	printf(" foclen %.f fstop %.1f brand %s", lenses[3].foclen, lenses[3].fstop,lenses[3].brand);
//	return 0;
//}
// b
//int main() {
//	LENS lenses[10];
//	for (int i = 0; i < 10; i++) {
//		lenses[i].foclen = 500;
//		lenses[i].fstop = 2.0;
//		strcpy(lenses[i].brand, "Remarkatar");
//		printf(" foclen %.f fstop %.1f brand %s \n", lenses[i].foclen, lenses[i].fstop, lenses[i].brand);
//	}
//	return 0;
//}

//struct name {
//	char first[20];
//	char last[20];
//};
//
//struct bem {
//	int limbs;
//	struct name title;
//	char type[30];
//};
//
//struct bem * pb;
//struct bem deb = {
//	6,
//	{"Berbnazel","Gwolkapwolk"},
//	"Arcturan"
//};
//
//void func(bem *pb) {
//	printf("%s %s is a %d-limbed %s", pb->title.first, pb->title.last, pb->limbs, pb->type);
//}
//
//int main() {
//	func(&deb);
//	return 0;
//}

//struct gas {
//	float distance;
//	float gals;
//	float mpg;
//};

//gas func(gas *pg) {
//	pg->mpg = pg->distance / pg->gals;
//	printf("distance %.2f gals %.2f map %.2f \n", pg->distance, pg->gals, pg->mpg);
//	return *pg;
//}

//gas func(gas sg) {
//	sg.mpg = sg.distance / sg.gals;
//	printf("distance %.2f gals %.2f map %.2f \n", sg.distance, sg.gals, sg.mpg);
//	return sg;
//}
//int main() {
//	struct gas sg = {200,10,};
//	struct gas re = func(sg);
//	printf("distance %.2f gals %.2f map %.2f", re.distance, re.gals, re.mpg);
//	return 0;
//}

//char * func(char* pc, char ch) {
//	pc = &ch;
//	return pc;
//}
//
//int main() {
//	char * pc = NULL;
//	char ch = 'a';
//	pc = func(pc, ch);
//	return 0;
//}


struct funcs {
	double func1(double* pd, double dn) {
		return 1.0;
	}
	double func2(double* pd, double dn) {
		return 2.0;
	}
	double func3(double* pd, double dn) {
		return 3.0;
	}
	double func4(double* pd, double dn) {
		return 4.0;
	}
};

int main() {
	double *pd = NULL;
	double dn = 1.0f;
	struct funcs *pf;
	struct funcs df = {};
	
	/*double * pds[4];
	pds[0] = &df.func1;
	pds[1] = &df.func2;
	pds[2] = &df.func3;
	pds[3] = &df.func4;*/

	pf = &df;
	printf("%f %f %f %f", pf->func1(pd,dn), pf->func2(pd, dn), pf->func3(pd, dn), pf->func4(pd, dn));
	return 0;
}
Struct::Struct()
{
}


Struct::~Struct()
{
}
