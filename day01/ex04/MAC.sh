
ifconfig -a link | grep "ether" | cut -c8- | sort | uniq -u
