### Task :

Create a shell script that displays the ids of the last 5 commits of your git repository.

bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$

To test your script, we will use our own environment.

Turn-in directory : ex04/

Files to turn in : git_commit.sh

---

### NOTES

1) Looking through the manual pages of git-log I found that the section "PRETTY FORMATS" says: "The format:<string> format allows you to specify which information you want to show.". So, here is the command I constructed: 

	$  git log -5 --format=%H

2) I needed to put this command in an executable Shell script. I used the command/text editor 'vim' to create my script: 

	$  vim git_commit.sh

3) Because it needs to be executed later on, I used 'chmod' to make the file executable:

	$  chmod 755 git_commit.sh

---
