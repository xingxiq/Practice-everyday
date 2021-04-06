#!/bin/bash 

function my_fun()
{
    local LO_VAR1=1357
    echo $LO_VAR1 
    LO_VAR2=2468
    echo $LO_VAR2 
}
my_fun
echo $LO_VAR1 
echo $LO_VAR2 
