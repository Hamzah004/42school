/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:10:42 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/02 20:50:50 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0' && !(str[i] >= 'a' && str[i] <= 'z'))
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+' || str[i] == ' ')
		{
			i++;
			continue ;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				break ;
		}
		i++;
	}
	return (number * sign);
}
/*
int	main(void)
{
	char x[] = " ---+--+1234ab569";
	int i = ft_atoi(x);
	printf("%d",i);
}*/
