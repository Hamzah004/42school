/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:10:45 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/06 22:14:58 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 2)
		return (1);
	else if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*
int	main(void)
{
	int	number;

	number = 10;
	printf("%d", ft_fibonacci(number));
}
*/
