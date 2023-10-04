int ft_toupper(int arg)
{
    if (arg >= 97 && arg <= 122)
        {
            arg = arg - 32;
            return(arg);
        }
    else
        return(arg);
}
