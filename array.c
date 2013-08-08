#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void next(int *cur){
	*cur = *cur + 1;
}

void previous(int *cur){
	*cur = *cur - 1;
}

void fill_int_array(int arr[]){
	srand(time(NULL));
	for (int i = 0; i < sizeof(*arr)/sizeof(int); i++) {
		arr[i] = rand()%11;
	}
}
void print_int_array(int arr[]){
	printf("%i", sizeof(arr)/sizeof(int));
	printf("%i, %i", sizeof(arr), sizeof(int));
	//for (int i = 0; i < sizeof(*arr)/sizeof(int); i++) {
	//	printf("Index %i: value %i \n", i, arr[0]);
	//}
}
int main(int argc, char *argv[]) {
	//int c[] = {1,2,3,4,5,6};
	srand(time(NULL));
	int random_array[rand()%11];
	int array_size = sizeof(random_array)/sizeof(int);
	printf("%i, %i\n", sizeof(random_array), sizeof(int));
	fill_int_array(random_array);
	printf("The length of the array is %i\n", array_size);
	print_int_array(random_array);
	
	//int current;
	//int close = 1;
	//char response[3];
	/*
	printf("Please enter a non-negative integer value\n");
	scanf("%i", &current);
	printf("The value at index %i is %i\n",current, c[current]);
	while (close == 1) {
		printf("Enter 'n' for next and 'p' for previous or 'x' to close: \n" );
		scanf("%s", response);
		switch (response[0]) {
			case 'p':
				previous(&current);
				printf("The value at index %i is %i\n",current, c[current]);
				continue;
			case 'n':
				next(&current);
				printf("The value at index %i is %i\n",current, c[current]);
				continue;
			case 'x':
				close = 0;
				continue;	
			default:
				printf("You didn't put a recognised character.");
				break;
		}
	}*/
	return 0;
	
}

