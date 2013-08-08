#include <stdio.h>
const int lower_limit = 0;
const int upper_limit = 100;

int main(int argc, char *argv[]) {
	int start, end, step;
	printf("Enter a start: \n");
	scanf("%i", &start);
	if(start < lower_limit) {
		printf("start too small. Must be larger than %i.\n", lower_limit);
		return 0;
	}
	if(start > upper_limit) {
			printf("start too large. Must be smaller than %i.\n", upper_limit);
			return 0;
		}
	printf("Enter an end: \n");	
	scanf("%i", &end);
	if(end > upper_limit) {
			printf("end too large. Must be smaller than %i.\n", upper_limit);
			return 0;
		}
	if(end < start) {
			printf("end too small. Must be larger than start.\n");
			return 0;
		}
	if(end < lower_limit) {
			printf("end too small. Must be larger than %i.\n", lower_limit);
			return 0;
		}
	printf("Enter a Step: \n");
	scanf("%i", &step);
	if(step > end - start) {
			printf("Step too large. \n");
			return 0;
		}
	if(step < 0) {
		printf("Step must be positive. \n");
		return 0;
	}
	
	for (int i = start; i <= end; i+=step) {
		printf("\n %i", i);
	}
	return 0;
}