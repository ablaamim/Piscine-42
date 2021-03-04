# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex01.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 15:56:20 by alaamimi          #+#    #+#              #
#    Updated: 2021/03/04 16:02:23 by alaamimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Ex00
# Titre : Les vrais savent afficher un Z.
# Objective : Creer un fichier z qui, si l'on fait un cat dessue, affiche "Z" suivi d'un retour a la ligne.
# Language : Le Shell.
# Fichiers : Echo, redirection, cat.

# Echo : Afficher une chaine de char sur la sortie standard.
# Cat : "Concatenate", Lire le contenu d'un ficher textuel.
# redirection ">" : Permet de rediriger le resultat de la commande dans un fichier de votre choix.
#--------------------------------------------------------------------------------------------------

#Script :

#!/bin/bash

echo "Z" > z && cat z

