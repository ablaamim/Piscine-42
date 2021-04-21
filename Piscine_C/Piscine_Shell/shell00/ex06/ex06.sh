#------------------------------------------------------------------------------
# Title : GiT commit.
# Objective : Write a shell script that returns the last 5 hashes in your git 
#deposit.
# Used files : git, cat.
#------------------------------------------------------------------------------

#!/bin/bash

#------------------------------------------------------------------------------
#Git is a very useful tool, check a tutorial.
git log -5 --format='%H' | cat -e
#------------------------------------------------------------------------------
