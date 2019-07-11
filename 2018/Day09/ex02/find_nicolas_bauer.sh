grep -i -r "nicolas\tbauer" . | awk '{print $(NF-1)}' | grep -v "192.168.*"
