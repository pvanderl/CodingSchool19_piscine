
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_is_negative(signed int i){
  char p = 'P', n='N';
  if (i == abs(i)) {
    write(1, &p, 1);
	}
  else{
    write(1, &n, 1);
	}

    }

  int main(){
    ft_is_negative(1);
    ft_is_negative(-1);
    return 0;
  }
  
