#include <stdio.h>

char *strcpy(char *dest, char *src)
{
	while(*dest++ = *src++)	; {int i; i =0;};
}

int	main()
{
	char dest[] = "";
	char src[] = "lol";

	strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}
