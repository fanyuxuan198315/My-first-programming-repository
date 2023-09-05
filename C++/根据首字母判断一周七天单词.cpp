#include <stdio.h>
int main() {

	char first = '0';
	char second = '0';

	scanf("*c", &first);

	switch (first) {
	case 'M':
	case 'm':
		printf("Monday\n");
		break;

	case 'T':
	case 't':
		printf("请输入第二个字符\n");
		getchar();
		scanf("%c", &second);
		if (second == 'u' || second == 'U') {
			printf("Tuesday\n");
		}
		else if (second == 'H' || second == 'h') {
			printf("Thursday\n");
		}else {
			printf("不是一个合法的单词");
		}
        break;

	case 'w':
	case 'W':
		printf("Wednesday\n");
		break;

	case 'f':
	case 'F':
		printf("Firday\n");
		break;

	case 'S':
	case 's':
		printf("请输入第二个字符\n");
		getchar();
		scanf("%c", &second);
		if (second == 'a' || second == 'A') {
			printf("Satarday\n");
		}
		else if (second == 'u' || second == 'U') {
			printf("Sunday\n");
		}
		else {
			printf("不是一个合法的单词");
		}
		break;

	default:
		break;


	// insert code here...
}