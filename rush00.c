#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void rush(int x, int y){

int count1 = 1,count2 = 1;
while(count1 <= x){
	while(count2 <=  y){
		if(count1 == 1 && count2 == 1){
		ft_putchar('A');
}
count1++;
while(count1 <= (x-1))
	{
		ft_putchar('B');
		count1++;
	}
if(count1 == x && count2 == 1)
{
	ft_putchar('C');
}
}
}
}


int main(void){
	rush(5, 3);
}
