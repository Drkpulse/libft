unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rest_d;
	unsigned int	rest_s;

	i = ft_strlen(dest);
	j = 0;
	rest_d = ft_strlen(dest);
	rest_s = ft_strlen(src);
	if (size < 1)
		return (rest_s + size);
	while (src[j] && i < size - 1)
	{
		dest [i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < rest_d)
		return (rest_s + size);
	else
		return (rest_d + rest_s);
}