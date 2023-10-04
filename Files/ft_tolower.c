int ft_tolower(int arg)
{
    if (arg >= 65 && arg <= 90)
        {
            arg = arg + 32;
            return(arg);
        }
    else
        return(arg);
}
