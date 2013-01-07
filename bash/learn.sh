#!/bin/bash

###################
# hi, first look at the line up, we are running shell by sh(which is dash released by openBSD)
# the reason is to find the difference between sh & bash
# you can change it to bash as pleasure.
# and also remember there are differences between posix and functional ones, 
# if you wanna be compatible with openBSD,Solaris etc.

# difference between ./learn.sh and bash learn.sh
# run ./learn.sh will cause the kernel read sha-bang line for invoking program
# run bash learn.sh will execute directly by bash

#in ubuntu bash is the login shell, dash is the default sh command for quick invoking speed.
echo $SHELL #it's /bin/bash
###################



#print something in the shell
echo "we are start learning shell script"
printf "%s pay attention!\n" emily

#execute something for result
pid=$(pgrep evince|head -n 1)
_env=$(cat /proc/$pid/environ|tr '\0' '\n')
echo $_env

#get length of var
_info="wojiaoyangxinle"
echo ${#_info}

#difference between var=value var = value
name="jacky"
if [ $name = "jacky" ] #should keep whitespace between [ and $name
then
    echo "found jacky"
fi

#check for super user
echo $UID

#this works for bash, for other shell interpreters don't think $UID as special var.
#i.e. bash learn.sh
if [ $UID -ne 0 ]
then
    #> means truncate the file and then writing.
    #>> means append strings to file
    echo "not super user" >> error.log
else
    echo "current is super user"
fi

#another way to check super user
if [ $(id -u) -eq "0" ]
then
    echo "2 current is super user"
else
    echo "2 not super user" >> error.log
fi

#calculations
#tips: `` equals $()
result=`expr 3+4` #this will show 3+4
result=`expr 3 + 4` #this will show 7
echo $result
result=$(expr 3 + 5)
echo $result
#use bc instead of expr
no3=15
result=`echo "$no3 + 5"|bc`
echo $result
#set precision of decimal, it supported by bc
result=`echo "scale=2;13/8"|bc`
echo $result
#set notation to binary
result=`echo "obase=2;10"|bc`
echo $result

#std input/output & redirect
#there is no file named "+", 2> means redirect errors to error.log
echo $(ls + 2> error.log)

#this won't work,
#what a damn book tells is damn thing.
#echo $(ls + 2>&1 out.log)

#this done the job
echo $(ls + > out.log 2>&1)

#this only works for bash
#i.e. bash ./learn.sh
$(ls + &>all.log)

#redirect to /dev/null for non of use.
echo $(ls + 2> /dev/null)

#use tee to redirect stdin and stdout
echo $(cat *.log | tee error2 | cat -n)

#- stands for stdin
echo $(cat *.log | tee -)

#cat snippet before EOF appears to a file
cat <<EOF > test.log
show test log
EOF

#custom file descriptor
#input
exec 3< error.log 
cat <&3
#output
exec 4> error3.log
echo "damn cook" >&4
cat error3.log
#append
exec 5>> error3.log
echo "fucking cook" >&5
cat error3.log
#arrays & associative arrays
array_1=(1 2 4 5 7)
echo ${array_1[3]}
index=4
echo ${array_1[$index]}
echo ${array_1[*]}
echo ${array_1[@]}
echo ${#array_1[*]}
echo "-------------------------------------"
array_2[0]="jacky"
array_2[1]="yang"
array_2[2]="emily"
array_2[3]="wan"
echo ${array_2[3]}
index=0
echo ${array_2[$index]}
echo ${array_2[*]}
echo ${array_2[@]}
echo ${#array_2[*]}

# bash 4.0 add associative arrays like awk etc.
declare -A array_3
array_3=([a]="apple",[b]="banana")
#or another way
declare -A array_4
array_4[a]="ass"
array_4[b]="bitch"
#list the index
echo ${!array_4[*]}
echo ${!array_4[@]}

#use alias
alias install='sudo apt-get install'
#use \ to escape alias
#\install

##########################################
#use tput to control the terminal
#use stty to control stream of in and out
##########################################

#show the date
echo $(date)

#debug the script
#bash -x ./learn.sh
#or use another way
set -x #means enable debug
set +x #means disable debug
#or use sha-bang to assign the argument
##!/bin/bash -xv

#show args
echo "args:" $@

#functions
function test()
{
    cmd_result=$(ls|cat -n)
    echo $cmd_result
}

#spawn another process
pwd
(cd /etc;pwd)
pwd

#use internal cmd read to interact
read -s -p "Enter passwd:" _passwd
echo $_passwd

#use $IFS to seperate string
#and also first use the for loop
echo $IFS
old_ifs=$IFS
IFS=":"
data="name:sex:location:id:age"
for item in $data
do
    echo $item
    sleep 1 #use sleep to wait 1 second
done
#let IFS=old_ifs #this will cause 0 eaten by bash
                ##let only used for arithmatic operation
#echo "IFS=old_ifs  "$?
IFS=0
######################################
ti=0
echo "ti="$ti

for((i=0;i<5;i++))
{
    echo $i
}
for alph in {a..f}
do
    echo $alph
done
for num in {0..12}
do
    echo $num
done
#use while loop
timeout=0
#while [ $timeout -lt 7 ]
#do
    #echo $timeout
    #let timeout++
#done

######################################
