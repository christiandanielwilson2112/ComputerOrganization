#include <stdio.h>
int main(void) {
	int calc(int x, int y, int z);
	int x = 2;
	int y = 6;
	int z = 11;

	printf("x=%d, y=%d, z=%d, result=%d\n", x,y,z,calc(x,y,z));
	return 0;
}
