#!/bin/bash
for i in {1..10}
do
      ./code < "$i.in" > "$i.out"
done
