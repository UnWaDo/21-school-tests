#!/bin/sh
clear
GIT_REPO=$(git rev-parse --show-toplevel)
if test $# -eq 0 ; then
    echo "No argument added, checking last exNN"
    f_name=$(find "$GIT_REPO" -type d -name "ex*" -depth 1 | sort -r | head -n 1)
    f_name="${f_name##*/}"
elif test "$1" = "all" ; then
    echo "\nWith 'all' parameter only the Norminette check is performed"
    echo "Note, that tests directory is also checked\n"
    norminette -R CheckForbiddenSourceHeader "$GIT_REPO/"
    exit
else
    f_name=$1
    echo "Looking for task $f_name"
fi

if ! test -d "$GIT_REPO/$f_name" ; then
    echo "No directory $GIT_REPO/$f_name"
else
    if ! test -d "$GIT_REPO/tests/$f_name" ; then
        echo "\nCompiling without extra files...\n"
        gcc -Wall -Wextra -Werror "$GIT_REPO/$f_name/"*.c -o "$GIT_REPO/$f_name.out"
    else
        echo "\nCompiling with tests files...\n"
        gcc -Wall -Wextra -Werror "$GIT_REPO/$f_name/"*.c "$GIT_REPO/tests/$f_name/"*.c -o "$GIT_REPO/$f_name.out"
    fi
    echo "\nPerforming Norminette check...\n"
    norminette -R CheckForbiddenSourceHeader "$GIT_REPO/$f_name"

    echo "\nRunning compiled file...\n"
    "$GIT_REPO/$f_name.out"
fi

