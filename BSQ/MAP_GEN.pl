# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAP_GEN.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root </var/mail/root>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 21:00:38 by root              #+#    #+#              #
#    Updated: 2021/10/10 21:00:41 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;print "$y.ox\n";
for (my $i = 0; $i < $y; $i++)
{
	for (my $j = 0; $j < $x; $j++)
	{
		if (int(rand($y) * 2) < $density)
		{
			print "o";
		}
		else
		{
			print ".";
		}
	}
	print "\n";
}
