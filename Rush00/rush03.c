/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasered <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:16:59 by nnasered          #+#    #+#             */
/*   Updated: 2025/06/21 15:14:03 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

void	printrow(char start, char mid, char end, int width)
{
	int	w;

	w = 1;
	ft_putchar(start);
	while (w <= (width - 2))
	{
		ft_putchar(mid);
		w++;
	}
	if (width > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		r;
	char	m;

	r = 1;
	m = 'B';
	if (x < 1 || y < 1)
	{
		ft_putstr("unvalid input, please inter a valid one\n");
		return ;
	}
	printrow('A', m, 'C', x);
	while (r <= (y - 2))
	{
		printrow(m, ' ', m, x);
		r++;
	}
	if (y > 1)
		printrow('A', m, 'C', x);
}
// code v 1.0
/*
void	print(int r, int c, int x, int y)
{
	if ((r == 1 || r == y) && c == 1)
	{
		ft_putchar('A');
	}
	else if ((c > 1 && c < x) && (r > 1 && r < y))
	{
		ft_putchar(' ');
	}
	else if ((r == 1 && c == x) || (c == x && r == y))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	if ((x < 1) || (y < 1))
	{
		ft_putstr("unvalid input, please inter a valid one\n");
		return ;
	}
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			print(r, c, x, y);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
*/
