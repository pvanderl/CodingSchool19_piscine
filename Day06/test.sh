cd ex00/
sh  libft_creator.sh
if [ "$(find ./libft.a)" = "" ]
then
	echo "Pas de librairie cree"
else
	echo "ex00 ok"
fi
cd ..
gcc -o exo1 ex01/ft_print_program_name.c
if [ "$(./exo1 "salut" | wc -l)" = 1 ]
then
	echo "exo1 OK"
else
	echo "exo1 faux"
fi
