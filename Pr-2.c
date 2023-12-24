// Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include<stdio.h>
int cube(int *ptr,int i,int j,int n){
	
	int c[n][n];
	
	printf("Cubes of all elements:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			c[i][j] = *(ptr + i * n + j) * *(ptr + i * n + j) * *(ptr + i * n + j);
			printf("%d ",c[i][j]);		
			
		}
	}
}
main(){
	int n,i,j;
	printf("Enter size an array:");
	scanf("%d",&n);
	
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	cube(a,i,j,n);
	
}
