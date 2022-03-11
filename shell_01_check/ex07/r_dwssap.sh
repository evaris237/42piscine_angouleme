#!/bin/sh
cat /etc/passwd |grep -v "#" | awk 'NR%2==0'|cut -d : -f 1|rev| sort -r
