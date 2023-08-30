# Does not work with space
#for f in `ls -dp $s | grep -v /
#do
#	cat $f | head -n 3
#done

echo 'Enter pattern:'
read s
for f in *$s
do
	if test -f $f # Check if file exits
	then
	cat $f | head -n 3
	fi
	echo # New line between files
done
