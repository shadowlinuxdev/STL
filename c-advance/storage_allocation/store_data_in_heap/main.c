#include<stdio.h>
#include <stdlib.h>


double *multipleByTwo(double *input){
	double *twice = malloc(sizeof(double));
	*twice = *input * 2.0;
	return twice;
					
}

int main(int argc , char* argv[]){

	int *age = malloc(sizeof(int));
	*age = 20;

	double *salary = malloc(sizeof(double));
	*salary = 434534.21;

	double *myList = malloc(3*sizeof(double));
	myList[0] = 1.2;
	myList[1] = 12.2;
	myList[2] = 32.2;

	double *twiceSalary = multipleByTwo(salary);
	printf("%.3f",*twiceSalary);

	free(age);
	free(salary);
	free(myList);
	free(twiceSalary);
}
