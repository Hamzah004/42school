/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasered <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:16:59 by nnasered          #+#    #+#             */
/*   Updated: 2025/06/20 15:18:55 by nnasered         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void rush(int x, int y)
{
	if ((x < 1) || (y < 1))
	{
		return ;
	}
	int count_y = 1;
	int count_x;
	while(count_y <= y)
	{
		count_x = 1;
		while(count_x <=  x)
		{
			if((count_y == 1 && count_x == 1) || (count_y == y && count_x == 1))
			{
				ft_putchar('A');
			}
			else if ((count_x > 1 && count_x < x) && (count_y > 1 && count_y < y))
			{
				ft_putchar(' ');
			}
			else if ((count_y == 1 && count_x == x) || (count_x == x && count_y == y))
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
			count_x++;
		}
		ft_putchar('\n');
		count_y++;
	}
}
int main(void)
{
	rush(5, 1);
	printf("\n");
	rush(1, 1);
	printf("\n");
	rush(4, 4);
	printf("\n");
	rush(1, 5);
}
