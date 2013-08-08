#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	unsigned int max_length = 128;
	unsigned int random_length = rand()%10;
	if(random_length == 0){
		random_length = 1;
	}
	char *ptr = malloc(random_length);
	unsigned int i = 0;
	//for (int i = 0; i < random_length;i++) {
	//	ptr[i] = rand()%24;	
	//}
	while (i < random_length) {
		ptr[i++] = (char)rand()%24;
	}
	ptr[i] = '\0';
	printf("Random length is %i\n", random_length);
	printf("Char: %s", ptr);
	
	
	free(ptr);
	ptr = NULL;
	
	return 0;	
}