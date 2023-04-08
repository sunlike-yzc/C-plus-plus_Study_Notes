#include<stdio.h>
#include<string.h>
int main()
{
 
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	
		printf("%d\n", sizeof(arr));
 
		printf("%d\n", sizeof(arr+0));
 
		printf("%d\n", sizeof(*arr+1));
 
		printf("%d\n", sizeof(&arr));
 
		printf("%d\n", sizeof(&arr+1));
 
		printf("%d\n", sizeof(&arr[1]));
 
		printf("%d\n", sizeof(&arr[1]+1));
 
 
	return 0;
}