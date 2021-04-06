#!/bin/bash

VAR1=$PATH
VAR2=$HOME

echo "PATH=$VAR1"
echo "HOME=$VAR2"

echo "----------------------------"

TEMP=$VAR1
VAR1=$VAR2
VAR2=$TEMP

echo "PATH=$VAR1"
echo "HOME=$VAR2"

echo "----------------------------"

unset VAR1 VAR2
echo "PATH=$VAR1"
echo "HOME=$VAR2"
