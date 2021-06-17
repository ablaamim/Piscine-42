# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex05.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/17 01:09:09 by alaamimi          #+#    #+#              #
#    Updated: 2021/06/17 01:09:26 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#------------------------------------------------------------------------------
# Title : midLS.
# Objective : In a midLS file, place the command line that will list all files 
# and directories in your current directory 
# (except for hidden files or any file that starts by a dot - yes, that includes
# double-dots), separated by a comma, by order of creation date. Make sure 
# directories’ names are followed by a slash character.
# Used Files : ls.
#------------------------------------------------------------------------------

#!/bin/bash 

#------------------------------------------------------------------------------
# This one hell of a an easy exercice.
ls -trhpm
#RTFM.
#------------------------------------------------------------------------------
