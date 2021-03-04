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

int		is_base(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] < '!' || str[i] > '~')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	convert_base(long nbr, char *base, int size)
{
	if (nbr >= size)
		convert_base(nbr / size, base, size);
	write(1, &base[nbr % size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr2;
	int		base_size;

	nbr2 = nbr;
	base_size = is_base(base);
	if (base_size)
	{
		if (nbr2 < 0)
		{
			write(1, "-", 1);
			nbr2 = -nbr2;
		}
		convert_base(nbr2, base, base_size);
	}
}
