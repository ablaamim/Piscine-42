## :information_source: Table Content :

| C01 | Problems |
|--- |--- |
| ex00 | ft_ft |
| ex01 | ft_ultimate_ft |
| ex02 | ft_swap |
| ex03 | ft_div_mod |
| ex04 | ft_ultimate_div_mod |
| ex05 | ft_putstr |
| ex06 | ft_strlen |
| ex07 | ft_rev_int_tab |
| ex08 | ft_sort_int_tab |

## Let's go !

</p>
<p align="center">  
<img src="https://media.giphy.com/media/RrVzUOXldFe8M/giphy.gif" width="1200">
</p>

---

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
	return(0);
}
```

4. :8ball: Expected output :
```c
$>gcc ft_ft.c -o ft_ft -Wall -Wextra -Werror && ./ft_ft
-----
1
-----
42
-----
```
---

## Exercise 01 : ft_ultimate_ft

1. :dart: Task :
```c
• Create a function that takes a pointer to pointer to pointer to pointer to pointer
to pointer to pointer to pointer to pointer to int as a parameter and sets the value
"42" to that int.
• Here’s how it should be prototyped :
void ft_ultimate_ft(int *********nbr);
```

2. :dart: Function :
```c
void	ft_ultimate_ft(int *********nbr)
{
	**********nbr = 42;
}
```
3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	int n;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;


	n = 0;
	ptr = &n;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	write(1, "-----\n", 6);
	ft_putnbr(n);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	ft_ultimate_ft(ptr9);
	ft_putnbr(n);
		ft_putchar('\n');
	write(1, "-----\n", 6);
	return(0);
}

```

4. :8ball: Expected output :
```c
$>gcc ft_ultimate_ft.c -o ft_ultimate_fr -Wall -Wextra -Werror && ./ft_ultimare_ft
-----
0
-----
42
-----
```

---

## Exercise 02 : ft_swap :

1. :dart: Task :
```c
• Create a function that swaps the value of two integers whose addresses are entered
as parameters.
• Here’s how it should be prototyped :
void ft_swap(int *a, int *b);
```

2. :dart: Function :
```c
void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	int a;
	int b;
	
	a = 1337;
	b = 42;
	write(1, "-----\n",6);
	ft_putnbr(a);
		ft_putchar(' ');
	ft_putnbr(b);
		ft_putchar('\n');
	write(1, "-----\n",6);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
```

---

4. :8ball: Expected output :
```c
&>gcc ft_swap.c -o ft_swap -Wall -Wextra -Werror && ./ft_swap
------
1337
42
------
42
1337
------
```

## Exercise 03 : ft_div_mod

1. :dart: Task :
```c
• Create a function ft_div_mod prototyped like this :
void ft_div_mod(int a, int b, int *div, int *mod);
• This function divides parameters a by b and stores the result in the int pointed by
div. It also stores the remainder of the division of a by b in the int pointed by mod.
```

2. :dart: Function :
```c
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(div != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
}
```

4. :8ball: Expected output :
```c
```

---

## Exercise 04 : ft_ultimate_div_mod

1. :dart: Task :
```c
• Create a function ft_ultimate_div_mod with the following prototype :
void ft_ultimate_div_mod(int *a, int *b);
• This function divides parameters a by b. The result of this division is stored in the
int pointed by a. The remainder of the division is stored in the int pointed by b.
```

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

---

## Exercise 05 : ft_putstr :

1. :dart: Task :
```c
• Create a function that displays a string of characters on the standard output.
• Here’s how it should be prototyped :
void ft_putstr(char *str);

```

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

---

## Exercise 06 : ft_strlen :

1. :dart: Task :
```c
• Create a function that counts and returns the number of characters in a string.
• Here’s how it should be prototyped :
int ft_strlen(char *str);

```

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

---

## Exercise 07 : ft_rev_int_tab :

1. :dart: Task :
```c
```

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

---

## Exercise 08 : ft_sort_int_tab :

1. :dart: Task :
```c
```

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

---
