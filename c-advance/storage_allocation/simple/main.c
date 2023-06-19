#include <stdio.h>


double doubleResult(double input){
	double result;
	result = 2*input;
	return result;
}
int main(int argc, char* argv[]){

	int age = 30;
	double salary = 1000.100;
	double myList[3] = {1.2,4.3,5.3};

	printf("Result==>\t %.3f\n",doubleResult(salary));
	return 0;
}
