## Exercise 00 : ft_putchar 

1. :dart: Task :

> Write a function that displays characters passed as parameter.
> This is how it should be prototyped.
> void ft_putchar(char c);

2. :floppy_disk: Ft_putchar using system calls :

> *A minimal c program that will puzzle beginners, write it in a file named ft_putchar.c and create a.out with ```gcc ft_putchar.c && ./a.out```*

> The following program will print a char by making use of [write](http://man7.org/linux/man-pages/man2/write.2.html)

```c
#include <unistd.h>

void	ft_putchar(char c) 			/* Void because the function does not return any value, it writes directly, char is the type of the variable c 
						that is given as parameter to the function ft_putchar by the main function. */
{
	write(1, &c, 1);			/* Ssize_t write(int fd, const void *buf, size_t count); or in human language: write count letters of buf 
						(which is a pointer) to fd (if fd = 1 this is your terminal, stdout) */
}
```
3. :beetle: :wrench: Test && Debug

```c
int	main(void)
{
	ft_putchar(42);				/* will print a star */

	/* ft_putchar(42 + '0');	 	will only print 4 */
	/* ft_putchar("4");			will not work, you are using " instead of ', so C language think it is a char array. */
	return (0);
}
```

4. :8ball: Expected output :

> $>*

> $>4

## Exercise 01 : ft_print_alphabet

1. :dart: Task :

> Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.

2. :dart: Task :

> This function is easier to enter, that would constantly use.
> void - is NONE type, func - return NONE, but put `char` character

```c
void ft_putchar(char c)
{
	write(1, &c, 1);
}
```

2.1 `man ASCII` :

```
      97  a    98  b    99  c   100  d   101  e   102  f   103  g
     104  h   105  i   106  j   107  k   108  l   109  m   110  n   111  o
     112  p   113  q   114  r   115  s   116  t   117  u   118  v   119  w
     120  x   121  y   122  z
```

> `(i >= 97 && i <= 122)` while i fits the condition

---
3. :dart: Function :

```c
void	ft_print_alphabet(void)
{
	char ltr;

	ltr = 'a';
	while (ltr >= 'a' && ltr <= 'z')
	{
		ft_putchar(ltr);
		ltr++;
	}
}
```

4. :beetle: :wrench: Test && Debug :

```c
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
```

5. :8ball: Expected output :

```c
> $> abcd...z
```

## Exercise 07 : ft_print_numbers

1. :dart: Task :

> Create a function that displays all digits, on a single line, by ascending order.

2. `man ascii`:

```
      48  0    49  1    50  2    51  3    52  4    53  5    54  6    55  7
      56  8    57  9
```

---
3. :dart: Function:

``` c
void	ft_print_numbers(void)
{
	char nbr;

	nbr = '0';
	while (nbr >= '0' && nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
}
```

## Exercise 08: ft_is_negative

1. :dart: Task :

> Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

---
2. :dart: Function:

```c
void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
```