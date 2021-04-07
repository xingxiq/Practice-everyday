#!/bin/bash 

read -p "请输入第一个字符串:" STR1
read -p "请输入第二个字符串:" STR2

echo "---------------------"

if [ "$STR1" \> "$STR2" ]
then
    echo ">"
elif [ "$STR1" \< "$STR2" ]
then
    echo "<"
else
    echo "="
fi
