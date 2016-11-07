#include <stdlib.h>
#include <stdio.h>

int mem = 0;

void freezetw() {
	void *a = malloc(1024);
	mem += 1;
	printf("Memory allocated : %d KB", mem);
	freezetw();
}

void main(){
	freezetw();
}
