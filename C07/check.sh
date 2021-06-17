#!/bin/sh
clear
GIT_REPO=$(git rev-parse --show-toplevel)
check_with_shell=0
check_with_shell_checker=0
if test $# -eq 0 ; then
    echo "No argument added, checking last exNN"
    f_name=$(find "$GIT_REPO" -type d -name "ex*" -depth 1 | sort -r | head -n 1)
    f_name="${f_name##*/}"
elif test "$1" = "all" ; then
    echo "\nWith 'all' parameter only the Norminette check is performed"
    echo "Note, that tests directory are no longer checked\n"
    norminette -R CheckForbiddenSourceHeader "$GIT_REPO/ex*/*"
    exit
else
    f_name=$1
    echo "Looking for task $f_name"
fi

if ! test -d "$GIT_REPO/$f_name" ; then
    echo "No directory $GIT_REPO/$f_name"
else
	c_files_count=$(ls -1 "$GIT_REPO/tests/$f_name/" | grep ".c" | wc -l | tr -d "\ ") 
	sh_files_count=$(ls -1 "$GIT_REPO/tests/$f_name/" | grep ".sh" | wc -l | tr -d "\ ") 
	output_files_count=$(ls -1 "$GIT_REPO/tests/$f_name/" | grep ".output" | wc -l | tr -d "\ ") 
    if ! test -d "$GIT_REPO/tests/$f_name" ; then
        echo "\nCompiling without extra files...\n"
        gcc -Wall -Wextra -Werror "$GIT_REPO/$f_name/"*.c -o "$GIT_REPO/$f_name.out"
	elif test $c_files_count -eq "0" ; then
		echo "\nCompiling without extra files..."
        gcc -Wall -Wextra -Werror "$GIT_REPO/$f_name/"*.c -o "$GIT_REPO/$f_name.out"
    else
        echo "\nCompiling with tests files...\n"
        gcc -Wall -Wextra -Werror "$GIT_REPO/$f_name/"*.c "$GIT_REPO/tests/$f_name/"*.c -o "$GIT_REPO/$f_name.out"
    fi
    echo "\nPerforming Norminette check...\n"
    norminette -R CheckForbiddenSourceHeader "$GIT_REPO/$f_name"

	if test $sh_files_count -ne "0" ; then
		echo "Will perform checks using shell script\n"
		check_with_shell=1
	elif test $output_files_count -ne "0" ; then
		echo "Will perform checks using shell checker\n"
		check_with_shell_checker=1
	fi

	if test $check_with_shell -eq 1 ; then
		echo "\nRunning local shell checker...\n"
		bash "$GIT_REPO/tests/$f_name/$f_name.sh" "$GIT_REPO/$f_name.out"
	elif test $check_with_shell_checker -eq 1 ; then
		echo "\nRunning global shell checker...\n"
		bash "$GIT_REPO/tests/shell_checker.sh" "$GIT_REPO/$f_name.out" "$f_name"
	else
    	echo "\nRunning compiled file...\n"
    	"$GIT_REPO/$f_name.out"
	fi
fi

