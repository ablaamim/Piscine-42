/*-----------------------------------------------------
-                               __                    -
-                             .d$$b                   -
-                           .' TO$;\                  -
-                          /  : TP._;                 -
-                         / _.;  :Tb|                 -
-                        /   /   ;j$j                 -
-                    _.-"       d$$$$                 -
-                  .' ..       d$$$$;                 -
-                 /  /P'      d$$$$P. |\              -
-                /   "      .d$$$P' |\^"l             -
-              .'           `T$P^"""""  :             -
-          ._.'      _.'                ;             -
-       `-.-".-'-' ._.       _.-"    .-"              -
-     `.-" _____  ._              .-"                 -
-    -(.g$$$$$$$b.              .'                    -
-      ""^^T$$$P^)            .(:                     -
-        _/  -"  /.'         /:/;                     -
-     ._.'-'`-'  ")/         /;/;                     -
------------------------------------------------------*/

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
		write(1, &(*str++), 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return(dest);
}

int	main(void)
{
	char src[] = "testing\n";
	char dest[] = "Copied into string block\n";
	ft_putstr(src);
	ft_putstr(dest);
	ft_strcpy(dest, src);
	ft_putstr(dest);
	return (EXIT_SUCCESS);
}
