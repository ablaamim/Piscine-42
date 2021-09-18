### git_ignore.sh :

In this exercice, you will write a short shell script that lists all the existing files ignored by your GiT repository. Example:

	.DS_Store
	mywork.c

Turn-in directory : ex05/

Files to turn in : git_ignore.sh

---

#### NOTES :

The command that needs to be executed:

$> git ls-files -o -i --exclude-standard

Here is what the manual page says about this:

-i : Show only ignored files in the output. When showing files in the index, 
print only those matched by an exclude pattern. When showing "other" files, show only 
those matched by an exclude pattern. Standard ignore rules are not automatically activated, 
therefore at least one of the --exclude* options is required.

-o : Show other (i.e. untracked) files in the output.

---
