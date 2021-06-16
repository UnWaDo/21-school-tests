#!/bin/bash
if test $# -le 1 ; then
	echo "Not enough arguments given"
	exit
fi
DIR=$0
DIR=${DIR%/*}

echo -n "" > $DIR/$2/res.output
while read l; do
	"$1" $l >> $DIR/$2/res.output
	echo >> $DIR/$2/res.output
done < $DIR/$2/input

DIF=$(diff $DIR/$2/exp.output $DIR/$2/res.output)
if test $(echo -n "$DIF" | wc -l | tr -d "\ ") -eq "0" ; then
   echo "OK"
else
	echo "$DIF"
fi
