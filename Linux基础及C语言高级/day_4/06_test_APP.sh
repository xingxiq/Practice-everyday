#!/bin/bash 

read -p "请输入一个软件名：" APP
read -p "是否进行下载：" CHOSE
case $CHOSE in
    [Yy] | [Yy][Ee][Ss])
        echo "正在下载!"
        ;;
    *)
        echo "已取消下载!"
        ;;
esac
