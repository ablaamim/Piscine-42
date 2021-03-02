## :information_source: Table Content :

| C01 | Problems |
|--- |--- |
| ex00 | ft_ft |
| ex01 | ft_ultimate_ft |

## Exercise 00 : ft_ft

1. :dart: Task :
```c
• Create a function that takes a pointer to int as a parameter, and sets the value "42"
to that int.
• Here’s how it should be prototyped :
void ft_ft(int *nbr);
```

2. :dart: Function :
```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	int n;

	n = 1;
	write(1, "-----\n", 6);
	ft_putnbr(n);
		ft_putchar('\n');
	write(1,"------\n", 6);
	ft_ft(&n);
	ft_putnbr(n);
		ft_putchar('\n');
	write(1, "------'n", 6);
	return(EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```c
$>gcc fullcode.c -o fullcode -Wall -Wextra -Werror && ./fullcode
-----
1
-----
42
-----
```