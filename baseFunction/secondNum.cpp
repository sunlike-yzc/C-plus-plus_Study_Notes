#include<stdio.h>
 
int main()
{
	int a[3][4] = { 0 };
 
	printf("%d\n", sizeof(a));
 
	printf("%d\n", sizeof(a[0]));
 
	printf("%d\n", sizeof(a[0][0]));
 
	printf("%d\n", sizeof(a[0]+1));
 
	printf("%d\n", sizeof(*(a[0]+1)));
 
	printf("%d\n", sizeof(a+1));
 
	printf("%d\n", sizeof(*(a+1)));
 
	printf("%d\n", sizeof(&a[0]+1));
 
	printf("%d\n", sizeof(*(&a[0] + 1)));
 
	printf("%d\n", sizeof(*a));
 
	printf("%d\n", sizeof(a[3]));
 
	return 0;
}