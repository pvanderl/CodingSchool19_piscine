find . -type f -iname "*.sh" | sed 's/\.sh$//1' | sed 's/.*[/]//'
