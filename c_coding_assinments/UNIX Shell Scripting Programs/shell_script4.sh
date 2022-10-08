#-----------------------------------------------------------------------------
echo Print Working directory
echo Accept path from user and print permissions from that path  
#-----------------------------------------------------------------------------

echo "your current directory is:"
pwd
# it will peint present working directory

echo "enter path of Directory:"
read path
# Accept path from user

ls -l $path | grep "^d" | cut -f1,9 -d" "
# list all files from that path and print permissions
