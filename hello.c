#include <stdio.h>

int main(void)
{
	printf("Look Ma', no hands!\n");
	printf("Who are you? ");
	char name[20];
	scanf("%s", &name);
	printf("Hello %s!\n", name);
	return 0;
}
