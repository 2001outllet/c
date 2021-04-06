// 2번 과제랑 3번 과제가 하나에 들어가 있습니다.




//2번 과제

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


//3번 과제
#include<stdio.h>

void move(int n, char from, char to)
{
	if (n == 1)
		printf("%d번 고리를 %c에서 %c로\n", n, from, to);
	

	return;
}
void hanoi(int n, char from, char by, char to)
{
	if (n >= 1)
	{
		hanoi(n - 1, from, to, by);
		printf("%d번 고리를 %c에서 %c로\n", n, from, to);
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





