#-----------------------------------------------------------------------------
echo Enter name of directory to create and create new file in that directory
#-----------------------------------------------------------------------------

echo "Enter name to create directory :"
read name
# Accept name from user by using read command

mkdir $name
# Create new directory

cd $name 
# Set ourcurrent directory to that directory

echo "Enter name of file to create :"
read name1

echo "Enter contents of the file :"
cat > $name1
# Open the file for writting

