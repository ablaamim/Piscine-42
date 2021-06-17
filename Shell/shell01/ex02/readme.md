### [back](https://github.com/alaamimi/Piscine-42/tree/master/Shell/shell01)

---

#### Using your favorite search engine go for:
`Recursively counting files in a Linux directory`
And you will encounter a variety of answers that range from not necessary to
very useful. I found a very nice page with all that we need
[here](https://stackoverflow.com/questions/9157138/recursively-counting-files-in-a-linux-directory).
As we can see (if this page still exist when you search for it, if not we always
have [Wayback Machine](http://archive.org/web/web.php)) the first answer gives
us this:
`find DIR_NAME -type f | wc -l`

**Explanation:**
* Replace *DIR_NAME* with __.__ to execute the command in the current folder.
* We remove the __-type f__ because that limits the search to ONLY files.
* __|__ redirects find command's standard output to wc command's standard input.
* __wc__ (short for word count) counts newlines, words and bytes on its input.
* __-l__ to count just newlines.

**Result:**
`find . | wc -l`

---