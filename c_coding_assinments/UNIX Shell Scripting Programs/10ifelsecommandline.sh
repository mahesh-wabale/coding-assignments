echo Demo of if else statement
if cp $1 $2
then
	echo File $1 copied into $2 successfully.
else
	echo Unable to copy file
fi
