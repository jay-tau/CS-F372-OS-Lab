echo 'N = '
read N
# 1 <= N <= 1000
if test $N -lt 1 -o $N -gt 1000
then
	echo 'Invalid N'
	exit 1
fi
echo 'Base B:'
read B
if test $B -lt 2 -o $B -gt 9
then
	echo 'Invalid B'
	exit 1
fi
echo
#echo $N $B
num=$N
newbase=''
sum=0
while test $num -gt 0
do
	digit=`expr $num % $B`
	newbase=$digit$newbase
	num=`expr $num / $B`
	sum=`expr $sum + $digit`
done
echo 'Base' $B 'expansion=' $newbase
sum=`expr $sum \* $sum`
#echo $sum
rem=`expr $sum % $B`
if test $rem -eq 0
then
	echo $N 'is a Fundoo number'
else
	echo $N 'is not a Fundoo number'
fi
