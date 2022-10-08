#-----------------------------------------------------------------------------
echo Accept extenion from user and print all file names with that extention
echo As well as print contents of that files
#-----------------------------------------------------------------------------

echo "Enter file extension to search.."
read ext
# Accept extention from user

echo "file with extension:"
ls *.$ext 
# Use regular expression for ls command

echo "content in file are:"
cat *.$ext
# cat command will displays contents of files
