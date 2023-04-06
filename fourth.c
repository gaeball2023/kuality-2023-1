#pragma warning(disable: 4996)
#pragma warning(disable: 6031)
#include <stdio.h>

int main(void)
{
	int money;
	char drink;
	int price;
	int stock;
	int res;
	printf("============= 메뉴 =============\n");
	printf("1. 금액 투입 2. 잔돈 반환 3. 음료수 선택 4. 종료\n");
	printf("금액 투입: ");
	scanf("%d", &money);
	printf("1. 펩시 제로(1200) 2. 천연 사이다(1000) 3. 마운틴듀(1100) 4. 파워에이드(1000) 5. 하늘보리(1000)\n");
	printf("음료수 선택: ");
	scanf(" %c", &drink);
	if (drink == '1')
	{
		price = 1200;
		printf("잔돈 반환: %d원\n", money - price);
		stock = 20;
		printf("남은 재고: %d개\n", stock - 1);
		res = price;
		printf("번 금액: %d원\n", res);
	}
	else if (drink == '2')
	{
		price = 1000;
		printf("잔돈 반환: %d원\n", money - price);
		stock = 15;
		printf("남은 재고: %d개\n", stock - 1);
		res = price;
		printf("번 금액: %d원\n", res);
	}
	else if (drink == '3')
	{
		price = 1100;
		printf("잔돈 반환: %d원\n", money - price);
		stock = 30;
		printf("남은 재고: %d개\n", stock - 1);
		res = price;
		printf("번 금액: %d원\n", res);
	}
	else if (drink == '4')
	{
		price = 1000;
		printf("잔돈 반환: %d원\n", money - price);
		stock = 20;
		printf("남은 재고: %d개\n", stock - 1);
		res = price;
		printf("번 금액: %d원\n", res);
	}
	else
	{
		price = 1000;
		printf("잔돈 반환: %d원\n", money - price);
		stock = 5;
		printf("남은 재고: %d개\n", stock - 1);
		res = price;
		printf("번 금액: %d원\n", res);
	}
}