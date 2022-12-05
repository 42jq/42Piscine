cat /etc/passwd | grep -v "^#" | awk 'BEGIN { FS = ":" } ; {print $1}'| awk '{for ( i =NF; i>0; --i) print $i }' | rev | sort -r | sed -l7
