### :dart: Table of content :

| Project | Fr | Eng | Solutions |
|---     |---  |--- |---       |
| C00 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c00/c00%20Fr.pdf) | [eng](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c00/c00%20English.pdf) | [9 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/c00) |
| C01 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c01/c01%20Fr.pdf) | [eng](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c01/c01%20English.pdf) |[9 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/c01) |
| C02 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c02/c02%20fr.pdf) | [eng](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/c02/c02%20english.pdf) |[13 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C02) |
| C03 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C03/c03.pdf) | [eng] |[6 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C03) |
| C04 | [fr](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C04) | [eng] |[6 Problems](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C04/c04.pdf) |
| C05 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C05/c05.pdf) |[eng] | [9 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C05) |
| C06 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C06/c06.pdf) | [eng] | [4 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C06) |
| C07 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C07/c07.pdf) | [eng] | [6 Problems](https://github.com/Alaamimi/Piscine-42/tree/master/Piscine_C/C07) |
| C08 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C08/c08.pdf) | [eng] |[6 Problems]() |
| C09 | [fr](https://github.com/Alaamimi/Piscine-42/blob/master/Piscine_C/C09/c09.pdf) | [eng] |[3 Problems]() |

### :books: C pool toolkit :
> First impression :

<IMG SRC="https://64.media.tumblr.com/ab95eba62064b6ca1622dbcf4fb50a63/tumblr_otjmkidZks1us7drco1_500.jpg" WIDTH="500">

> Get a cup of coffee and come back hahahahaha !

![](https://nationalcoffeeblog.files.wordpress.com/2016/09/art-of-coffee.gif?w=676)

#### :information_source: Quick and dirty guide to C :

:wrench: [Feed this to yourself along with the coffee.](https://courses.cs.washington.edu/courses/cse351/16wi/sections/1/Cheatsheet-c.pdf)

#### :information_source: C Data Types :

> I will only list the important ones!

|Data Type|Bytes|Description|
|-|-|-|
|char|1|Used for text
|bool|1|Used to return true or false, you will need the header <stdbool.h>
|short|2|Half the size of an integer, used to optimize memory
|int|4|Loop Counter, operations on integers
|long|8|Twice the size of an integer, used when overflow is a problem
|float|4|Used for computer graphics
|double|8|Used for computer graphics, more precised than float but takes more memory
|unsigned|.|Apply to char, short, int and long, means than it cannot have negative values

#### :floppy_disk: Ft_putchar using system calls :

> *A minimal c program that will puzzle beginners, write it in a file named ft_putchar.c and create a.out with ```gcc ft_putchar.c && ./a.out```*

> The following program will print a char by making use of [write](http://man7.org/linux/man-pages/man2/write.2.html)

```c
#include <unistd.h>

void	ft_putchar(char c) 			/* void because the function does not return any value, it writes directly, char is the type of the variable c 
						that is given as parameter to the function ft_putchar by the main function. */
{
	write(1, &c, 1);			/* ssize_t write(int fd, const void *buf, size_t count); or in human language: write count letters of buf 
						(which is a pointer) to fd (if fd = 1 this is your terminal, stdout) */
}

int	main(void)
{
	ft_putchar(42);				/* will print a star */

	/* ft_putchar(42 + '0');	 	will only print 4 */
	/* ft_putchar("4");			will not work, you are using " instead of ', so C language think it is a char array. */
	return 0;
}
```
#### :books: Ascii table is prettty useful for this project !

<IMG SRC="https://pascal.developpez.com/cours/cyberzoide/images/ascii.gif" width = "700">
