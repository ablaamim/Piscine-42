#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_pustr(char *str)
{
	while (*str != '\0')
		write(1, &(*str++), 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(void)
{
	char src[] = "1337\n";
	char dest[] = "Where to copy string\n";
	ft_pustr(src);
	ft_pustr(dest);
	ft_strcpy(dest, src);
	ft_pustr(dest);
	return(EXIT_SUCCESS);
}
