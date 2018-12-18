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

//14.17 - 6
//typedef struct lens {
//	float foclen;
//	float fstop;
//	char brand[30];
//}LENS;
//a
//int main() {
//	LENS lenses[10];
//	lenses[2].foclen = 500;
//	lenses[2].fstop = 2.0;
//	strcpy(lenses[2].brand, "Remarkatar");
//	printf(" foclen %.f fstop %.1f brand %s", lenses[3].foclen, lenses[3].fstop,lenses[3].brand);
//	return 0;
//}
// b
//int main() {
//	LENS lenses[10] = { [2] = {500,2,"Remarkatar"} };
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
//14.17 - 7 .c
//void func(bem *pb) {
//	printf("%s %s is a %d-limbed %s", pb->title.first, pb->title.last, pb->limbs, pb->type);
//}
//
//int main() {
//	func(&deb);
//	return 0;
//}

//14.17 - 10 .a,b
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


//struct funcs {
//	double func1(double* pd, double dn) {
//		return 1.0;
//	}
//	double func2(double* pd, double dn) {
//		return 2.0;
//	}
//	double func3(double* pd, double dn) {
//		return 3.0;
//	}
//	double func4(double* pd, double dn) {
//		return 4.0;
//	}
//};
//
//int main() {
//	double *pd = NULL;
//	double dn = 1.0f;
//	struct funcs *pf;
//	struct funcs df = {};
//	
//	/*double * pds[4];
//	pds[0] = &df.func1;
//	pds[1] = &df.func2;
//	pds[2] = &df.func3;
//	pds[3] = &df.func4;*/
//
//	pf = &df;
//	printf("%f %f %f %f", pf->func1(pd,dn), pf->func2(pd, dn), pf->func3(pd, dn), pf->func4(pd, dn));
//	return 0;
//}

//14.17 - 7
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
//int main() {
//	pb = &deb;
//	printf("%s\n",pb->type);
//	printf("%s\n",pb->type+2);
//	return 0;
//}

//14.18 - 1
//struct month {
//	char name[10];
//	char abbrev[3];
//	int days;
//	char monthName[10];
//};

//14.18 - 2
//struct month {
//	int days;
//	char addrdev[4];
//	char name[10];
//	int montNo;
//};
//
//bool isLeapYear(int year,struct month * pm) {
//	if (year % 4 == 0 && pm->days > 1) {
//		pm->days++;
//		return true;
//	}
//	return false;
//}
//
//
//int main() {
//	struct month initMonth[12] = {
//		{31,"Jan","January",1},
//		{28,"Feb","February",2},
//		{31,"Mar","March",3},
//		{30,"Apr","April",4},
//		{31,"May","May",5},
//		{30,"Jun","June",6},
//		{31,"Jul","July",7},
//		{31,"Aug","August",8},
//		{30,"Sep","September",9},
//		{31,"Oct","October",10},
//		{30,"Nov","November",11},
//		{31,"Dec","December",12},
//	};
//
//	int input_day;
//	int input_month;
//	int input_year;
//	int result_day;
//	int sum_month = 0;
//	struct month *pm = initMonth;
//	printf("Please input a day\n");
//	scanf("%d", &input_day);
//	printf("Please input a month\n");
//	scanf("%d", &input_month);
//	printf("Please input a year\n");
//	scanf("%d", &input_year);
//	if (input_month < 1 || input_month > 12) {
//		exit(1);
//	}
//	if (input_year < 1 || input_year > 2100) {
//		exit(1);
//	}
//	if (input_day < 1 || input_day > 31) {
//		exit(1);
//	}
//
//	if (isLeapYear(input_year, &initMonth[1])) {
//		for (int i = 0; i < input_month - 1; i++) {
//			sum_month += initMonth[i].days;
//		}
//		result_day = sum_month + input_day;
//	}
//	else {
//		for (int i = 0; i < input_month - 1; i++) {
//			sum_month += initMonth[i].days;
//		}
//		result_day = sum_month + input_day;
//	}
//	printf("Total days %d", result_day);
//	
//	return 0;
//}

//14.18 - 3
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
//		/*for (index = 0; index < count; index++) {
//			printf("%s by %s: $%.2f\n", library[index].title,library[index].author,library[index].value);
//		}*/
//		/*char temp[MAXTITL];
//		for (int i = 0; i < count; i++) {
//			for (int j = i + 1; j < count; j++) {
//				if (strcmp(library[i].title,library[j].title) > 0) {
//					strcpy(temp,library[i].title);
//					strcpy(library[i].title, library[j].title);
//					strcpy(library[j].title, temp);
//				}
//			}
//		}*/
//
//		float temp;
//		for (int i = 0; i < count; i++) {
//			for (int j = i + 1; j < count; j++) {
//				if (library[i].value > library[j].value) {
//					temp = library[i].value;
//					library[i].value = library[j].value;
//					library[j].value = temp;
//				}
//			}
//		}
//
//		for (index = 0; index < count; index++) {
//			printf("%s by %s: $%.2f\n", library[index].title,library[index].author,library[index].value);
//		}
//	}
//	else {
//		printf("No books?Too bad\n");
//	}
//	return 0;
//}

//14.18 - 4
//struct meberName{
//	char fname[20];
//	char lname[20];
//	char mname[20];
//};
//
//struct meber {
//	int meberNo;
//	struct meberName name;
//};
//a
//void func(struct meber *pm) {
//	if (pm->name.mname[0] == '\0') {
//		printf("%s, %s - %d \n", pm->name.fname, pm->name.lname, pm->meberNo);
//	}else{
//		printf("%s, %s %s. - %d \n",pm->name.fname,pm->name.lname,pm->name.mname,pm->meberNo);
//	}
//}

//b
//void func(int meberNo, char * fname, char * lname, char * mname) {
//	if (mname == '\0') {
//		printf("%s, %s - %d \n",fname,lname,meberNo);
//	}else{
//		printf("%s, %s %s. - %d \n",fname,lname,mname,meberNo);
//	}
//}
//int main() {
//	struct meber mebers[5] = {
//		{302039823,{"Dribble","Flossie","Me"}},
//		{302039823,{"Dribble","Flossie"}},
//	};
//	for (int i = 0; i < 5; i++) {
//		struct meber *pm = &mebers[i];
//		if (pm->meberNo != NULL) {
//			func(pm->meberNo,pm->name.fname,pm->name.lname,pm->name.mname);
//		}
//	}
//	
//	return 0;
//}

//14.18 - 5
//#define CSIZE 4
//struct name{ 
//	char fname[10];
//	char lname[10];
//};
//
//struct student {
//	struct name names;
//	int grade[3];
//	float means;
//};
//
//student getInfo(struct student students) {
//	
//	printf("Please input information\n");
//	printf("Please input name \n");
//	while (scanf("%s %s", students.names.fname, students.names.lname) != 2) {
//		printf("Please input name\n");
//	}
//	printf("Please input grade \n");
//	while (scanf("%d %d %d", &students.grade[0], &students.grade[1], &students.grade[2]) != 3){
//		printf("Please input grade \n");
//	}
//	float means = (students.grade[0] + students.grade[1] + students.grade[2])/3;
//	students.means = means;
//	printf("name %s,%s grade %d %d %d means %.2f \n", students.names.lname, students.names.fname, students.grade[0], students.grade[1], students.grade[2], students.means);
//	return students;
//;}
//int main() {
//	struct student students[CSIZE];
//	for (int i = 0; i < CSIZE; i++) {
//		students[i] = getInfo(students[i]);
// 	}
//	float totalMeans = 0.0f;
//	int count = 0;
//	for (int i = 0; i < CSIZE; i++) {
//		if(students[i].names.fname != ""){
//			totalMeans += students[i].means;
//		}
//		++count;
//	}
//	printf("%.2f \n", totalMeans/count);
//	return 0;
//}

//14.18 - 6
//#define NAMELEN 12
//#define ROSTERSIZE 19
//struct Player {
//	char fname[NAMELEN];
//	char lname[NAMELEN];
//	unsigned int abats;
//	unsigned int hits;
//	unsigned int walks;
//	unsigned int rbis;
//	float batgaverage;	
//};
//void getBattingAverage(struct Player *pp);
//void showPlayers(struct Player *pp,int size);
//
//int main(int argc,char *argv[]) {
//	FILE *fp;
//	int number = 0;
//	char first[NAMELEN];
//	char last[NAMELEN];
//	unsigned int abats;
//	unsigned int hits;
//	unsigned int walks;
//	unsigned int rbis;
//	//declare and init struct
//	struct Player players[ROSTERSIZE];
//	for (int i = 0; i < ROSTERSIZE; i++)
//		players[i] = { "", "", 0, 0, 0, 0, 0 };
//
//	if ((fp = fopen(argv[1], "r")) == NULL){
//		printf("Can't open the file \n");
//		exit(1);
//	}
//	
//	while (fscanf(fp, "%d %s %s %u %u %u %u", &number, first, last, &abats, &hits, &walks, &rbis) == 7) {
//		if (players[number].fname[0] == '\0') {
//			strcpy(players[number].fname,first);
//			strcpy(players[number].lname,last);
//		}
//		players[number].abats += abats;
//		players[number].hits += hits;
//		players[number].walks += walks;
//		players[number].rbis += rbis;
//	}
//
//	//calculate batting average
//	for (int i = 0; i < ROSTERSIZE; i++) {
//		getBattingAverage(&players[i]);
//	}
//
//	//show info
//	showPlayers(players,ROSTERSIZE);
//	if (fclose(fp) != 0) {
//		printf("Error in closing files\n");
//	}
//	return 0;
//}
//
//void showPlayers(struct Player *pp,int size) {
//	unsigned int atbats = 0;
//	unsigned int hits = 0;
//	unsigned int walks = 0;
//	unsigned int rbis = 0;
//	unsigned int avagbatting = 0;
//	printf("Team statistics \n [number] [first name] [last name] [abats] [hits] [walks] [rbis] [batting avageer] \n");
//	for (int i = 0; i < size; i++,pp++) {
//		if (pp->fname[0] != '\0') {
//			printf(" %2d %15s %10s %6u %6u %8u %8u %10.3f \n", i, pp->fname, pp->lname, pp->abats, pp->hits, pp->walks, pp->rbis, pp->batgaverage);
//
//			atbats += pp->abats;
//			hits += pp->hits;
//			walks += pp->walks;
//			rbis += pp->rbis;
//			avagbatting += hits / (float)atbats;
//		}
//	}
//	printf("Combined status:\n %36u %6u %8u %8u %10.3f \n", atbats, hits, walks, rbis, hits / (float)atbats);
//}
//void getBattingAverage(struct Player *pp) {
//	pp->batgaverage =  pp->hits / (float)pp->abats;
//}

//14.18 - 7
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main() {
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);
	
	if ((pbooks = fopen("book.dat", "a+b")) == NULL) {
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}

	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
		if (count == 0) {
			puts("Current contents of book.dat: ");
		}
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS) {
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of aline to stop.");
	while (count < MAXBKS && gets_s(library[count].title) != NULL && library[count].title[0] != '\0') {
		puts("Now enter the author.");
		gets_s(library[count].author);
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n') {
			continue;
		}
		if (count < MAXBKS) {
			puts("Enter the next title.");
		}
	}

	if (count > 0) {
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++) {
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);

		}
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else {
		puts("No books? Too bad.\n");
	}
	puts("Bye.\n");
	fclose(pbooks);
	return 0;
}
Struct::Struct()
{
}


Struct::~Struct()
{
}
