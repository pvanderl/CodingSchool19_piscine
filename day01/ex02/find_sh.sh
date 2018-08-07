find . -type f -iname "*.sh" | sed 's/\.sh$//1' | sed 's/.*[/]//'

-o

find . -type f -name "*.sh" -exec basename {} .sh \;
