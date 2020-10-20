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
/* The first exercice is quite similar to this one, the only difference
 is the inversed variables values, and using decrementation*/
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_print_reverse_alphabet()
{
	char alph;

	alph = 122; /* man ascii*/
	while (alph >= 97) 
	{
		ft_putchar(alph);
		alph--; /*decrementation*/
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_print_reverse_alphabet();
	return (EXIT_SUCCESS);
}
