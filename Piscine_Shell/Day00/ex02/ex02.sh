# Ex02
# Title : What are attributions anyway?
# TO DO : - Create a file named testDay00 in your submission directory.
#          - Change file timestamp, attributs and size.
#          - Create an archive using tar utility.
# Used files : touch, chmod, tar, fallocate/dd/vim,  stat.

#-------------------------------------------------------------------------------

#!/bin/bash

#-------------------------------------------------------------------------------
touch testDay00 && touch -amt 202006012342 testDay00
#Create and change file timestamp to a specified timeline.
#-------------------------------------------------------------------------------
fallocate -l 40 testDay00 # Or use dd file.
#Change file size.
#-------------------------------------------------------------------------------
chmod 455 testDay00 
#Change file attributs.
#-------------------------------------------------------------------------------
tar -cf testDay00.tar testDay00
tar --extract -f testDay00.tar
#Archive the file / extract it
#-------------------------------------------------------------------------------
stat testDay00
#Display file status.
#-------------------------------------------------------------------------------
