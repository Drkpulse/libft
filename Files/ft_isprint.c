int	ft_isprint(int arg)
{
		if ((arg >= 32 && arg <= 127))
			return (1);
		else
			return (0);
}