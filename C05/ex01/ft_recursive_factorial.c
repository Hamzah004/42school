/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 21:21:14 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/06 21:21:42 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	x;

	x = 5;
	printf("%d", ft_recursive_factorial(x));
}*/
