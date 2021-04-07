#!//bin/bash 

function my_date()
{
    if [ $(($1%4)) -eq 0 -a $(($1%100)) -ne 0 -o $(($1%400)) -eq 0  ]
    then
        TEMP_2_DAY=29
    else
        TEMP_2_DAY=28
    fi
    case $2 in
        [13578]| 10 | 12)
            TEMP_DAY=31
            ;;
        [469]| 11)
            TEMP_DAY=30
            ;;
    esac
}

function my_time()
{
    SEC=$(($6+1))
    if [ $SEC -eq 60 ]
    then
        SEC=0
        MIN=$(($5+1))
        if [ $MIN -eq 60 ]
        then
            MIN=0
            HOUR=$(($4+1))
            if [ $HOUR -eq 24 ]
            then
                HOUR=0
                DAY=$(($3+1))

                if [ $2 -eq 2 ]
                then
                    if [ $DAY -gt $TEMP_2_DAY ]
                    then
                        DAY=1
                        MONTH=$(($2+1))
                        if [ $MONTH -gt 12 ]
                        then
                            MONTH=1
                            YEAR=$(($1+1))
                        fi
                    fi
                elif [ $DAY -gt $TEMP_DAY ]
                then
                    DAY=1
                    MONTH=$(($2+1))
                    if [ $MONTH -gt 12 ]
                    then
                        MONTH=1
                        YEAR=$(($1+1))
                    fi
                fi
            fi
        fi
    fi
}


read YEAR MONTH DAY HOUR MIN SEC
my_date $YEAR $MONTH
while [ 1 ]
do
    printf "%4d-%02d-%02d %02d:%02d:%02d\r" $YEAR $MONTH $DAY $HOUR $MIN $SEC
    sleep 1
    my_time $YEAR $MONTH $DAY $HOUR $MIN $SEC 
done
