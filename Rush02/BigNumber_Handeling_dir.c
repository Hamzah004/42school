/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigNumber_Handeling_dir.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:43:00 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 23:28:44 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	append_group_to_result_dir(char *group, int scale_index, char *result,
		char *temp)
{
	t_dict_entry	entries[1000];

	if (scale_index < 13)
		ft_strcat(group, entries[scale_index].word);
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

void	t_big_number_to_text_dir(t_big_number *num, char *result)
{
	char	*temp;
	char	*group;
	int		scale_index;
	int		group_value;

	temp = malloc(10000);
	group = malloc(1000);
	scale_index = 1;
	ft_strcpy(result, "");
	while (!is_zero(num))
	{
		group_value = get_last_three_digits(num);
		if (group_value > 1)
		{
			convert_below_thousand_dir(group_value, group);
			append_group_to_result_dir(group, scale_index, result, temp);
		}
		remove_last_three_digits(num);
		scale_index *= 1000;
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
