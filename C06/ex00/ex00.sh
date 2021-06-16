#!/bin/bash
if test $# -eq 0 ; then
	echo "No file given"
	exit
fi
DIR=$(pwd)
echo -n "$1" > $DIR/exp.output
"$1" > $DIR/res.output
echo "Program output: `$1`"
DIF=$(diff $DIR/exp.output $DIR/res.output)
echo $DIF
if test $($DIF | wc -l | tr -d "\ ") -eq 0 ; then
   echo "OK"
else
	echo "$DIF"
fi
