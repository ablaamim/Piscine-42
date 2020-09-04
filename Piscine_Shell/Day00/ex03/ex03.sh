------------------------------------------------------------------------------------------------
# Ex03
# Title : Owi, encore...
# Objective : Create files, folder and a hardlink.
# Used files:

------------------------------------------------------------------------------------------------
#!/bin/bash

mkdir test0 test2 && touch test1 test3 test4 test5
touch -t 202006012047 test0
touch -t 202006012146 test1
touch -t 202006012245 test2
touch -t 202006012343 test3
touch -t 202006012343 test4
touch -t 202006012344 test5
