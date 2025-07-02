/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 02:49:07 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/02 03:04:14 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	number_length(int number);

void ft_putnbr(int nb)
{
	int	size;
	
	size = number_length(nb);
	while (size)
}

int main()
{
	int	i;

	i = 12;
	ft_putnbr(i);
}

int	number_length(int number)
{
	int	length;

	length = number?0:1;
	while (number)
	{
		length++;
		number /= 10;;
	}
	return (length);
}

int	*number_array(int number)
{
	int	size = number_length(number);
	int	array[size];
	int	i;

	i = 0;
	while (number)
	{
		array[i] += number /= 10;
	}
	return (array);
}
