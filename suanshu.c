#include <stdio.h>
int main(int argc, const char * argv[]){
	int num1 = 0;
	int num2 = 0;
	char operator ='0';

	printf("请输入两个数\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("请输入一个运算符\n");
	scanf("\n&c", &operator);

	switch (operator) {
	case '+':
		printf("&d \n", num2 + num1);
		break;
	case '_':
		printf("&d \n", num1 - num2);
		break;
	case '*':
		printf("&d \n", num1 * num2);
		break;
	case '/':
		if (num2 == 0) {
			printf("除数不能为0\n");
		}
		else {
			printf("*d \n", num1 / num2);
			break;
	case'g':
		if (num2 == 0) {
			printf("除数不能为0");
		}
		else {
			printf("d \n", num1 & num2);
		}
		break;
	default:
		printf("操作符不合法");
		break;
		}
		// insert code here...
		printf("Hello,World!\n");
		return 0;
	}