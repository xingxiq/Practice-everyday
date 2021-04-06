#!/bin/bash 

ARR=(11 22 "aaa" "bbb")
ARR2=([0]=11 [1]=22 [2]="aaa" [10]="bbb")
echo ${ARR[*]}
echo ${ARR2[@]}

ARR[1]=33
echo ${ARR[*]}

echo ${ARR2[3]}
echo ${ARR2[10]}

echo ${ARR[*]}
echo ${ARR[@]}
echo ${#ARR[*]}
echo ${#ARR[@]}

ARR=(11 22 "aaa" "bbb")
ARR=("aaa" "bbb" ${ARR[*]})
ARR=(${ARR[@]} "ccc" "ddd")
echo ${ARR[*]}
