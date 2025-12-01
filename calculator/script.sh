cat main_1.c
if [ $? -eq 0 ]
then 
mv main_1.c main.c 
else 
echo "not found"
fi 

cat config_1.c
if [ $? -eq 0 ]
then 
mv config_1.c config.c 
else 
echo "not found"
fi 

cat io_1.c
if [ $? -eq 0 ]
then 
mv io_1.c io.c 
else 
echo "not found"
fi 

cat logger_1.c
if [ $? -eq 0 ]
then 
mv logger_1.c logger.c 
else 
echo "not found"
fi 

cat math_ops_1.c
if [ $? -eq 0 ]
then 
mv math_ops_1.c math_ops.c 
else 
echo "not found"
fi 

cat utils_1.c
if [ $? -eq 0 ]
then 
mv utils_1.c utils.c 
else 
echo "not found"
fi 

cat comment.txt >> Makefile 

sed -i 's/label/mylabel/g' main.c

sed -i 's/label/mylabel/g' config.c
sed -i 's/label/mylabel/g' io.c
sed -i 's/label/mylabel/g' logger.c
sed -i 's/label/mylabel/g' math_ops.c
sed -i 's/label/mylabel/g' utils.c





