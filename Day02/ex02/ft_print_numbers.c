#include <unistd.h>
#include <stdio.h>
void ft_print_numbers(void){

  write(1, "0123456789\n", 12);

}

int main(args){
  ft_print_numbers();
  return 0;
}
