#include <stdio.h>

int main(void){
	float toobig = 3.4e38 * 1000000.0f;
	printf("toobig = %e.\n", toobig);
	return 0;
}
