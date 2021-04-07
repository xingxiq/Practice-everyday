#!/bin/bash 

for((VAR=0;VAR<10;VAR++))
do
    echo $VAR
done
echo "----------------------"
VAR1=100
VAR2=200
VAR3=$((VAR1+VAR2))
echo $VAR3
VAR3=$(($VAR1+$VAR2))
echo $VAR3

VAR3=$((VAR1 + VAR2))
echo $VAR3
VAR3=$(($VAR1 + $VAR2))
echo $VAR3

((VAR3++))
echo $VAR3
(($VAR3++))
echo $VAR3

VAR4=$((VAR1+VAR2,VAR2-VAR1))
echo $VAR4
