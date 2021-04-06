#!/bin/bash

echo $0
echo $1
echo $2
echo $3

echo "-----------------"

echo "\$0=$0"
echo "\$1=$1"
echo "\$2=$2"
echo "\$3=$3"


:<<!
$0:是脚本的名字，但是三种方式执行脚本，值是不同的
    ./      ---> ./脚本名
    bash    --->  脚本名
    source  --->  bash
!

