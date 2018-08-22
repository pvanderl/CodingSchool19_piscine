touch -A -000001 bomb.txt
ls -lT | grep "bomb.txt" | grep -o "... .. ..:..:.. ...."
date -r bomb.txt
