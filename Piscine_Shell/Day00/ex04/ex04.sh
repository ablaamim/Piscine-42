#------------------------------------------------------------------------------
# Title : Kerberos.
# Objective : Create a Kerberos ticket, and list it in a file.
# Used filed : klist, ls, cat.
#
#------------------------------------------------------------------------------

#!/bin/bash 

# Kerberos authentification.
klist > klist.txt
ls -l
cat klist.txt
-------------------------------------------------------------------------------
