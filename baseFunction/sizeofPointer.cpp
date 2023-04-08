 
#include<stdio.h>
 
int main()
{
	char const *p = "abcdef";
 
	printf("%d\n", sizeof(p));
 
	printf("%d\n", sizeof(p+1));
 
	printf("%d\n", sizeof(*p));
 
	printf("%d\n", sizeof(*p+1));
 
	printf("%d\n", sizeof(p[0]));
 
	printf("%d\n", sizeof(&p));
 
	printf("%d\n", sizeof(&p+1));
 
	printf("%d\n", sizeof(&p[1]+1));
 
	return 0;
}