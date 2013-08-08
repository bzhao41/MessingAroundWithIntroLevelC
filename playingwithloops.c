#include <stdio.h>
#include <stdlib.h>
#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

char arr[][80] = {
	"Washington\0",
	"Lincoln\0",
	"Reagun\0",
	"Kennedy\0",
	"Clinton\0",
	"Taft\0",
	"Roosevelt\0"
};

int main(int argc, char *argv[]) {
	//For loops
	FILE *out = fopen("output.txt", "a");
	for (int i = 0; i < NELEMS(arr); i++) {
		fprintf(out, "%s\n",arr[i]);
	}	
	
	for (int i = 0; i < sizeof(argv); i++) {
		fprintf(out, "%s\n",argv[i]);
		
	}
	
	
}