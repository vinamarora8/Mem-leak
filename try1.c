#include <stdlib.h>

void function_which_allocates() {
	float *a = malloc(sizeof(float) * 45);
	puts("memory allocated");
}

void main() {
	function_which_allocates();
}
