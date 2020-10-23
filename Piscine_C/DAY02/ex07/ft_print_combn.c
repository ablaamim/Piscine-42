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

static void	ft_troll_the_problem(int *arr, int col, int n)
{
	int		i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] += 1;
		i = (col + 1) - 1;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void		ft_print_combn(int n)
{
	int		arr[n];
	int		i;
	int		col;

	col = n - 1;
	if (n > 10)
		return ;
	i = -1;
	while (i++ < n)
		arr[i] = i;
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
	ft_troll_the_problem(arr, col, n);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_print_combn(8);
	return (EXIT_SUCCESS);
}
