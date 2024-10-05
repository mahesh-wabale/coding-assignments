#-----------------------------------------------------------------------------
echo Print current working direcctory and print the file number and number of directories
#-----------------------------------------------------------------------------

echo "Current Working directory is:"
pwd
# This command prints present working directory

echo "no.of files present in your current dir are:"
$var  ls | wc -w
# Call ls command and print the contents by counting using wc command

echo "no of directory in your current directory are:"
ls -l | grep "^d"|wc -l
# ls command print all contents and grep searched d in that entries and count that entries

