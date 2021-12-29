#!/bin/sh
for i in 'seq 1 9' ; do # 10 eterations
wget http://xkcd.com/$i -O $i.html 

s='grep hotlinking $i.html |grep -o "https.*jpg" |grep -o "https.*jpg" '

wget $s -O $i.jpg #telecharger
eog $i.jpg # afficher

done
