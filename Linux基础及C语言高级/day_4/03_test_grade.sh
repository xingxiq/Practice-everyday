#!/bin/bash 

read -p "请输入一个成绩[0~100]>> " GRADE
if [ $GRADE -ge 0 -a $GRADE -le 100 ]
then
    if [ $GRADE -ge 90 -a $GRADE -le 100 ]
    then
        echo "A"
    elif [ $GRADE -ge 80 ]
    then
        echo "B"
    elif [ $GRADE -ge 70 ]
    then
        echo "C"
    elif [ $GRADE -ge 60 ]
    then
        echo "D"
    else
        echo "E"
    fi
else
    echo "您输入有误!"
fi
