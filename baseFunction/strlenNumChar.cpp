// #include<stdio.h>
 
// #include<string.h>
 
// int main()
// {
// 	char arr[] = { "abcdef" };
 
// 	printf("%d\n", strlen(arr));
 
// 	printf("%d\n", strlen(arr+0));
 
// 	//printf("%d\n", strlen(*arr));//出错
 
// 	//printf("%d\n", strlen(arr[1]));//出错
 
// 	printf("%d\n", strlen((char*)&arr));	
 
// 	printf("%d\n", strlen((char*)&arr+1));
 
// 	printf("%d\n", strlen(&arr[1]+1));
 
// 	return 0;
 
// }

// #include<stdio.h>
 
// #include<string.h>
// int main()
// {
// 	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
// 	printf("%d\n", strlen(arr));
 
// 	printf("%d\n", strlen(arr+0));
 
// 	printf("%d\n", strlen(&arr));
 
// 	printf("%d\n", strlen(*arr));
 
// 	printf("%d\n", strlen(arr[1]));
 
// 	return 0;
// }