#!/bin/bash 

read -p "请输入要下载的软件名>> " VAR
sudo apt-get install $VAR
