ifconfig -a | grep inet | grep -v inet6 | cut -d " " -f2- | cut -d " " -f1 | grep -v 127.0.0.1