# Ex02
# Title : What are attributions anyway?
# TO DO : - Create a file named testShell00 in your submission directory.
#          - Change file timestamp, attributs and size.
#          - Create an archive using tar utility.
# Used files : touch, chmod, tar, fallocate/dd/vim,  stat.
#
#-------------------------------------------------------------------------------

#!/bin/bash

#-------------------------------------------------------------------------------
touch testShell00 && touch -amt 202006012342 tesShell00
#Create and change file timestamp to a specified timeline.
#-------------------------------------------------------------------------------
fallocate -l 40 testShell00 # Or use dd file.
#Change file size, you can use dd file if you want, check man dd.
#-------------------------------------------------------------------------------
chmod 455 testShell00 
#Change file attributs.
#-------------------------------------------------------------------------------
tar -cf testShell00.tar testShell0000
tar --extract -f testShell00.tar
#Archive the file && extract it
#-------------------------------------------------------------------------------
stat testShell00
#Display file status.
#-------------------------------------------------------------------------------
