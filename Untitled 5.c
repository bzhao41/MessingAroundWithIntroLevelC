#include <stdio.h>
#include <string.h>
#define NELEMS(x) (sizeof(x)/sizeof(x[0]))

char arr[][80] = {"String one","String two","String three","String four","String five"};

void find_str(char array[]) 
{
	int i = 0;
	for (int i = 0; i < 5;i++)
	 {
		if(strstr(arr[i], array))
		{
			printf("Track:%i\nTitle:%s\n", i, arr[i]);
		}
	}
}

int main(int argc, char *argv[]) {
	char search[80];
	printf("What would you like to search for?\n");
	fgets(search,80,stdin);
	find_str(search);
	return 0;
}