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

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

void	ft_rev_int_tab(int *tab, int size)
{
	int index;

	index = 0;
	while (index < size / 2)
	{
		ft_swap(&tab[index], &tab[size - 1 - index]);
		index++;
	}
}

void	ft_put_tab_nbr(int *tab, int size)
{
	int i;

	i = 0;

	while (i != size + 1)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	affich_tab(int *tab, int size)
{
	ft_put_tab_nbr(tab, size);
	ft_rev_int_tab(tab, size);
	ft_put_tab_nbr(tab, size);
}
int	main(void)
{
	int tab[] = {5, 4, 3, 2, 1, 0};
	int tab2[] = {256, 156, 1654, 215, 15681, 145, 51845, 15};
	int size;
	int size2;
	size = 5;
	size2 = 7;

	affich_tab(tab, size);
	affich_tab(tab2, size2);
	return(EXIT_SUCCESS);
}
