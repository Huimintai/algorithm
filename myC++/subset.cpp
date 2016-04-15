#include<stdio.h>
bool isSubset(int arr1[], int arr2[],int m, int n) {
	int i = 0;
	int j = 0;
	for (i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(arr1[i] == arr2[j]) {
				break;
			}
		}
		if (j == m ) {
		return 0;
		}
	}
	return 1;
}


