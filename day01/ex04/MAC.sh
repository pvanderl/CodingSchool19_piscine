
ifconfig -a link | grep "ether" | cut -c8-

-o

ifconfig -a link | grep "ether" | tr -d "ether\040\011"
