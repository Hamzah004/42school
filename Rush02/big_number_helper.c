/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_number_helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:37:42 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 15:37:45 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	inti_from_string(t_big_number *num, char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len])
		len++;
	num->length = len;
	i = 0;
	while (i < len)
	{
		num->digits[i] = str[i] - '0';
		i++;
	}
}

int	is_zero(t_big_number *num)
{
	int	i;

	i = 0;
	while (i < num->length)
	{
		if (num->digits[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

void	remove_last_three_digits(t_big_number *num)
{
	if (num->length <= 3)
	{
		num->digits[0] = 0;
		num->length = 1;
		return ;
	}
	num->length -= 3;
}

int	get_last_three_digits(t_big_number *num)
{
	int	result;
	int	i;
	int	multiplier;
	int	count;

	i = num->length - 1;
	result = 0;
	multiplier = 1;
	count = 0;
	while (i >= 0 && count < 3)
	{
		result += num->digits[i] * multiplier;
		multiplier *= 10;
		i--;
		count++;
	}
	return (result);
}
