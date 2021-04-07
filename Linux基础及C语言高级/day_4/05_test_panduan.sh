#!/bin/bash 

read -p "请输入文件名>> " FILE_NAME

if [ -f $FILE_NAME ]
then
    if [ -w $FILE_NAME ]
    then
        echo "hello world" >> $FILE_NAME
    else
        echo "该文件不具有写权限!"
    fi
else
    echo "该文件不存在或不是普通文件!"
fi
