## :information_source: Shell00

## :books: Table of contents

| ## | Exercises | Directory | Files |
|--- |--- |--- |--- |
| 01 | Z |	ex01/	| z |
| 02 | testShell00 | ex02/ | testShell00.tar |
| 03 | Owi, encore... | ex03/ | exo3.tar |
| 04 | Connecte | ex04/	| klist.txt |
| 05 | midLS | ex05/ | midLS |
| 06 | GiT Commit | ex06/ | git_commit.sh |
| 07 | GiT Ignore | ex07/ | git_ignore.sh |
| 08 | diff | ex08/ | b | 
| 09 | clean | ex09/ | clean |
| 10 | Illusions, not tricks, Michael... | ex10/ | ft_magic |

## :information_source: Notes :

---

rmdir => Remove Directory.

---

chmod : Change Mode

| Utilisateur | groupe | all users |
|--- |--- |--- |
|rwx | rwx | rwx |

u => User
g => Group
o => Others

chmod o+r => add reading rights 
chmod a-x => remove all executing rights for everyone (all)

rwx => 421 => 7
rwx rw- r-- => 427 420 400 => 764

---

Shell variable :

$var=value
echo $var => value

If you create an under shell with sh, it doesn't know the variable => You need to export it to the environment.

---

wc => Count the number of lines / words & bytes of file.

---
Widlcard :

* => matching char  substitution
t??? -> replace with any char

Home :

~ => Home directory

---

To escape wildcard characterster => echo '*' or echo \*

---

Use more instead of cat => pagination , space allows to jump to next page
/ => to do search

---

head => Only display the beginning of the file
head -n 2 => Only displays the first two lines
head -c 9 => Only the first 9 chars
return to line is a char
tail is the reverse of head

---

cat -e => Shows all the returned values untill new line.

---

grep -v => Reversed search => all line that doesn't contain a certain char / word
grep -i => Case insensitive.

---

Streams :

Every program has stdin, stdout (standard output) and stderr, {0, 1, 2}.

Pipe operator '|' => Branchs stdout of previous program to stdin of other program

---

Ls :

ls > res.txt => Output of ls inside this file

ls hello 2> error.log will write the error message inside error.log (usage of the 2)

ls can take several args and you can redirect to both stdin and stderr
e.g. file hello is not existing in our directory and we want to search for a specific test file with the grep after having listed all the "test" files

ls hello test* 2> error.log | grep test.txt => this is writing any error in error.log file and searching in normal stdin for test files.

---

Grep :

grep Joker < batman.txt => We modify the standard entry for the batman.txt file
it basically does cat batman.txt | grep Joker

---

Echo :

echo hello > res.txt 
echo yeay > res.txt => it will replace the content
but with `>>` it will append it at the end

<< you append text until the matching keyword after the double arrows
e.g.
cat << END
> any word 
> after 
> will be printed
> END

To have all output in a file:
`ls hello *.txt > resultat.txt 2>&1` (needs to be at the end)

Command substitution
https://unix.stackexchange.com/questions/27428/what-does-backquote-backtick-mean-in-commands

---

Advanced shell functions / utilitaries

1) find = looking for files
find . -name hello.txt => find any file in the current directory where the name is hello.txt
find . -type d => find any directory in the current directory
find . -maxdepth 1 => depth in which you want to look (starting with 0 but 0 is just itself)
find FOLDER_TO_FIND_IN -name NAME_OF_FILE can be combined with -exec option and then any command you want to execute for each single file found
e.g. find . -name .gitignore 

---

WC :

2) wc = wordcount
-l => line
-w => words
-c => amount of characters

---

BC :

3) bc = calculation function
to go out quit

---

PATCH :

4) patch
patch takes a patch file containing a difference listing produced by the diff program and applies those differences to one or more original files, producing patched versions.

---

SED :

5) sed
Normally sed is invoked like this:

sed SCRIPT INPUTFILE...
For example, to replace all occurrences of ‘hello’ to ‘world’ in the file input.txt:

sed 's/hello/world/' input.txt > output.txt
If you do not specify INPUTFILE, or if INPUTFILE is -, sed filters the contents of the standard input. The following commands are equivalent:

sed 's/hello/world/' input.txt > output.txt
sed 's/hello/world/' < input.txt > output.txt
cat input.txt | sed 's/hello/world/' - > output.txt
sed writes output to standard output. Use -i to edit files in-place instead of printing to standard output. See also the W and s///w commands for writing output to other files. The following command modifies file.txt and does not produce any output:

sed -i 's/hello/world/' file.txt
By default sed prints all processed input (except input that has been modified/deleted by commands such as d). Use -n to suppress output, and the p command to print specific lines. The following command prints only line 45 of the input file:

sed -n '45p' file.txt
sed treats multiple input files as one long stream. The following example prints the first line of the first file (one.txt) and the last line of the last file (three.txt). Use -s to reverse this behavior.

sed -n  '1p ; $p' one.txt two.txt three.txt
Without -e or -f options, sed uses the first non-option parameter as the script, and the following non-option parameters as input files. If -e or -f options are used to specify a script, all non-option parameters are taken as input files. Options -e and -f can be combined, and can appear multiple times (in which case the final effective script will be concatenation of all the individual scripts).

If you want to print from line to line:
sed -n '1,7p' file.txt => will output from line 1 to line 7

The following examples are equivalent:

sed 's/hello/world/' input.txt > output.txt

sed -e 's/hello/world/' input.txt > output.txt
sed --expression='s/hello/world/' input.txt > output.txt

echo 's/hello/world/' > myscript.sed
sed -f myscript.sed input.txt > output.txt
sed --file=myscript.sed input.txt > output.txt

---

6) grep
grep used with -v (--invert-match) is going to select the lines that ARE NOT matching with a specific pattern => -v

---

interrupt
when shell is expecting input => ctrl + d to finish but need to be on a new line
ctrl + c to interrupt
ctrl + \ => quit as well

---

git :


git log --pretty=format:"%H" => will return the list of commit hashes
you can pick your own format for your commits

git branch => creates a new branch but doesn't go in there

git checkout -b => creates a new branch and goes in there

---

magic files
use to determine the type of files (and can be used with the file shell command then)


42 file =>
42 string 42 42 file

01234567891234567891234567891234567891234542

---
