
#### if we read the manual we will see that :

* `find` is the command that can address all the requirements.
* so next we can `man find` and we can with the next solution:

```
$ find . -name "*~" -print -delete -o -name "*#" -print -delete -o -name "#*" -print -delete

-type f
		type files to filter from current folder and subfolders.

-name [pattern]
		Base of file name (the path with the leading directories removed)
		matches shell pattern.
-print [format]
-delete:
		Delete  files;  true  if  removal succeeded.  If the removal failed,
		an error message is issued.  If -delete fails, find's exit status will
		be nonzero (when it eventually exits).  Use of -delete automatically
		turns on the `-depth' option.
-o:
		Ensures that the right hand side is evaluated only for those directories
		which didn't get deleted before.
```

---
