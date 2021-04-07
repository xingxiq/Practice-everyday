#!/bin/bash

TEMP=0
NUM=0
while [ "$NUM" != "#" ]
do
    TEMP=$((TEMP+NUM))
    read NUM
done
echo $TEMP
