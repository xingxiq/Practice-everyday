#!/bin/bash 

read -t 10 -p "请在10s内输入5个元素>> " -a VAR
echo ${VAR[*]}
