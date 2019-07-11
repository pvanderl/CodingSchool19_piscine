#include <unistd.h>
#include <stdio.h>



void    ft_putchar(char a)
{
    write(1, &a, 1);
}

void    printchartimes(char c, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        write(1, &c, 1);
        i++;
    }
}

void    print_lines(int max_stars, int spaces, int stars)
{
    if (stars<=max_stars)
    {
        printchartimes(' ', spaces);
        ft_putchar('/');
        printchartimes('*', stars);
        ft_putchar('\\');
        ft_putchar('\n');
        print_lines(max_stars, spaces - 1, stars + 2);
    }
}

void    print_base(int n)
{
    
}



int find_max_stars(int level)
{
    int steps;
    int x;
    int i;
    
    steps = 2;
    x = 0;
    i = 1;
    while (i <= level)
    {
        if(!(i % 2))
            steps += 2;
        x += i + 2 + steps;
        i ++ ;
    }
    
    return x;
    
}

/*
** pre:  int pyramid floors
** post: /
** act:  print the sastantua pyramid
*/
void    sastantua(int size)
{
    int level;
    int i;
    int width;
    int max_stars;
    
    if(size < 0)
        return ;
    width = 7;
    i = 0;
    while(++i < size)
        width += ((i+3) + (i/2+1))*2;
    level = 1; //; -------------------
    while (level < size)
    {
        max_stars = find_max_stars(level);
        printf("%d",max_stars);
        
        print_lines(max_stars, width/2 - 1 - (max_stars / 2), max_stars- 2*(level));
        level ++;
    }
    
    
    
    
    
    /*
    
    width = 7;
    max_stars = 7;
    i = 0;
    while(++i < size)
        width += ((i+3) + (i/2+1))*2;
    print_lines(5, width / 2, 1);
    i = 1;
    while (++i <= size)
    {
        width += ((i+3) + (i/2+1))*2;
    }*/
    print_base(size);
}

int main()
{
    sastantua(4);
    return 0;
}
