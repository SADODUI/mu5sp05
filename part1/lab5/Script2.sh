#!/bin/sh
if [ $1 -gt $2 ]
then
echo "$1 est supérieur à $2"
elif [ $1 -lt $2 ]
then
echo "$1 est inferieur à $2"
else
echo "$1 est égale à $2"
fi
