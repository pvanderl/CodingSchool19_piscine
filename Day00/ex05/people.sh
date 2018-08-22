ldapsearch -LLL -Q "(uid=z*)" cn | grep "^cn:" | cut -c5- | sort -r
