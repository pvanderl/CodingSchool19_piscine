
for ( int a =00; a<=99; a++){
  for(int b = a+1; b<=99;b++){
    ft_putchar(48 + a);
    ft_putchar(' ');
    ft_putchar(48 + b);
    if (!(a == 98 && b == 99))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
  }
}
