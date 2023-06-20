#include<stdlib.h>
#include<stdio.h>

int main(){
	int* array;
	int n , i;

	printf("Enter number of elements \n");
	scanf("%d",&n);

	array = (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter %d number",i);
		scanf("%d",&array[i]);
	}

	printf("Dynamic Array...");
	printf("\n");
	for (i=0;i<n;i++){
	printf("%d",array[i]);
	}
	return 0;
}
