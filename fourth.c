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
	printf("============= �޴� =============\n");
	printf("1. �ݾ� ���� 2. �ܵ� ��ȯ 3. ����� ���� 4. ����\n");
	printf("�ݾ� ����: ");
	scanf("%d", &money);
	printf("1. ��� ����(1200) 2. õ�� ���̴�(1000) 3. ����ƾ��(1100) 4. �Ŀ����̵�(1000) 5. �ϴú���(1000)\n");
	printf("����� ����: ");
	scanf(" %c", &drink);
	if (drink == '1')
	{
		price = 1200;
		printf("�ܵ� ��ȯ: %d��\n", money - price);
		stock = 20;
		printf("���� ���: %d��\n", stock - 1);
		res = price;
		printf("�� �ݾ�: %d��\n", res);
	}
	else if (drink == '2')
	{
		price = 1000;
		printf("�ܵ� ��ȯ: %d��\n", money - price);
		stock = 15;
		printf("���� ���: %d��\n", stock - 1);
		res = price;
		printf("�� �ݾ�: %d��\n", res);
	}
	else if (drink == '3')
	{
		price = 1100;
		printf("�ܵ� ��ȯ: %d��\n", money - price);
		stock = 30;
		printf("���� ���: %d��\n", stock - 1);
		res = price;
		printf("�� �ݾ�: %d��\n", res);
	}
	else if (drink == '4')
	{
		price = 1000;
		printf("�ܵ� ��ȯ: %d��\n", money - price);
		stock = 20;
		printf("���� ���: %d��\n", stock - 1);
		res = price;
		printf("�� �ݾ�: %d��\n", res);
	}
	else
	{
		price = 1000;
		printf("�ܵ� ��ȯ: %d��\n", money - price);
		stock = 5;
		printf("���� ���: %d��\n", stock - 1);
		res = price;
		printf("�� �ݾ�: %d��\n", res);
	}
}