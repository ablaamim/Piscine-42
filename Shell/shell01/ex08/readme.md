### file to deliver: add_chelou.sh :

1. write a command line
	the result of this, display in gtaio luSnemf base
		FT_NBR1 = ’\"?!
		FT_NBR2 = mrdoc

1.1 basically we need to add FT_NBR1 + FT_NBR2 in base 5
	the result needs to be presented in base 13

but what are bases?

2. we have two variables: FT_NBR1 and FT_NBR2
	FT_NBR1 -> base '\"?!	-> base 5
					01234
	FT_NBR2 -> base mrdoc	-> base 5
					01234

2.1 we have the answer based on gtaio luSnemf
		gtaio luSnemf = base 13

1st create add_chelou.sh file
2nd shell header
	#!/bin/sh
3rd change file assignment
	chmod + x add_chelou.sh
4th export the FT_NBR1 and FT_NBR2 variables
	export <variable name>=<variable value>
	Example 1: 
		export FT_NBR1=\'?"\"'\
		export FT_NBR1=\\\'\?\"\\\"\'\\
				(in the pdf example there is FT_NBR1=\'?"\"'\, but you must put \ before each character)
		export FT_NBR2=rcrdmddd
	
	Example 2:
		export FT_NBR1=\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
		export FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
		export FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
			   FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

4th write command line to file
	echo $FT_NBR1 + $FT_NBR2 | tr \'\\\\\"\?\! 01234 | tr mrdoc 01234 | xargs echo "obase=13; ibase=5;" | bc | tr 0123456789ABC "gtaio luSnemf"
		echo + bc -> calculadora
		tr <palavra escrita> <base 5>
		xargs echo -> get the imput (base) from base 5 to output (obase) to base 13
		tr <base 13> <encrypted word> -> translate base to encrypted word

Write a command line that takes the numbers contained in the 
FT_NBR1 variables
of base '\"?! and FT_NBR2 of base mrdoc, and which also displays the sum of the two in
gtaio luSnemf base (yes, space counts)

FT_NBR1=\'?"\"'\
FT_NBR2=rcrdmddd

name variable FT_NBR1 
	export <variable name>=<variable value>
	export FT_NBR1=’\"?!
	export FT_NBR2=mrdoc

echo $FT_NBR1 + $FT_NBR2 | tr ""'\\\?!" "0134" | tr '"' '2' | tr "mrdoc" "01234" | xargs echo "obase=13; ibase=5;" | bc | tr "0123456789ABC" "gtaio luSnenf"

echo $FT_NBR1 + $FT_NBR2  | tr "'" "0" | sed 's/\/1/g' | sed "s/"/2/g" | sed 's/?/3/g' | sed 's/!/4/g' | tr "mrdoc" "01234" | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'

	ASCII = base 5 = 01234
		table the computer uses to transform binary codes

base gtaio luSnemf
	13 = 0123456789ABC

FT_NBR1=\'?"\"'\
		10321201
FT_NBR2=rcrdmddd
		14130333
(Use a command to convert this. dani, use tr or maybe sed with hdal-mol said)

somar FT_NBR1 + FT_NBR2 na base 5
		(bc)
the result of this, convert to base 13
and then I have the result in number

take gtaio luSnemf base and turn into readable text.

---
