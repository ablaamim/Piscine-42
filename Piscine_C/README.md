### C POOL TOOLKIT:

<IMG SRC="https://64.media.tumblr.com/ab95eba62064b6ca1622dbcf4fb50a63/tumblr_otjmkidZks1us7drco1_500.jpg" WIDTH="400">

### QUICK AND DIRTY GUIDE TO C:

Here is a where to start besides the intranet videos which are far way too important to watch.
-----> https://courses.cs.washington.edu/courses/cse351/16wi/sections/1/Cheatsheet-c.pdf

### C Data Types:

I will only list the important ones!

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

### Ft_putchar using system calls

*A minimal c program that will puzzle beginners, write it in a file named ft_putchar.c and create a.out with ```gcc ft_putchar.c && ./a.out```*

The following program will print a char by making use of [write](http://man7.org/linux/man-pages/man2/write.2.html)

```c
#include <unistd.h>

void	ft_putchar(char c) 			/* void because the function does not return any value, it writes directly, char is the type of the variable c 
						that is given as parameter to the function ft_putchar by the main function. */
{
	write(1, &c, 1);			/* ssize_t write(int fd, const void *buf, size_t count); or in human language: write count letters of buf 
						(which is a pointer) to fd (if fd = 1 this is your terminal, stdout) */
}

int	main(void) {
	ft_putchar(42);				/* will print a star */
	/* ft_putchar(42 + '0');	 	will only print 4 */
	/* ft_putchar("4");			will not work, you are using " instead of ', so C language think it is a char array. */
	return 0;
}
```
### ASCII TABLE IS IMPORTANT FOR THIS PROJECT!

<IMG SRC="https://pascal.developpez.com/cours/cyberzoide/images/ascii.gif" WIDTH="800">
