// 2�� ������ 3�� ������ �ϳ��� �� �ֽ��ϴ�.




//2�� ����

/*#include<stdio.h>

void swap(int *a,int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;

	return;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	swap(&a,&b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}*/


//3�� ����
#include<stdio.h>

void move(int n, char from, char to)
{
	if (n == 1)
		printf("%d�� ���� %c���� %c��\n", n, from, to);
	

	return;
}
void hanoi(int n, char from, char by, char to)
{
	if (n >= 1)
	{
		hanoi(n - 1, from, to, by);
		printf("%d�� ���� %c���� %c��\n", n, from, to);
		hanoi(n - 1, by, from, to);
	}
	return;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	move( n, 'A', 'C');
	hanoi(n, 'A', 'B', 'C');
	return 0;
}





