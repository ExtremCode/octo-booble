res1=$(grep '{' $1 | tr -cd '{' wc -m)
res1=$(grep '}' $1 | tr -cd '}' wc -m)
echo "{:$res1"
echo "}:$res2"

if [[ $res1 -eq $res2 ]]
then
	echo "Ok"
else
	echo "Not good file"
fi
