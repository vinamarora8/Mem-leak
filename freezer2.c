#include <stdio.h>
#include <stdlib.h>

void main(){
	int count = 0;
	while(1){
		count ++;
		char *p = malloc(1024);
		printf("\rMemory Allocated = %d kB", count);
	}
}
