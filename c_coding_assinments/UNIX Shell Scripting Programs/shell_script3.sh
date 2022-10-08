#-----------------------------------------------------------------------------
echo Print current working directory
echo Accept string from user and search that string from all files
#-----------------------------------------------------------------------------
echo "Your current directory"
pwd
# Print working directory

echo "Enter string.."
read str
# Accept strting that we want to search

flag=0;
for file in *
do
	if [ $flag -eq 0 ]
	then
		if [ -f $file ] # Check whether component is file or not
		then 
			grep $str $file
			# Search string in file by grep command	
			if [ $? -eq 0 ]
			then
				flag=1
				echo $file
			fi
		fi
	fi
done
