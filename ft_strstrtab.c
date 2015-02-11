// chercher mots dans une **tab


char *ft_strstrtab(char **tab, char *word)
{
	int i;

	i = 0;
	while(tab[i] && (ft_strstr(tab[i], word) == 0))
		i++;
	return (tab[i]);
}
