cat main_1.c 
if [ $? -eq 0 ] 
then 
mv main_1.c main.c
else 
echo "not found"
fi


