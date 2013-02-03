_local="/home/jacky/"
function nsh_usage()
{
echo current server is $_server
echo current remote is $_remote
echo current local is $_local
cat << DONE
################################################################
usage:
nsh [-p] file_name [dest_path]

-p push the binary file to test machine

file_name  the file compiled in the server

dest_path by default,you don't need to given this parameter,
because we have handle some by suffix as follow:
.apk to /system/app
.jar to /system/framework
.so  to /system/lib
no suffix to /system/bin
if there's no destination feed your needs, you can provide the dest_path,
sorry for inconvenience.

if you have any question or suggestion,
please contact : xinle.yang@gmail.com
################################################################
DONE
}
function nsh() {
local _server="192.168.2.14"
local _user="xuezhidong"
local _passwd="nufront"
local _remote="/home/$_user"
local psize=${#@}
if [ $psize -lt 1 ]
then
    nsh_usage
    return 0
fi
local tmp file_name="" push=0 
for tmp in $@
do
    echo tmp=$tmp
    case $tmp in
        -p)
            echo push==1
            push=1
            ;;
        *)
            echo filename
            file_name=$tmp
            ;;
    esac
done

if [ ! -z $file_name ]
then
expect << DONE
spawn scp -r $_user@$_server:$_remote/$file_name $_local
 
# Look for passwod prompt
expect "*password:*"
send "$_passwd\r"
expect eof
DONE

if [[ $push = 1 && -z $3 ]]
then
    echo try to push from local to machine
    case $file_name in
        "framework-res.apk")
            echo framework-res
            adb remount
            adb push $_local/$(basename $file_name) /system/framework
            ;;
        *.apk)
            echo apk
            adb remount
            adb push $_local/$(basename $file_name) /system/app
            ;;
        *.so)
            echo so
            adb remount
            adb push $_local/$(basename $file_name) /system/lib
            ;;
        *.jar)
            echo jar
            adb remount
            adb push $_local/$(basename $file_name) /system/framework
            ;;
        [^.]*)
            echo bin
            adb remount
            adb push $_local/$(basename $file_name) /system/bin
            ;;
            *)
            echo nothing
            nsh_usage
            ;;
    esac
fi

else 
nsh_usage
return 0
fi
}

function nlogs()
{
    adb logcat | tee $_local/system.log
}

function nlogr()
{
    adb logcat -b radio | tee $_local/radio.log
}

function nlogsfilter()
{
    local tmp regex
    for tmp in $@
    do
        regex="$regex|$tmp"
    done
    regex=$(echo $regex|cut -b 2-) 
    adb logcat | grep -i -E "$regex" | tee $_local/filter.log 
}

function nchangesuffix()
{
    local tmp size current expected
    size=${#@}
    if [ $size != 2 ]
    then
        echo function:
        echo change local directory's filename's suffix
        echo usage:
        echo nchangesuffix current expected
        echo sample:
        echo nchangesuffix log txt
        return 0
    fi
    current=$1
    expected=$2
    echo $current $expected
    for tmp in $(ls *.$current)
    do
        echo tmp=$tmp
        mv $tmp $(basename $tmp .$current).$expected
    done
}

function ncd()
{
    step=$1
    echo step=$step
    while [ $step -gt 0 ]
    do
        cd ..
        let step--
    done
}
