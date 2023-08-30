if test $1 -le 0
then
	echo 'Invalid argument'
fi
echo 'r = '
read r
#echo $r
if test $r -le 0
then
	echo 'Invalid value for r'
fi
area=`expr 2 \* 3 \* $r \* $r + 2 \* 3 \* $r \* $1`
echo 'Area:' $area
vol=`expr 3 \* $r \* $r \* $1`
echo 'Volume:' $vol
