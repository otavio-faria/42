int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
		{
			if ((str[i] < 'A') || (str[i] > 'Z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
