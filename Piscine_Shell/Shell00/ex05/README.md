### [back](https://github.com/Alaamimi/1337-piscine/tree/master/Piscine_Shell/Day00/ex05)

------------------------------------------
#### If we RTFM!(`man ls`) we will see that:

-t:	sort by modification time, newest first
-r:	--reverse
	reverse order while sorting
-h:	--human-readable
	with -l and -s, print sizes like 1K 234M 2G etc.
-p:	--indicator-style=slash
	append / indicator to directories
-m:	fill width with a comma separated list of entries


> Here we encounter a problem, because at least with the command `ls` we can't
truly sort the results by creation date, so we need to create a script or use
other methods to ensure we display the results in the desired manner. This is
given because most UNIXes do not have a concept of file creation time, so we
can't make `ls` print it because the information is not recorded.

For those looking for more go to my [sources](https://unix.stackexchange.com/questions/91197/how-to-find-creation-date-of-file)
here.

------------------------------------------


