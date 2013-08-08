#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
 	int n,m;
//	printf("Enter an N: \n");
//	scanf("%i", &n);
//	printf("Enter an M: \n");
//	scanf("%i", &m);

	printf("enter n and m\n");
	scanf("%i %i", &n, &m);
	
	for (int i = (int) pow(10,n) - 1; i > 0; i--) {
		if(i%m == 0){
			printf("%i is the largerst.\n", i);
			return 0;
		}
	}
	return 0;
}