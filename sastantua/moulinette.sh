#!/bin/bash
RED='\033[0;31m'
GREEN='\033[0;33m'
NC='\033[0m' # No Color
ITERATION_TEST=100
I=0
if [ $# != "2" ]
then
	echo "Vous devez avoir deux arguments\n"
fi
while [ $I -le $ITERATION_TEST ]
do
	OUTPUT1=$(./$1 $I)
	OUTPUT2=$(./$2 $I)
	if [ "$OUTPUT1" != "$OUTPUT2" ]
	then
		printf "${RED} ------\n|FAILURE|\n ------${NC}\n"
		printf "Fail for the size ${I}\n"
		exit
	fi
	let "I = I + 1"
done
printf "${GREEN} -------\n|SUCCESS|\n -------${NC}\n"
