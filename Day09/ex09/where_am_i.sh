
if [ "$(ifconfig | grep broadcast | awk '{print $(NF-4)}')" = "" ]
then
	echo "I am lost!"
else
	ifconfig | grep broadcast | awk '{print $(NF-4)}'
fi
