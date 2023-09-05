#include <stdio.h>
#include <iomanip>
#include <iostream>
int number = 0;



int main() {


	int n = 0;
	int i = 1;
	while (i < number) {
		i++;
		if (number % i == 0) {
			n++;
			break;
		}
	}

	if (n > 0) {
		printf("不是质数\n");
	}
	else {
		printf("是质数\n");
		printf("hello world\n");

		// insert code here...


	}