---
## :book: Subject :

| PDF | Version |
|---  |--- |
| C01 | [ENG](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/c01.eng.pdf) |
| C01 | [FR](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/c01%20Fr.pdf) | 


---

## :information_source: Table Content :

| C01 | Function | Full Code |
|--- |--- |---  |
| ex00 | [ft_ft](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/ex00/ft_ft.c) | [ft_ft](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/ex00/fullcode.c)  |
| ex01 | [ft_ultimate_ft](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/ex01/ft_ultimate_ft.c) | [ft_ultimate_ft](https://github.com/alaamimi/Piscine-42/blob/master/C/c01/ex01/fullcode.c) |
| ex02 | [ft_swap]() | [ft_swap]() |
| ex03 | [ft_div_mod]() | [ft_div_mod]() |
| ex04 | [ft_ultimate_div_mod]() | [ft_div_mod]() |
| ex05 | [ft_putstr]() | [ft_putstr]() |
| ex06 | [ft_strlen]() | [ft_strlen]()  |
| ex07 | [ft_rev_int_tab]() | [ft_rev_int_tab]()  |
| ex08 | [ft_sort_int_tab]() | [ft_rev_int_tab]()  |

---

## Let's go !

</p>
<p align="center">  
<img src="https://media.giphy.com/media/RrVzUOXldFe8M/giphy.gif" width="800">
</p>

---

## Exercise 00 : ft_ft

1. :dart: Task :

</p>
<p align="center">
<img src="https://github.com/alaamimi/Piscine-42/blob/master/C/c01/Ressources/ex00.JPG" width="800">
</p>

---

2. :dart: Function :

```c
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
```

---

3. :wrench: :computer: Test && Debug :

```c
#include <stdlib.h>

int	main(void)
{
	int n;
	char str[] = "Memory address if nb : ";
	char str1[] = "nb = ";
	char str2[] = "--------------------------------------------------\n";
	char str3[] = "Value of nb after calling ft_ft function : ";

	n = 1337;
		ft_putstr(str2);
	ft_putstr(str1);
	ft_putnbr(n);
	ft_putchar('\n');
		ft_putstr(str2);
	ft_ft(&n);
		ft_putstr(str3);
	printf("%d\n", n);
		ft_putstr(str2);
	ft_putstr(str);
	printf("%p\n", &n);
		ft_putstr(str2);
	return (EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```
$>gcc ft_ft.c -o ft_ft -Wall -Wextra -Werror && ./ft_ft
--------------------------------------------------
nb = 1337
--------------------------------------------------
Value of nb after calling ft_ft function : 42
--------------------------------------------------
Memory address if nb : 0x7ffffb56bf54
--------------------------------------------------
```

---

## Exercise 01 : ft_ultimate_ft

1. :dart: Task :

</p>
<p align="center">
<img src="https://github.com/alaamimi/Piscine-42/blob/master/C/c01/Ressources/ex01.JPG" width="800">
</p>

---

2. :dart: Function :

```c
void	ft_ultimate_ft(int *********nbr)
{
	**********nbr = 42;
}
```

---

3. :wrench: :computer: Test && Debug :

```c
#include <stdlib.h>

int	main(void)
{
	int		n;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;
	int		*********ptr9;
	char	str[] = "-----------------------------------------------------------\n";
	char	str1[] = "Memory adress of nb : ";
	char	str2[] = "The value of nb after calling ft_ultimate_ft function : ";

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
	ft_putstr(str);
		write(1, "n = ", 4);
	ft_putnbr(n);
		ft_putchar('\n');
		ft_putstr(str);
	ft_ultimate_ft(ptr9);
		ft_putstr(str2);
	ft_putnbr(n);
		ft_putchar('\n');
		ft_putstr(str);
		ft_putstr(str1);
	printf("%p\n", &n);
		ft_putstr(str);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```
$>gcc ft_ultimate_ft.c -o ft_ultimate_fr -Wall -Wextra -Werror && ./ft_ultimate_ft
-----------------------------------------------------------
n = 0
-----------------------------------------------------------
The value of nb after calling ft_ultimate_ft function : 42
-----------------------------------------------------------
Memory adress of nb : 0x7fffc9cc57b4
-----------------------------------------------------------
```
---

## Exercise 02 : ft_swap :

1. :dart: Task :

</p>
<p align="center">
<img src="https://github.com/alaamimi/Piscine-42/blob/master/C/c01/Ressources/ex02.JPG" width="800">
</p>

---

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

---

3. :wrench: :computer: Test && Debug :


```
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		a;
	int		b;
	char	str[] = "Values before swap : ";
	char	str1[] = "Values after swap : ";
	char	str2[] = "----------------------------------------\n";
	char	str3[] = "Memory adress : ";

	a = 1337;
	b = 42;
		ft_putstr(str2);
		ft_putstr(str);
	ft_putnbr(a);
		ft_putchar(' ');
	ft_putnbr(b);
		ft_putchar('\n');
		ft_putstr(str2);
	ft_swap(&a, &b);
		ft_putstr(str1);
	ft_putnbr(a);
		ft_putchar(' ');
	ft_putnbr(b);
		ft_putchar('\n');
		ft_putstr(str2);
		ft_putstr(str3);
	printf("%p\n", &a);
		ft_putstr(str3);
	printf("%p\n", &b);
		ft_putstr(str2);
	return (EXIT_SUCCESS);
}
```
---

4. :8ball: Expected output :

```
&>gcc ft_swap.c -o ft_swap -Wall -Wextra -Werror && ./ft_swap
----------------------------------------
Values before swap : 1337 42
----------------------------------------
Values after swap : 42 1337
----------------------------------------
Memory adress : 0x7ffff5271128
Memory adress : 0x7ffff527112c
----------------------------------------
```

---

## Exercise 03 : ft_div_mod

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

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

---

3. :wrench: :beetle: Test && Debug :

```c
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(mod);
	ft_putchar('\n');
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```
------
10
2
------
```

---

## Exercise 04 : ft_ultimate_div_mod

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

2. :dart: Function :

```c
void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	div = *a;
	mod = *b;
}
```

---

3. :wrench: :beetle: Test && Debug :

```c
int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar(10);
	ft_putnbr(b);
	ft_putchar(10);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```c
```

---

## Exercise 05 : ft_putstr :

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

2. :dart: Function :

```c
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
```

---

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	char *str;

	str = "Future is loading, 1337!";
	write(1,"-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
	write(1, "-----\n",6);
	ft_putstr(str);
		write(1, "\n",1);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_putstr(str);
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	str="";
	write(1,"should be empty :", 17);
	ft_putstr(str);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :
```c
-----
Future is loading, 1337!
-----
Future is loading, 1337!
Future is loading, 1337!
Future is loading, 1337!
-----
should be empty :
-----
```

---

## Exercise 06 : ft_strlen :

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

2. :dart: Function :

```c
int	ft_strlen(char *str)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
		cpt++;
	}
	return(cpt);
}
```

---

3. :wrench: :beetle: Test && Debug :

```c
int	main(void)
{
	char *str;

	str = "AA123456789"; /* len = 11 */
	write(1, "-----\n", 6);
		write(1, "len = ", 6);
	ft_putnbr(ft_strlen(str));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	char *str1;

	str1 = "";
	write(1,"len = ",6);
	ft_putnbr(ft_strlen(str1));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	char *str2;

	str2 = "\t\n 42";
	write(1,"len = ",6);
	ft_putnbr(ft_strlen(str2));
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```
-----
len = 11
-----
len = 0
-----
len = 5
-----
```

---

## Exercise 07 : ft_rev_int_tab :

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

2. :dart: Function :

```c
void	ft_rev_int_tab(int *tab, int size)
{
	int cmt;
	int tmp;

	cmt = 0;
	while(cmt < size)
	{
		tmp = tab[cmt];
		tab[cmt] = tab[size - 1];
		tab[size - 1] = tmp;
		cmt++;
		size--;
	}
}

```

---

3. :wrench: :beetle: Test && Debug :

```c
int	main(void)
{
	int tab[10] = {1, 4, 2, 3, 8, 5, 6, 7, 8, 0};
	int cmt;

	cmt = 0;
	ft_rev_int_tab(tab, 10);
	write(1, "-----\n", 6);
		write(1, "rev_int_tab values are : ", 25);
	write(1, "{", 2);
	while(cmt < 10)
	{
		ft_putnbr(tab[cmt]);
		if(cmt < 9)
			write(1, ", ", 2);
		cmt++;
	}
		write(1,"}", 1);
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :

```c
-----
rev_int_tab values are : {0, 8, 7, 6, 5, 8, 3, 2, 4, 1}
-----
```

---


## Exercise 08 : ft_sort_int_tab :

1. :dart: Task :

</p>
<p align="center">
<img src="" width="800">
</p>

---

2. :dart: Function :
```c
void	ft_sort_int_tab(int *tab, int size)
{
	int cmp1;
	int cmp2;
	int tmp;

	cmp1 = 0;
	while(cmp1 < size)
	{
		cmp2 = cmp1 + 1;
		while(cmp2 < size)
		{
			if (tab[cmp2] < tab[cmp1])
			{
				tmp = tab[cmp1];
				tab[cmp1] = tab[cmp2];
				tab[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
}
```

---

3. :wrench: :beetle: Test && Debug :

```c
int	main(void)
{
	int tab[10]= {8, 9, 4, 5, 7, 1, 0, 3, 2, 6};
	int cmp;

	ft_sort_int_tab(tab, 10);
	cmp = 0;
	write(1, "-----\n", 6);
		write(1, "Sorted int tab : ", 17);
	while(cmp < 10)
	{
		{
			ft_putnbr(tab[cmp]);
			cmp++;
		}
	}
		write(1, "\n", 1);
	write(1, "-----\n", 6);
	return(EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :
```
-----

Sorted int tab : 0123456789

-----

```
---


