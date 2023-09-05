#include <stdio.h>
int main() {
	int month = 6;
	int day = 25;
	if (month < 1 || month > 12) {
		printf("month 不合法\n");
		if (day < 0 || day>31) {
			printf("day不合法\n");
		}
		if (month == 2) {
			if (day>28) {
				printf("day不合法\n");
			}
		}
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
			if (day > 30) {
				printf("day不合法");
			}
		}
		if ((month == 3 && day >= 21) | (month == 4 && day < 21)) {
			printf("白羊座");
		}

		else if ((month == 4 && day >= 21) | (month == 5 && day < 21)){
			printf("金牛座");
	}

	 else if ((month == 5 && day >= 21) | (month == 6 && day < 21)){
		    printf("双子座");
    }

	 else if ((month == 6 && day >= 21) | (month == 7 && day < 23)) {
			printf("双子座");
    }

	 else if ((month == 7 && day >= 23) | (month == 8 && day < 23)) {
			printf("巨蟹座");
		}

	 else if ((month == 8 && day >= 23) | (month == 9 && day < 23)) {
			printf("处女座");
		}

	 else if ((month == 9 && day >= 23) | (month == 10 && day < 23)) {
			printf("天秤座");
		}

	 else if ((month == 10 && day >= 23) | (month == 11 && day < 23)) {
			printf("天蝎座");
		}

	 else if ((month == 11 && day >= 23) | (month == 12 && day < 23)) {
			printf("人马座");
		}

	 else if ((month == 12 && day >= 23) | (month == 1 && day < 21)) {
			printf("摩羯座");
		}

	 else if ((month == 1 && day >= 21) | (month == 2 && day < 21)) {
			printf("宝瓶座");
		}

	 else if ((month == 2 && day >= 21) | (month == 3 && day < 21)) {
			printf("双鱼座");
		}
	// insert code here...
}