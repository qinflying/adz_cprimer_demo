#include <stdio.h>
int main(){
	float a, b;
	b = 2.0e20+1.0;
	b = b - 2.0e20;
	printf("%f.\n", b);
	return 0;
}
