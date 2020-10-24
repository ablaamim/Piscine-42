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

int	ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 1;
	f = 1;
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
		return (f);
	}
	else
		return (0);
}

int	main(void)
{
	int a;

	a = 5;
	printf("%d", ft_iterative_factorial(a));
	return (EXIT_SUCCESS);
}
