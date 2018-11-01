#include "ArrAndPointer.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
#include <stdlib.h>

//10.13 - 1
//#define MONTHS 12
//#define YEARS 5
//int main(void) {
//     float rain[YEARS][MONTHS] = {
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//	    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
//	};
//	int year, month;
//	float subtot, total;
//    float *ptf = &total;
//
//	printf("YEAR RAINFALL (inches)\n");
//	for (year = 0,total = 0; year < YEARS; year++) {
//		for (month = 0, subtot = 0; month < MONTHS; month++) {
//			/*subtot += rain[year][month];*/
//			subtot += *(*(rain + year) + month);
//		}
//		printf("%5d %15.1f\n", 2000 + year, subtot);
//		*ptf += subtot;
//	}
//
//	printf("\n The yearly average is %.1f inches. \n\n", total / YEARS);
//	printf("MONTHLY AVERAGES: \n\n");
//	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//	printf(" Nov Dec\n");
//	                      
//	for (month = 0; month < MONTHS; month++) {
//		for (year = 0, subtot = 0; year < YEARS; year++) {
//			/*subtot += rain[year][month];*/
//			subtot += *(*(rain + year) + month);
//		}
//		printf("%4.1f ", subtot / year);
//	}
//	printf("\n");
//	return 0;
//}

//10.13 -2
//void copy_arr(double source[5], double target1[5], double n) {
//	for (int i = 0; i < n; i++) {
//		target1[i] = source[i];
//	}
//}
//
//void copy_arr2(double source[5], double target1[5], double n) {
//	double *ptf = source; //== double *ptf = &source[0]
//	double *ptd = target1;
//	for (int i = 0; i < n; i++, ptf++) {
//		*ptd = *ptf;
//		ptd++;
//	}
//}
//
//int main() {
//	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5];
//	double target2[5];
//	copy_arr2(source, target1, 5);
//	for (int i = 0; i < 5; i++) {
//		printf("%.1f ", target1[i]);
//	}
//	return 0;
//}

//10.13 - 3
//int func(int nums[10]) {
//	int *pt = &nums[0];
//	int max = *pt;
//	for (int i = 0; i < 10; i++) {
//		if (nums[i] > *pt) {
//			pt = &nums[i];
//		}
//	}
//	printf("%d", *pt);
//	max = *pt;
//	return max;
//}

//10.13 - 4
//int func(double nums[10]) {
//	double max = nums[0];
//	double *pt = &max;
//	int index = 0;
//	for (int i = 1; i < 10; i++) {
//		if (nums[i] > max) {
//			max = nums[i];
//			index = i;
//			pt = &i;
//		}
//	}
//	printf("%d", index);
//	printf("%d", *pt);
//	return index;
//}

//10.13 - 5
//double func(double nums[10]) {
//	double max = nums[0];
//	double min = nums[0];
//	for (int i = 1; i < 7; i++) {
//		if (nums[i] > max) {
//			max = nums[i];
//		}
//		if (nums[i] < min) {
//			min = nums[i];
//		}
//	}
//	
//	printf("%.2f %.2f %.2f", max,min,max-min);
//	return max - min;
//}

//10.13 - 6
//void copy_arr(double source[2][3], double target1[2][3], int n) {
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			target1[i][j] = source[i][j];
//		}
//	}
//}
//
//int main() {
//	double target1[2][3];
//	double nums[2][3] = { 2.0,3.0,5.0,6.0,1.0,9.0 };
//	copy_arr(nums, target1, 2);
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%.1f ", target1[i][j]);
//		}
//	}
//	return 0;
//}

//10.13 - 7
//void copy_arr(double source[5], double target1[3], double n) {
//	for (int i = 0, j = 0; i < n; i++) {
//		if (i > 1 && i < 5) {
//			target1[j] = source[i];
//			j++;
//		}
//	}
//	for (int k = 0; k < 3; k++) {
//		printf("%.1f ", target1[k]);
//	}
//}
//
//int main() {
//	double target1[3];
//	double nums[7] = { 2.0,3.0,5.0,6.0,1.0,9.0,8.0 };
//	copy_arr(nums, target1, 7);
//	
//	return 0;
//}



//10.13 - 8
//#define ROWS 3
//#define COLS 5
//
//void copy_arr(double target1[ROWS][COLS], double source[ROWS][COLS] ) {
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			target1[i][j] = source[i][j];
//		}
//	}
//}
//
//void print(double source[ROWS][COLS]) {
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			printf("%.1f ", source[i][j]);
//		}
//	}
//}
//int main() {
//	double nums[3][5];
//	double source[3][5] = { 2.0,3.0,4.0,6.0,5.0,7.0 };
//	copy_arr(nums, source);
//	print(nums);
//	return 0;
//}

//10.13 - 9
//void add(int nums1[4], int nums2[4], int result[4]) {
//	for (int i = 0; i < 4; i++) {
//		result[i] = nums1[i] + nums2[i];
//	}
//}
//int main() {
//	int nums1[4] = { 2,4,5,8 };
//	int nums2[4] = { 1,0,4,6 };
//	int result[4];
//	add(nums1, nums2, result);
//	for (int i = 0; i < 4; i++) {
//		printf("%d \n", result[i]);
//	}
//	return 0;
//}

//10.13 - 10
//#define random(x)(rand()%x);
//void randNums(int nums[3][5]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			nums[i][j] = random(100);
//			printf("%d ", nums[i][j]);
//		}
//	}
//}
//
//void DoubleNums(int nums[3][5]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			nums[i][j] = nums[i][j] * 2;
//			printf("double %d ", nums[i][j]);
//		}
//	}
//}
//
//int main() {
//	int nums[3][5];
//	randNums(nums);
//	printf("\n");
//	DoubleNums(nums);
//	return 0;
//}

//10.13 - 11
//#define MONTHS 12
//#define YEARS 5
//
//void func(float rain[YEARS][MONTHS]) {
//	int year, month;
//	float subtot, total;
//	float *ptf = &total;
//
//	printf("YEAR RAINFALL (inches)\n");
//	for (year = 0, total = 0; year < YEARS; year++) {
//		for (month = 0, subtot = 0; month < MONTHS; month++) {
//			/*subtot += rain[year][month];*/
//			subtot += *(*(rain + year) + month);
//		}
//		printf("%5d %15.1f\n", 2000 + year, subtot);
//		*ptf += subtot;
//	}
//	printf("\n The yearly average is %.1f inches. \n\n", total / YEARS);
//	printf("MONTHLY AVERAGES: \n\n");
//	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
//	printf(" Nov Dec\n");
//
//	for (month = 0; month < MONTHS; month++) {
//		for (year = 0, subtot = 0; year < YEARS; year++) {
//			/*subtot += rain[year][month];*/
//			subtot += *(*(rain + year) + month);
//		}
//		printf("%4.1f ", subtot / year);
//	}
//	printf("\n");
//}
//int main(void) {
//     float rain[YEARS][MONTHS] = {
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//	    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
//	};
//	func(rain);
//	return 0;
//}

//10.13 - 12
//void init_arr(double nums[3][5]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			scanf("%lf", &nums[i][j]);
//		}
//		printf("NEXT input number five:\n");
//	}
//}
//
//void avg_arr(double nums[3][5]) {
//	for (int i = 0; i < 3; i++) {
//		double sum = 0;
//		for (int j = 0; j < 5; j++) {
//			sum += nums[i][j];
//		}
//		printf("find num avg %.2f \n", sum / 5);
//	}
//}
//
//void avg_all_arr(double nums[3][5]) {
//	double sum = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			sum += nums[i][j];
//		}
//	}
//	printf("avg all %.2f \n", sum / 15);
//}
//
//void find_max(double nums[3][5]) {
//	int max = nums[0][0];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (nums[i][j] > max) {
//				max = nums[i][j];
//			}
//		}
//	}
//	printf("d.max num %d \n", max);
//}
//int main() {
//	double nums[3][5];
//	init_arr(nums);
//	avg_all_arr(nums);
//	avg_arr(nums);
//	find_max(nums);
//	return 0;
//}

//10.13 - 13
//#define ROWS 3
//#define COLS 5
//void init_arr(double nums[ROWS][COLS]) {
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			scanf("%lf", &nums[i][j]);
//		}
//		printf("NEXT input number five:\n");
//	}
//}
//
//void avg_arr(double nums[ROWS][COLS]) {
//	for (int i = 0; i < ROWS; i++) {
//		double sum = 0;
//		for (int j = 0; j < COLS; j++) {
//			sum += nums[i][j];
//		}
//		printf("find num avg %.2f \n", sum / 5);
//	}
//}
//
//void avg_all_arr(double nums[ROWS][COLS]) {
//	double sum = 0;
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			sum += nums[i][j];
//		}
//	}
//	printf("avg all %.2f \n", sum / 15);
//}
//
//void find_max(double nums[ROWS][COLS]) {
//	int max = nums[0][0];
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			if (nums[i][j] > max) {
//				max = nums[i][j];
//			}
//		}
//	}
//	printf("d.max num %d \n", max);
//}
//int main() {
//	double nums[ROWS][5];
//	init_arr(nums);
//	avg_all_arr(nums);
//	avg_arr(nums);
//	find_max(nums);
//	return 0;
//}
ArrAndPointer::ArrAndPointer()
{
}


ArrAndPointer::~ArrAndPointer()
{
}
