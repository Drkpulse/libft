int	ft_isascii(int arg)
{
		if ((arg >= '!' && arg <= '~') || arg == ' ')
			return (1);
		else
			return (0);
}