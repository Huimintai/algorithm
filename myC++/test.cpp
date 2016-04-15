#include<stdio.h>
int  main() {
//	int a=2,x=2,p,q;
//	q=(++x)+(++x);
//	printf("%d,%d\n",x,q);
	
//	int b = 3;
//	 int arr[] = {6,7,8,9,10};
//	 int *ptr = arr;
//	 *(ptr++)+=123;
//	 printf("%d,%d\n",*ptr,*(++ptr));
	
//	int b = 3;
	 int arr[] = {6,7,8,9,10};
	 int *ptr = arr;
	 *(ptr++)+=123;
	 printf("%d,%d\n",*ptr,*ptr++);
	 printf("%d\n", *ptr);
}
