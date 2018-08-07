
ifconfig -a link | grep "ether" | cut -c8- | sort | uniq -u

-o

ifconfig -a link | grep "ether" | tr -d "ether\040\011"ifconfig -a link 
