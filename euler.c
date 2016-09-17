#include <stdio.h>
#include <stdlib.h>

//Winston Venderbush
//9/17/16

int mult3and5(){ //Problem 1
	short i;
	int sum;
	for (i = 0; i <= 1000; i++){
		if ((i % 3 == 0) || (i % 5 == 0)){
			sum += i;
		}
	}
	return sum;
}

long evenDivis(int lim){ //Problem 5
	long currNum;
	int counter;
	char foundNum = 0;
	for (currNum = 1; foundNum != 1; currNum++){
		for (counter = 1; counter <= lim; counter++){
			if (currNum % counter != 0){
				break;
			}
		}
		if (counter == lim + 1){
			foundNum = 1;
		}
	}
	return currNum - 1;
}

int main(){
	int sum = mult3and5();
	long curr = evenDivis(10);
	printf("Sum: %d \n", sum);
	printf("EvenDivisibility: %ld \n", curr);

}