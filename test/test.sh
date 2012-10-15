#!/bin/bash
echo we start here
ROOT_UID=0
HOME=~/
if["$UID" -ne "$ROOT_UID"]
then
    echo pls use root!
else
cd $HOME
cat /dev/null > a.txt
echo finished!
fi
