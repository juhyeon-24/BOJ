#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define len 200

int main()
{
	char str[len];
	scanf("%s", str);

	int length = strlen(str);
	int iter = length/10 + 1;


	for (int i = 0; i < iter; i++) {
		if (i == iter - 1) {
			for (int j = 0; j < length % 10; j++) {
				printf("%c", str[i * 10 + j]);
			}
			if(length%10)
				printf("\n");
			break;
		}

		for (int k = 0; k < 10; k++) {
			printf("%c", str[i * 10 + k]);
		}
		printf("\n");
	}

	
	return 0;

	
}