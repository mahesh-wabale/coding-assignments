#-----------------------------------------------------------------------------
echo Print contents of current directory
echo Accept file name from user and print its information
#-----------------------------------------------------------------------------

echo "your current directory is:"
pwd
# This command will print Present Working directory

echo "files present in this directory are:"
ls
# This command will list all files from directory

echo "file name to show its detail"
read file
# Accept file name from user

# Check whether file is directory or not
if [ -d $file ]
then 
	echo "$file is a directory "
else
	echo "$file is not directory it is file"
fi

# Print last modification time from ls command
echo "last modification to this $file is:"
	ls -la $file | cut -f6,7 -d" "

# Print last modification time from ls command
echo "last accessed time to this file:"
	ls -la $file | cut -f8 -d" "

# Print size of file
echo " size of $file is:"
	ls -la $file | cut -f2 -d" "

