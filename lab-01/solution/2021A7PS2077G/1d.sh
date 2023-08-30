if test `ls pattern 2>&1 | grep No* | wc -l` -gt 0
then
	echo 'No File / Directory found'
else
	echo 'false'
fi
