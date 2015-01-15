int ft_ifmajmin(char *str)
{
	if(str[0] >= 65 && str[0] <= 90)
		return(1);
	else if(str[0] >= 97 && str[0] <= 122)
		return (0);
	return(2);
}
