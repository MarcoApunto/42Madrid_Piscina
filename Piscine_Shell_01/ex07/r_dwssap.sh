Don,t work well.

cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | rev | cut -d ':' -f 7 | sort -r | awk -v l1=$FT_LINE1 -v l2=$FT_LINE2 'NR==l1,NR==l2' | tr "\n" "," | sed 's/,$/./' | sed 's/, */, /g'
