#!/bin/bash
for i in {1..9}
do
	count=$(./ex08.out $i | wc -w)
	echo "n = $i: $count"
done
