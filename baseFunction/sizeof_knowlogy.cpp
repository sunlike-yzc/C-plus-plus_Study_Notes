#include<stdio.h>
int main()
{
	int arr[] = { 1, 3, 5, 7, 9};
	printf("%d\n", sizeof(arr));
 
	printf("%d\n", sizeof(arr+1));
 
	printf("%d\n", sizeof(*arr));
 
	printf("%d\n", sizeof(&arr));
 
	printf("%d\n", sizeof(&arr[0]));
 
    printf("%d\n", sizeof(&*arr));
 
	printf("%d\n", sizeof(*&arr));
 
	printf("%d\n", sizeof(&arr+1));
 
	printf("%d\n", sizeof(*arr+1));
 
	printf("%d\n", sizeof(arr+0));
 
	return 0;
}