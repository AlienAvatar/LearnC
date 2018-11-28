#include "DocumentIO.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
//13.10 - 4
//int main(int argc,char *argv[]) {
//	int ch;
//	FILE *fp;
//	int count = 0;
//	if (argc != 2) {
//		printf("No Params");
//
//	}
//	//no Params
//	if ((fp = fopen(argv[1], "r")) == NULL) {
//		printf("Please input a number \n");
//		int n = 0;
//		scanf("%d", &n);
//		float f = sqrt(n);
//		printf("%.2f", f);
//	}
//	fclose(fp);
//	return 0;
//}

//13.10 - 5
//int main(int argc, char *argv[]) {
//	FILE *fp;
//	int ch;
//	long count = 0;
//	if((fp = fopen(argv[2],"r")) == NULL){
//		printf("Cant open the file");
//		exit(1);
//	}
//	while ((ch = getc(fp)) != EOF) {
//		if(ch == *argv[1]){
//		   putc(ch, stdout);
//		}
//		count++;
//	}
//	fclose(fp);
//	return 0;
//}

//13.11 - 1
//int main(int argc,char *argv[]) {
//	int ch;
//	FILE *fp;
//	long count = 0;
//
//	char input[20];
//	printf("Please input a file name\n");
//	scanf("%s", input);
//
//
//	if ((fp = fopen(input, "r")) == NULL) {
//		printf("Can't open %s\n", argv[1]);
//		exit(1);
//	}
//
//	while ((ch = getc(fp)) != EOF) {
//		putc(ch, stdout);
//		count++;
//	}
//	fclose(fp);
//	printf("File %s has %ld characters\n", input, count);
//	return 0;
//}

//13.11 - 2
//int main(int argc,char * argv[]) {
//	FILE *fp;
//	int ch;
//	FILE *out;
//	if (argc != 3) {
//		printf("Usage: %s orgin file %s goal file", argv[1], argv[2]);
//		exit(1);
//	}
//	
//	//input
//	if ((fp = fopen(argv[1], "r")) == NULL) {
//		printf("Can't open %s\n", argv[1]);
//		exit(1);
//	}
//	/*fp = fopen(argv[1], "r");
//	while ((ch = getc(fp)) != EOF) {
//
//	}*/
//	if ((out = fopen(argv[2], "w")) == NULL) {
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//
//	while ((ch = getc(fp)) != EOF) {
//		putc(ch, out);
//	}
//
//	//end
//	if (fclose(fp) != 0 || fclose(out) != 0) {
//		fprintf(stderr, "Error in closing files\n");
//	}
//	return 0;
//}

//13.11 - 3 D:\test2.txt
//int main(int argc,char * argv[]) {
//	FILE *fp;
//	int ch;
//	FILE *out;
//	char orgin[40];
//	char goal[40];
//
//	printf("Please input orgin file\n");
//	scanf("%s", orgin);
//	printf("Please input goal file\n");
//	scanf("%s", goal);
//
//
//	//input
//	if ((fp = fopen(orgin, "r")) == NULL) {
//		printf("Can't open %s\n", orgin);
//		exit(1);
//	}
//	if ((out = fopen(goal, "w")) == NULL) {
//		fprintf(stderr, "Can't create output file.\n");
//		exit(3);
//	}
//
//	while ((ch = getc(fp)) != EOF) {
//		 ch = toupper(ch);
//		 putc(ch, out);
//	}
//
//	//end
//	if (fclose(fp) != 0 || fclose(out) != 0) {
//		fprintf(stderr, "Error in closing files\n");
//	}
//	return 0;
//}

//13.11 - 4
//int main(int argc, char * argv[]) {
//	FILE *fp1;
//	int ch1;
//
//	for (int i = 1; i < argc; i++) {
//		printf("%s \n", argv[i]);
//
//		if ((fp1 = fopen(argv[i], "r")) == NULL) {
//			printf("Can't open %s \n", argv[i]);
//			exit(1);
//		}
//
//		while ((ch1 = getc(fp1)) != EOF) {
//			putc(ch1, stdout);
//		}
//		fclose(fp1);
//		printf("\n");
//	}
//	return 0;
//}

//13.11 - 5
void append(FILE *source, FILE *dest);
#define BUFSIZE 1024
#define SLEN 81
int main(int argc,char * argv[]) {
	FILE *fa, *fs;
	int files = 0;
	char file_app[SLEN];
	char file_src[SLEN];
	for (int i = 2; i < argc; i++) {
		puts("Enter name of destination file:");
		strcpy(file_app, argv[1]);
		if ((fa = fopen(file_app, "a")) == NULL) {
			fprintf(stderr, "Can't open %s \n", file_app);
			exit(2);
		}
		if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
			fputs("Can't create output buffer\n", stderr);
			exit(3);
		}

		puts("Enter name of first source file (empty line to quit): ");
		strcpy(file_src, argv[i]);
		if (file_src[0] != '\0') {
			if (strcmp(file_src, file_app) == 0) {
				fputs("Can't append file to itself\n", stderr);
			}
			else if ((fs = fopen(file_src, "r")) == NULL) {
				fprintf(stderr, "Can't open %s\n", file_src);
			}
			else {
				if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
					fputs("Can't create input buffer\n", stderr);
				}
				append(fs, fa);
				if (ferror(fs) != 0)
					fprintf(stderr, "Error in reading file %s.\n", file_src);

				if (ferror(fa) != 0)
					fprintf(stderr, "Error in writing file %s.\n", file_app);
				fclose(fs);
				files++;
				printf("File %s appended.\n", file_src);
				puts("Next file (empty line to quit):");
			}
		}
		printf("Done. %d files appended.\n", files);
		fclose(fa);
	}
	return 0;
}

void append(FILE *source, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
		fwrite(temp, sizeof(char), bytes, dest);
	}
}

DocumentIO::DocumentIO()
{
}


DocumentIO::~DocumentIO()
{
}
