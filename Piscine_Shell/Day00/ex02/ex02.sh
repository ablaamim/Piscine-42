# Ex02
# Title : What are attributions anyway?
# TO DO : - Create a file named testDay00 in your submission directory.
#          - Change file timestamp, attributs and size.
#          - Create an archive using tar utility.
# Used files : touch, chmod, tar, fallocate, stat.

#-------------------------------------------------------------------------------

#!/bin/bash

touch testDay00 && touch -amt 202006012342 testDay00
fallocate -l 40 testDay00
chmod 455 testDay00 
tar -cf testDay00.tar testDay00
tar --extract -f testDay00.tar
stat testDay00
