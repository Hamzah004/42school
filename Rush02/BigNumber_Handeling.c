/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigNumber_Handeling.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:43:00 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 19:01:58 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static char	**get_scales(void)
{
	static char	*scales[] = {"", " Thousand", " Million", " Billion",
			" Trillion", " Quadrillion", " Quintillion", " Sextillion",
			" Septillion", " Octillion", " Nonillion", " Decillion",
			" Undecillion"};

	return (scales);
}

void	append_group_to_result(char *group, int scale_index, char *result,
		char *temp)
{
	char	**scales;

	scales = get_scales();
	if (scale_index < 13)
		ft_strcat(group, scales[scale_index]);
	if (result[0] != '\0')
	{
		ft_strcpy(temp, group);
		ft_strcat(temp, " ");
		ft_strcat(temp, result);
		ft_strcpy(result, temp);
	}
	else
		ft_strcpy(result, group);
}

void	t_big_number_to_text(t_big_number *num, char *result)
{
	char	*temp;
	char	*group;
	int		scale_index;
	int		group_value;

	temp = malloc(10000);
	group = malloc(1000);
	scale_index = 0;
	ft_strcpy(result, "");
	while (!is_zero(num))
	{
		group_value = get_last_three_digits(num);
		if (group_value > 0)
		{
			convert_below_thousand(group_value, group);
			append_group_to_result(group, scale_index, result, temp);
		}
		remove_last_three_digits(num);
		scale_index++;
	}
	free(temp);
	free(group);
}
/*
void	number_to_text_large(char *number_string, char *result)
{
	t_big_number	num;

	if (number_string[0] == '0' && number_string[1] == '\0')
	{
		ft_strcpy(result, "Zero");
		return ;
	}
	inti_from_string(&num, number_string);
	t_big_number_to_text(&num, result);
}
*/
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = malloc(1000);
	number_to_text_large("2423438652765276527827242", result);
	printf("%s\n", result);
	number_to_text_large("12222345", result);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
