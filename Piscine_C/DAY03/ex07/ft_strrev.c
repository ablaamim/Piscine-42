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

#include <stdio.h>
#include <stdlib.h>
char	*ft_strrev(char *str)
{
	int	len;
	int	count;
	char	ascii;

	len = 0;
	count = 0;
	while (str[len])
	{
		len++;
	}
	len = len - 1;
	while (count < len)
	{
		ascii = str[count];
		str[count] = str[len];	
		str[len] = ascii;

		count++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "abcdefg";

	printf("%s / ", str);
	ft_strrev(str);
	printf("%s", str);
	return (EXIT_SUCCESS);
}
