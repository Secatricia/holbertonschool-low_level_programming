Exercices malloc*

les erreurs
char	*str_concat(char *s1, char *s2)
{
	char	*str;
	int		i = 0, j = 0;

	if (s1 == NULL && s2 != NULL)
		return (_strdup(s2));
	if (s2 == NULL && s1 != NULL)
		return (_strdup(s1));
	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
	}
	str[i + j] = '\0';
	return (str);
}

pour le 5
char *argstostr(int ac, char **av)
{
	int i = 0;
	char *str = NULL;
	int taille;

	if (ac == '0' || av == NULL)
		return (NULL);

	while (i < ac)
	{
		taille += _strlen(av[i]) + 1;
		i++;
	}
	str = malloc(sizeof(char) * (taille + 1));

	if (str == NULL)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		str = _strcat(str, av[i]);
		i++;
	}
	str = '\0';
	free(str);
	return (str);
}
