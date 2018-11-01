#include "StringAndStringFunc.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//11.12 - 9
//int strlen(char *arr[20]) {
//	return strlen(arr);
//} False
//int strlen(const char * s) {
//	int ct = 0;
//	while (*s++)
//		ct++;
//	return(ct);
//} True

//11.12 - 10
//char* func(char *arr) {
//	char *ptr = arr;
//	while (arr++) {
//		if (*arr == '\32') {
//			return arr;
//		}
//	}
//} False
//char * strblk(char * string) {
//	while (*string != ' ' && *string != '\0') {
//		string++;
//	}
//	if (*string == '\0') {
//		return NULL;
//	}else{
//		return string;
//	}
//}

//11.12 - 11
//#define ANSWER "GRANT"
//#define MAX 40
//void charToupper(char str[40]) {
//	int n = strlen(str);
//	for (int i = 0; i < n; i++) {
//		str[i] = toupper(str[i]);
//	}
//}
//int main(void)
//{
//	char arr[MAX];
//
//	puts("Who is buried in Grant's tomb?");
//	gets_s(arr);
//	charToupper(arr);
//	while (strcmp(arr, ANSWER) != 0)
//	{
//		puts("No,that's wrong.Try again");
//		gets_s(arr);
//		charToupper(arr);
//	} 
//	puts("That's right!");
//}


//11.13 - 1
//void func(char *str,char * arr) {
//	for (int i = 0; i < 20; i++) {
//		arr[i] = *str;
//		*str++;
//	}
//}
//int main() {
//	char arr[20];
//	char str[20];
//	gets_s(str);
//	char *ps = arr;
//	func(str, ps);
//	puts(arr);
//}

//11.13 - 2
//void func(char *str,char * arr) {
//	for (int i = 0; i < 20; i++) {
//		if (*str == ' ' || *str == '\t' || *str == '\n') {
//			*str = '\0';
//		}
//		arr[i] = *str;
//		*str++;
//	}
//}
//
//int main() {
//	char arr[20];
//	char str[20];
//	gets_s(str);
//	char *ps = arr;
//	func(str, ps);
//	puts(arr);
//	return 0;
//}

//11.13 - 3
//void func(char *str,char * arr) {
//	for (int i = 0; i < 20; i++) {
//		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')) {
//			if (*str == ' ' || *str == '\t' || *str == '\n') {
//				*str = '\0';
//			}
//			else {
//				arr[i] = *str;
//			}
//		}
//		else {
//			arr[i] = '\0';
//		}
//		*str++;
//	}
//}
//
//int main() {
//	char arr[20];
//	char str[20];
//	gets_s(str);
//	char *ps = arr;
//	func(str, ps);
//	puts(arr);
//	return 0;
//}

//char * func(char *str, char index) {
//	char *ps = NULL;
//	char *pr = NULL;
//	int n = strlen(str);
//	for (int i = 0; i < n; i++) {
//		if (*str == index) {
//			ps = str;
//		}
//		else {
//			pr = '\0';
//		}
//		str++;
//	}
//	if (*ps != NULL) {
//		return ps;
//	}
//	else {
//		return pr;
//	}
//}
//
//int main() {
//	//char *str = "Why";
//	char sd[20] = "asdasdhdas";
//	char *ps = func(sd, 'h');
//	char *pp = strchr(sd, 'h');
//	puts(ps);
//	puts(pp);
//	return 0;
//}

//11.13 - 5
//int is_within(char ch,const char *ps) {
//	const char *pc = ps;
//	int re = 0;
//	ps++;
//	int n = strlen(ps);
//	for (int i = 0; i < n; i++) {
//		if (*pc == ch) {
//			re = 1;
//		}
//	}
//	return re;
//}
//
//int main() {
//	//char *str = "Why";
//	const char *str2 = "dadad";
//	char str[20] = "dsdada";
//	int re = is_within('y', str2);
//	printf("%d", re);
//	return 0;
//}

//11.13 - 6
//char *func(char *s1, char *s2, int n) {
//	int lenS2 = strlen(s2);
//	if (lenS2 >= n) {
//		for (int i = 0; i < n; i++) {
//			s1[i] = s2[i];
//		}
//	}
//	else if (lenS2 < n) {
//		int i = 0;
//		for (i = 0; i < n; i++) {
//			s1[i] = s2[i];
//		}
//		for (i = 0; i < lenS2 - n;i++) {
//			s1[i] = '\0';
//		}
//	}
//	return s1;
//}
//int main() {
//	char s1[10];
//	char s2[10] = "abcde";
//	char *ps = func(s1, s2, 2);
//	//char *pp = strncpy(s1, s2, 5);
//	return 0;
//}

//11.13 - 7
//char* string_in(char *str,char *s) {
//	char *ps = strstr(str, s);
//	if (ps != NULL) {
//		char *pc = &ps[0];
//		return pc;
//	}
//	return ps;
//}
//int main() {
//	char str[5] = "hat";
//	char s[5] = "at";
//	printf("%p \n", &str[1]);
//	char *p = string_in(str,s);
//	printf("%p", p);
//	return 0;
//}

//11.13 - 8
//void func(const char* str) {
//	const char *pc = str + strlen(str) -1;
//	while (pc - str + 1) {
//		putchar(*pc--);
//	}
//}
//
//int main() {
//	const char* str = "abcdef";
//	func(str);
//}

//11.13 - 9
//#define LEN 20
//char* del_sp(char * str,char* temp){
//	int j = 0;
//	int n = strlen(str);
//	;
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] != ' ') {
//			temp[j++] = str[i];
//		}
//		temp[j]= '\0';
//	}
//	char* pt = temp;
//	return pt;
//}
//int main() {
//	char str[LEN];
//	char temp[LEN];
//	while (str != " ") {
//		gets_s(str);
//		del_sp(str, temp);
//		puts(temp);
//	}
//	return 0;
//}

//11.13 - 10
#define LEN 20
int main() {
	char str[LEN];
	int ch;
	int count = 0;
	gets_s(str);
	/*while (str != EOF || count == 10) {

	}*/
}
//11.13 - 11
//int main() {
//	int ch;
//
//	int cwords = 1;
//	int cupper = 0;
//	int clower = 0;
//	int cpunct = 0;
//	int cdigit = 0;
//	int check = 1;
//	while ((ch = getchar()) != EOF) {
//		if (isupper(ch)) {
//			cupper++;
//		}
//		if (islower(ch)) {
//			clower++;
//		}
//		if (ispunct(ch)) {
//			cpunct++;
//		}
//		if (isdigit(ch)) {
//			cdigit++;
//		}
//		if (isalpha(ch)) {
//			check = 1;
//		}
//		if (ch == ' ') {
//			check = 0;
//		}
//		if (check == 0) {
//			cwords++;
//			check = 1;
//		}
//	}
//	printf("upperWords=%d lowerWords=%d punctuation=%d digits=%d words=%d", cupper, clower, cpunct, cdigit, cwords);
//	return 0;
//}

//11.13 - 12
//int main(int argc, char* argv[]) {
//	for (int i = argc-1; i > 0; i--) {
//		printf("%s ", argv[i]);
//	}
//	return 0;
//}

//11.13 - 13
//int main(int argc, char* argv[]) {
//	double sum = 1;
//	int len = atoi(argv[2]);
//	double n = atof(argv[1]);
//	for (int i = 0; i < argc; i++) {
//		sum *= n;
//	}
//	printf("sum = %.2f", sum);
//	return 0;
//}

//11.13 - 14
//int atoii(char *str) {
//	int sum = 0;
//	int it = 1;
//	int len = strlen(str);
//	for (int i = 0; i < strlen(str); i++) {
//		if (isdigit(str[i])) {
//			int n = (int)str[i];
//			n == 48 ? n = 0 : n == 49 ? n = 1 : n == 50 ? n = 2 : n == 51 ? n = 3 : n == 52 ? n = 4 : n == 53 ? n = 5 : n == 54 ? n = 6 : n == 57 ? n = 7 : n == 58 ? n = 8 : n == 59 ? n = 9 : n = -1;
//			printf("%d", n);
//			for (int j = 0; j < len - 1; j++) {
//				it = it * 10;
//			}
//			it = it * n;
//			if (len - 1 == 0) {
//				sum += n;
//			}
//			else {
//				sum += it;
//			}
//			len--;
//			it = 1;
//		}
//		else {
//			return -1;
//		}
//	}
//	return sum;
//}
//
//
//int main(int argc,char* argv[]) {
//	char ch[20] = "1024";
//	int re = atoii(ch);
//	printf("\n%d", re);
//	return 0;
//}

//11.13 - 15
//int main(int argc,char *argv[]) {
	
//	while((ch == getc(fp) != EOF)){
//		if (*argv == "-p") {
//			putchar(ch);
//		}
//		else if(*argv == "-u") {
//			toupper(ch);
//			putchar(ch);
//		}
//		else if (*argv == "-l") {
//			tolower(ch);
//			putchar(ch);
//		}
//	}
//	fclose(fp);
//	return 0;
//}


StringAndStringFunc::StringAndStringFunc()
{
}


StringAndStringFunc::~StringAndStringFunc()
{
}
