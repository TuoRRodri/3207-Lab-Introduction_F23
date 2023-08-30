#include <stdio.h>
#include <stdlib.h>

int randchar(){
	
	return (rand() % (90-65)) + 65; // Using the standard C library and just Upper case letters
	
}
