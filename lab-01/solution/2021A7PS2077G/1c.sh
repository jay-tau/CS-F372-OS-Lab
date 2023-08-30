echo 'Enter pattern: '
read s
cat *.txt 2>/dev/null | grep -o $s | wc -l # Pipe stderr to null. Workaround for attempting to read directories
