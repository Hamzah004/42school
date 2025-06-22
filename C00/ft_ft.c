#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}


int main(void) {
     int c;
     int *p1 = &c; // 1
     int **p2 = &p1; // 2
     int ***p3 = &p2; // 3
     int ****p4 = &p3; // 4
     int *****p5 = &p4; // 5
     int ******p6 = &p5; // 6
     int *******p7 = &p6; // 7
     int ********p8 = &p7; // 8
     int *********p9 = &p8; // 9


  ft_ultimate_ft(p9);
  printf("%d", c);
}
