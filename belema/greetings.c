#include <stdio.h>

int main()
{

	char name[300];
	printf("who are you pls %s, and what is your name?", name);
	printf("hello Mr. %s, are you married? : ", name);
	printf("when %s?\n please, insert your date:\n ", name);
	scanf("%s", name);
	scanf("%s", name);
	scanf("%s", name);

	printf("congratulations %s!\n HAPPY MARRIED LIFE!\n we love you.\n", name);

	return(0);
}
