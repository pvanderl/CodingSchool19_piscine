void ft_putnbr(int nb)
{
    int nombre;
    nombre = nb;
    if(nombre < 0)
    {
        ft_putchar('-');
        nombre=-nombre;
    }
    if(nombre > 10)
    {
        ft_putnbr(nombre / 10);
    }
    ft_putchar('0' + (nombre % 10));
}
