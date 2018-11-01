#include "BranchAndJump.h"
#include <stdio.h>
#pragma warning( disable : 4996)
#include <string.h>
//7.11 - 9
//int main() {
//	char ch;
//
//	while ((ch = getchar()) != '#') {
//		if(ch == 'q')
//			printf("Step 1\nStep 2\nStep 3\n");
//		else if (ch == 'c')
//			printf("Step 1\n");
//		else if (ch == 'g')
//			printf("Step 1\nStep 3\n");
//		else if (ch == 'b') {
//			printf("Step 1\n");
//			break;
//		}
//	}
//	printf("Done\n");
//	return 0;
//}

//7.12 - 1
//int main() {
//	char ch;
//	int sc = 0;
//	int nc = 0;
//	int oc = 0;
//	while ((ch = getchar()) != '#'){
//		if (ch == 32) {
//			sc++;
//		}
//		else if (ch == '\n') {
//			nc++;
//		}
//		else {
//			oc++;
//		}
//	}
//	printf("%d space ,%d line feed,%d other", sc, nc, oc);
//	return 0;
//}

//7.12 - 2
//int main() {
//	char ch;
//	int n = 0;
//	while ((ch = getchar()) != '#') {
//		printf("%c %d ", ch,ch);
//		n++;
//		if (n == 8) {
//			printf("\n");
//		}
//
//
//	}
//	return 0;
//}

//int main() {
//	int n;
//	int en = 0;
//	int on = 0;
//	float avere = 0.0;
//	float avero = 0.0;
//	int sume = 0;
//	int sumo = 0;
//	scanf("%d", &n);
// 	while (n != 0) {
//		if (n % 2 == 0) {
//			en++;
//			sume += n;
//			printf("even %d\n", sume);
//		}
//		else {
//			on++;
//			sumo += n;
//			printf("odd %d\n", sumo);
//		}
//		scanf("%d", &n);
//	}
//	if (en != 0) {
//		avere = sume / en;
//		avero = sumo / on;
//	}
//	printf("%d numbers,even mean is %.2f\n", en, avere);
//	printf("%d numbers,odd mean is %.2f\n", on, avero);
//	return 0;
//}

//7.12 - 4
//int main() {
//	char ch;
//	int n = 0;
//	while ((ch=getchar()) != '#') {
//		if (ch == '.') {
//			ch = '!';
//			n++;
//		}
//		else if (ch == '!') {
//			ch = '!!';
//			n++;
//		}
//	}
//	printf("%d numbers", n);
//	return 0;
//}

//7.12 - 5
//int main() {
//	int n;
//	int en = 0;
//	int on = 0;
//	float avere = 0.0;
//	float avero = 0.0;
//	int sume = 0;
//	int sumo = 0;
//	scanf("%d", &n);
//	while (n != 0) {
//		int check = n % 2;
//		switch (check)
//		{
//		case 0:
//			en++;
//			sume += n;
//			printf("even %d\n", sume);
//			if (check * 2 == 0) {
//				break;
//			}
//		case 1:
//			on++;
//			sumo += n;
//			printf("odd %d\n", sumo);
//			if (check * 2 == 0) {
//				break;
//			}
//		}
//		scanf("%d", &n);
//	}
//	if (en != 0) {
//		avere = sume / en;
//		avero = sumo / on;
//	}
//	printf("%d numbers,even mean is %.2f\n", en, avere);
//	printf("%d numbers,odd mean is %.2f\n", on, avero);
//	return 0;
//}

//7.12 - 6
//int main(){
//	char ch;
//	char re = 0;
//	int n = 0;
//	while ((ch = getchar()) != '#') {
//		if (ch == 'e') {
//			re = ch;
//		}
//		if (re == 'e' && ch == 'i') {
//			n++;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}

//7.12 - 7
//#define basicPay 10;
//int main() {
//	printf("Please input work hours\n");
//	int workHour = 0;
//	scanf("%d",&workHour);
//	if (workHour > 168) {
//		printf("input error");
//		return 0;
//	}
//	float workPay = 0.0f;
//	float overPay = 0.0f;
//	if (workHour > 40) {
//		int overtime = (workHour - 40) * 1.5;
//		workHour = 40 + overtime;
//	}
//	workPay = workHour * basicPay;
//	float totalPay = workPay + overPay;
//
//	float tax = 300;
//	if (totalPay > 300) {
//		tax = tax * 0.15;
//		float remain = totalPay - 300;
//		if (remain > 150) {		
//			tax += 150 * 0.2;
//			float fina = remain - 150;
//			if (fina > 0) {
//				tax += fina * 0.25;
//			}
//		}
//	}
//	float netPay = totalPay - tax;
//	printf("Total Pay:%.2f, Tax Pay:%.2f, Net Pay:%.2f", totalPay, tax, netPay);
//	return 0;
//}

// 7.12 -8
//int main() {
//	char arr[] = "Enter the number corresponding to the desired pay rate or action:";
//	for (int i = 0; i < 66; i++) {
//		printf("*");
//	}
//	printf("\n");
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	int d = 1;
//	printf("%1d)$8.75 /hr",d++);
//	printf("%10d)$9.33 /hr",d++);
//	printf("\n");
//	printf("%1d)$10.00 /hr", d++);
//	printf("%9d)$11.20 /hr", d++);
//	printf("\n");
//	printf("%1d)quit\n", d);
//	for (int i = 0; i < 66; i++) {
//		printf("*");
//	}
//	printf("\n");
//	
//	float basicPay = 0;
//	int choose;
//	scanf("%d", &choose);
//	switch (choose)
//	{
//	case 1:
//		basicPay = 8.75;
//		break;
//	case 2:
//		basicPay = 9.33;
//		break;
//	case 3:
//		basicPay = 10.00;
//		break;
//	case 4:
//		basicPay = 11.20;
//		break;
//	case 5:
//		break;
//	}
//	printf("choose %d \n", choose);
//	int workHour = 0;
//	printf("Please input work hours\n");
//	scanf("%d",&workHour);
//	if (workHour > 168) {
//		printf("input error");
//		return 0;
//	}
//	float workPay = 0.0f;
//	float overPay = 0.0f;
//	if (workHour > 40) {
//		int overtime = (workHour - 40) * 1.5;
//		workHour = 40 + overtime;
//	}
//	workPay = workHour * basicPay;
//	float totalPay = workPay + overPay;
//
//	float tax = 300;
//	if (totalPay > 300) {
//		tax = tax * 0.15;
//		float remain = totalPay - 300;
//		if (remain > 150) {		
//			tax += 150 * 0.2;
//			float fina = remain - 150;
//			if (fina > 0) {
//				tax += fina * 0.25;
//			}
//		}
//	}
//	float netPay = totalPay - tax;
//	printf("Total Pay:%.2f, Tax Pay:%.2f, Net Pay:%.2f", totalPay, tax, netPay);
//	return 0;
//}

//7.12 - 9
//int main() {
//	int n = 0;
//	int j;
//	printf("please input a number\n");
//	scanf("%d", &n);
//	for (int i = 2; i < n; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//			    break;
//			}
//		}
//		if (j < i) {
//			continue;
//		}
//		else {
//			printf("%d is a prime\n",i);
//		}
//	}
//	return 0;
//}

//7.12 - 10
//int main() {
//	int d = 0;
//	float fixedTax;
//	int payMoney;
//	int rev;
//	
//
//	printf("input your revenue\n");
//    scanf("%d", &rev);
//	if (rev < 14875) {
//		return 0;
//	}
//	while (rev > 0) {
//		printf("choose your tax type\n");
//		printf("1.single\n");
//		printf("2.household\n");
//		printf("3.married A total of\n");
//		printf("4.married divorced\n");
//		scanf("%d", &d);
//		switch (d)
//		{
//		case 1:
//			payMoney = 17850;
//			fixedTax = payMoney * 0.15;
//			break;
//		case 2:
//			payMoney = 23900;
//			fixedTax = payMoney * 0.15;
//			break;
//		case 3:
//			payMoney = 29750;
//			fixedTax = payMoney * 0.15;
//			break;
//		case 4:
//			payMoney = 14875;
//			fixedTax = payMoney * 0.15;
//			break;
//		}
//		
//		if (d > 0) {
//			float tax = 0;;
//			tax = (rev - payMoney)*0.28;
//			tax += fixedTax;
//			printf("tax %.2f \n", tax);
//		}
//		printf("input your revenue\n");
//		scanf("%d", &rev);
//		if (rev < 14875) {
//			return 0;
//		}
//	}
//	return 0;
//}

//7.12 - 11
float sumVigetableFee(float fee, float dicount, float trans);
float Discount(float Fee);
float Transport(int pound);
float sumVigetableFee(float fee,float dicount,float trans) {
	float sumPay = fee - dicount + trans;
	return sumPay;
}

float Discount(float Fee) {
	float reFee = 0.0f;
	if (Fee > 100) {
		int tmp = Fee / 100;
		reFee = tmp * 100 * 0.05;
	}
	return reFee;
}

float Transport(int pound) {
	float TransFee = 0;
	if (pound < 5) {
		TransFee += 3.5;
	}else if(pound > 5 && pound < 20) {
		TransFee += 10;
	}else if (pound > 20) {
		TransFee = TransFee + (float)0.1 * pound;
		TransFee += 8;
	}
	return TransFee;
}
#define thistleCost 1.25
#define beetCost 0.65
#define carrotCost 0.89

int main() {
	char ch ;
	int numa = 0;
	int numb = 0;
	int numc = 0;
	float thistleFee, thistleDiscount, thistlePay, transFeeA;
	float beetFee, beetDiscount, beetPay, transFeeB;
	float carrotFee, carrotDiscount, carrotPay, transFeeC;
	printf("choose the ABC Mail Order Grocery\n");
	printf("a - > thistle \n");
	printf("b - > beet \n");
	printf("c -> carrot\n");
	scanf("%c", &ch);
	int check = 1;
	while (ch !='q') {
		switch (ch)
		{
		case 'a':
			printf("input thistle numbers \n");
			scanf("%d", &numa);
			thistleFee = thistleCost * numa;
			thistleDiscount = Discount(thistleFee);
		    transFeeA = Transport(numa);
			thistlePay = sumVigetableFee(thistleFee, thistleDiscount, transFeeA);
			printf("A pound cost: %.2f,pound:%d, Vegetable Cost: %.2f,Total Cost:%.2f, Discount Cost:%.2f Transport Cost:%.2f\n",
				                 thistleCost, numa, thistleFee, thistlePay,thistleDiscount,transFeeA);
			check = 1;
			break;
		case 'b':
			printf("input beet numbers \n");
			scanf("%d", &numb);
			beetFee = beetCost * numb;
			beetDiscount = Discount(beetFee);
			transFeeB = Transport(numb);
			beetPay = sumVigetableFee(beetFee, beetDiscount, transFeeB);
			printf("A pound cost: %.2f,pound: %d,Vegetable Cost: %.2f, Total Cost:%.2f,Discount Cost:%.2f\n Transport Cost:%.2f\n",
				beetCost, numb, beetFee, beetPay, beetDiscount, transFeeB);
			check = 1;
			break;
		case 'c':
			printf("input carrot numbers \n");
			scanf("%d", &numc);
			carrotFee = carrotCost * numc;
		    carrotDiscount = Discount(carrotFee);
			transFeeC = Transport(numc);
			carrotPay = sumVigetableFee(carrotFee, carrotDiscount, transFeeC);
			printf("A pound cost: %.2f,pound: %d,Vegetable Cost: %.2f, Total Cost:%.2f,Discount Cost:%.2f Transport Cost:%.2f\n", 
				   carrotCost, numb, carrotFee - carrotDiscount, carrotPay, carrotDiscount, transFeeC);
			check = 1;
			break;
		}
		if (ch == 'q') {
			break;
		}
		printf("choose the ABC Mail Order Grocery\n");
		printf("a - > thistle \n");
		printf("b - > beet \n");
		printf("c -> carrot\n");
		scanf("%c", &ch);
	}
	return 0;
}

BranchAndJump::BranchAndJump()
{
}


BranchAndJump::~BranchAndJump()
{
}
