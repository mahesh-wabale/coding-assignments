echo Enter file name to test
read name
if [ -f $name ]
then
	echo It is regular file
else
	echo It is not regular file
fi
