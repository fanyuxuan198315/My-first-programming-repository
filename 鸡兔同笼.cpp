#include <stdio.h>
int main() {
int chiken = 0;
int rabbit = 0;
for (chiken = 0; chiken <= 88; chiken++) {
	rabbit = 88 - chiken;
	if (rabbit * 4 + chiken * 2 == 244) {
		printf("rabbit=d chiken=d\n", rabbit, chiken);
		break;
	}
	// insert code here...
}