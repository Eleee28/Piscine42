#!/bin/sh
cat /etc/passwd | grep -v '^ *#' | awk 'NR % 2 == 0' | sed 's/:.*$//' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd "," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
