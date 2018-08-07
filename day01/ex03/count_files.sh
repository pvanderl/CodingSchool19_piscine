ls -1 -R | grep "^[^#]" | wc -l

Aussi ossible avec un find :)


Avec find :

#!bin/bash/
find . | wc -l | tr -d ' '
