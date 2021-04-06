#!/bin/bash 

STRING="www.hqyj.com.hqyj.com"
echo ${STRING#*yj}

echo ${STRING##*yj}

echo ${STRING%yj*}

echo ${STRING%%yj*}

:<<EOF
STRING="www.hqyj.com.hqyj.com"
echo ${STRING#*yj}  #.com.hqyj.com   
#获取yj首次出现的字符后的内容（从左向右）

echo ${STRING##*yj} #.com
#获取yj最后一次出现的字符后的内容（从左向右）

echo ${STRING%yj*} #www.hqyj.com.hq
#获取yj首次出现的字符前的内容（从右向左）

echo ${STRING%%yj*} #www.hq
#获取yj最后一次出现的字符前的内容（从右向左）
EOF
