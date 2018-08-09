#include <unistd.h>
#include <stdio.h>
void ft_print_alphabet(void){

  write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);

}

int main(args){
  ft_print_alphabet();
  return 0;
}
