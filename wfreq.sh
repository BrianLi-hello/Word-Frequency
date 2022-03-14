#!/bin/bash

for work in TheMissingWill TheOdyssey TheScarletLetter
do
    ./wfreq <"${work}.txt" | diff -s "${work}.out" -
done