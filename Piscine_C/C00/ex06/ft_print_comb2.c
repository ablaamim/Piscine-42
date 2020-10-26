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

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int tab[2];

	tab[0] = -1;
	while(++tab[0] <= 98)
	{
		tab[1] = tab[0];
		while(++tab[1] <= 99)
		{
			ft_putchar((tab[0] / 10) + 48);
			ft_putchar((tab[0] % 10) + 48);
			write(1, " ", 1);
			ft_putchar((tab[1] / 10) + 48);
			ft_putchar((tab[1] % 10) + 48);
			if(tab[0] != 98)
				write(1, ", ",2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return(EXIT_SUCCESS);
}
