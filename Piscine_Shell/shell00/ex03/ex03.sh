# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex03.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 16:03:42 by alaamimi          #+#    #+#              #
#    Updated: 2021/03/04 16:03:53 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------
# Ex03
# Title : Owi, encore...
# Objective : Create files, folder and a hardlink.
# Used files: mkdir, touch, ln, fallocate, chmod.
# CHECK THE MAN OF EVERY USED FILE.
#------------------------------------------------------------------------------
#!/bin/bash
#------------------------------------------------------------------------------
mkdir test0 test2
touch test1 test3 test4
ln test3 test5 
#Create files, directories and the hardlink needed.
#------------------------------------------------------------------------------
fallocate -l 4 test1
fallocate -l 1 test3
fallocate -l 2 test4
fallocate -l 1 test5
#Change file size.
#-------------------------------------------------------------------------------
ln -s test0 test6
#create a symbolic link.
#-------------------------------------------------------------------------------
touch -amt 202006012047 test0
touch -amt 202006012146 test1
touch -amt 202006012245 test2
touch -amt 202006012343 test3
touch -amt 202006012343 test4
touch -amt 202006012344 test5
touch -hamt 202006012220 test6
#change timestamps of files, directories and the hardlink.
#------------------------------------------------------------------------------
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5
#change all attributs.
#------------------------------------------------------------------------------
tar -cf exo3.tar *
tar --extract -f exo3.tar
#archivate in a tar file.
#------------------------------------------------------------------------------
