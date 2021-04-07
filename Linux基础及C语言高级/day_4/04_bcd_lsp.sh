#!/bin/bash 

read FILE_NAME

if [ -L $FILE_NAME ]
then
    echo "链接文件"
elif [ -d $FILE_NAME ]
then
    echo "目录文件"
elif [ -f $FILE_NAME ]
then
    echo "普通文件"
fi
