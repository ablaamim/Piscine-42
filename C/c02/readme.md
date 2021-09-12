## :information_source: Table Content :

| C01 | Problems | Fullcode |
|--- |--- |--- |
| ex00 | ft_strcpy | [fullcode.c]() |
| ex01 | ft_strncpy | [fullcode.c]() |
| ex02 | ft_str_is_alpha | [fullcode.c]() |
| ex03 | ft_str_is_numeric | [fullcode.c]() |
| ex04 | ft_str_is_lowercase | [fullcode.c]() |
| ex05 | ft_is_uppercase | [fullcode.c]() |
| ex06 | ft_str_is_printable | [fullcode.c]() |
| ex07 | ft_strupcase | [fullcode.c]() |
| ex08 | ft_strlowcase | [fullcode.c]() |
| ex09 | ft_strcapitalize | [fullcode.c]() |
| ex10 | ft_str_strlcpy | [fullcode.c]() |
| ex11 | ft_putstr_non_printable | [fullcode.c]() |
| ex12 | ft_print_memoery | [fullcode.c]() |

## MOAR !

</p>
<p align="center">  
<img src="https://tahirjan.com/media/posts/9/responsive/c-string-manipulation-md.jpg" width="1200">
</p>

---

## Exercise 00 : ft_strcpy :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
char	*ft_strcpy(char *dest, char *src)
{
	if ((src == NULL) || (dest == NULL))
		return (NULL);
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return(dest);
}
```

3. :wrench: :beetle: Test && Debug :
```c
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "-----------------------------------------\n";
	char	str1[] = "NULL TEST! NO DISPLAY IN STDOUT.\n";
	char	src1[] = "Copy me\n";
	char	dest1[256];
	char	src2[] = "";
	char	dest2[256];
	char	src3[] = "Future is loading\n";
	char	dest3[] = "\0";

	ft_strcpy(dest1, src1);
		ft_putstr(str);
	ft_putstr(dest1);
		ft_putstr(str);
	ft_strcpy(dest2, src2);
	ft_putstr(dest2);
		ft_putstr(str1);
		ft_putstr(str);
	ft_strcpy(dest3, src3);
	ft_putstr(dest3);
		ft_putstr(str);
	return (EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```
gcc -Wall -Wextra -Werror ft_strcpy.c ft_strcpy && ./ft_strcpy

-----------------------------------------
Copy me
-----------------------------------------
NULL TEST! NO DISPLAY IN STDOUT.
-----------------------------------------
Future is loading
-----------------------------------------
```
---

## Exercise 01 : ft_strncpy :

1. :dart: Task :


</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :

```c
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src != '\0' && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
```
3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	char	dest[] = "";
	char	src[]= "Text1.txt\n";
	unsigned int	n;

	n = 10;
	write(1, "-----\n", 6);
	ft_putstr(src);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	write(1, "\n", 1);
	write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```c
-----
Text1.txt

-----
Text1.txt

-----
```

---

## Exercise 02 : ft_str_is_alpha :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		*str++;
	}
	return (1);
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	/*TEST 1 :*/
	char	str[] = "";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_str_is_alpha(str);
		write(1, "-----\n", 6);
		write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_alpha(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 :*/
	char str1[] = "123";
	ft_putstr(str1);
		write(1, "\n", 1);
	ft_str_is_alpha(str1);
		write(1, "-----\n", 6);
		write(1, "Return : ",9);
	ft_putnbr(ft_str_is_alpha(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 :*/
	char	str2[] = "abcDEF";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_alpha(str2);
	write(1, "Return :", 9);
	ft_putnbr(ft_str_is_alpha(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```

---

4. :8ball: Expected output :
```c

-----

-----
Return : 1
-----
123
-----
Return : 0
-----
abcDEF
-----
Return :1
-----
```

## Exercise 03 : ft_str_is_numeric :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
int ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		*str++;
	}
	return (1);
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	/*TEST 1 : */
	char	str[] = "";
		write(1, "-----\n", 6);
	ft_putstr(str);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str);
	ft_putnbr(ft_str_is_numeric(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "0bcd11";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str1);
	ft_putnbr(ft_str_is_numeric(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 :*/
	char	str2[] = "1234";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_numeric(str2);
	ft_putnbr(ft_str_is_numeric(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```c
-----

-----
1
-----
0bcd11
-----
0
-----
1234
-----
1
-----
```

---

## Exercise 04 : ft_str_is_lowercase :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		*str++;
	}
	return (1);
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	/*TEST 1 : */
	char	str[] = "abcd";
		write(1, "-----\n" , 6);
	ft_putstr(str);
		write(1, "\n", 1);
	ft_str_is_lowercase(str);
		write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_lowercase(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "aaaAAAaaa";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_lowercase(str1);
	write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_lowercase(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 : */
	char	str2[] = "";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n",6);
	ft_str_is_lowercase(str2);
	ft_putnbr(ft_str_is_lowercase(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```c
-----
abcd
-----
Return : 1
-----
aaaAAAaaa
-----
Return : 0
-----

-----
Return : 1
-----
```

---

## Exercise 05 : ft_str_is_uppercase :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
```

3. :wrench: :beetle: Test && Debug :
```c
int	main(void)
{
	/*TEST 1 : */
	char	str[] = "ABCD";
		write(1, "-----\n" , 6);
	ft_putstr(str);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_uppercase(str);
		write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_uppercase(str));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 2 : */
	char	str1[] = "AAAaaaAAA";
	ft_putstr(str1);
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	ft_str_is_uppercase(str1);
	write(1, "Return : ", 9);
	ft_putnbr(ft_str_is_uppercase(str1));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	/*TEST 3 : */
	char	str2[] = "";
	ft_putstr(str2);
		write(1, "\n", 1);
		write(1, "-----\n",6);
	ft_str_is_uppercase(str2);
	ft_putnbr(ft_str_is_uppercase(str2));
		write(1, "\n", 1);
		write(1, "-----\n", 6);
	return (EXIT_SUCCESS);
}
```

4. :8ball: Expected output :
```c
-----
ABCD
-----
Return : 1
-----
AAAaaaAAA
-----
Return : 0
-----

-----
Return : 1
-----
```

---

## Exercise 06 : ft_str_is_printable :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

## Exercise 07 : ft_strupcase :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

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

---

## Exercise 08 : ft_strlowcase :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

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

## Exercise 09 : ft_strcapitalize :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

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

## Exercise 10 : ft_strlcpy :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

## Exercise 11 : ft_putstr_non_printable :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

2. :dart: Function :
```c
```

3. :wrench: :beetle: Test && Debug :
```c
```

4. :8ball: Expected output :
```c
```

## Exercise 12 : ft_print_memory :

1. :dart: Task :

</p>
<p align="center">  
<img src="" width="800">
</p>

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



