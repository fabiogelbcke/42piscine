ldapsearch -Q objectClass=apple-user | grep -i uid: | cut -d : -f2 | sort -r -f
