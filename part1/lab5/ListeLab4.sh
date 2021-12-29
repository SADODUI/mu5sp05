#!/bin/sh

ch=/home/kouceila/mu5sp05-part1/lab4
cd $ch
echo "Les répertoires du lab4 sont : "
for i in ./*; do
if [ -d $i ]

then
echo "$i"
fi
done
