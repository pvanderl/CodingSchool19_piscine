#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_print_comb(void){
    for(int a = 0; a<=9; a++){
        for(int b = a+1; b<=9;b++){
            for(int c = b+1; c<=9;c++){
                ft_putchar(48 + a);
                ft_putchar(48 + b);
                ft_putchar(48 + c);
                if (!(a == 7 && b == 8 && c == 9))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}

int main(){
    ft_print_comb();
    return 0;
}
