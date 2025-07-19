/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_text_dir.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 08:42:22 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 23:14:56 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	digit_to_text_dir(int digit, char *result)
{
	t_dict_entry	entries[1000];

	if (digit < 20)
	{
		ft_strcpy(result, entries[digit].word);
	}
	else
	{
		ft_strcpy(result, get_value_by_key(entries, (digit / 10) * 10));
		if (digit % 10 != 0)
		{
			ft_strcat(result, " ");
			ft_strcat(result, get_value_by_key(entries, digit % 10));
		}
	}
}

void	convert_below_thousand_dir(long long num, char *result)
{
	t_dict_entry	entries[1000];
	char			*temp;

	temp = (char *)malloc(1000);
	if (!temp)
		return ;
	if (num < 100)
		digit_to_text_dir(num, result);
	else
	{
		digit_to_text_dir(num / 100, temp);
		ft_strcpy(result, temp);
		ft_strcat(result, " ");
		ft_strcat(result, get_value_by_key(entries, 100));
		if (num % 100 != 0)
		{
			ft_strcat(result, " ");
			digit_to_text_dir(num % 100, temp);
			ft_strcat(result, temp);
		}
	}
	free(temp);
}

void	number_to_text_large_dir(char *number_string, char *result)
{
	t_big_number	num;
	t_dict_entry	entries[1000];

	if (number_string[0] == '0' && number_string[1] == '\0')
	{
		ft_strcpy(result, get_value_by_key(entries, 0));
		return ;
	}
	inti_from_string(&num, number_string);
	t_big_number_to_text(&num, result);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = malloc(1000);
	number_to_text_large_dir("0", result);
	printf("%s\n", result);
	number_to_text_large_dir("55555", result);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
