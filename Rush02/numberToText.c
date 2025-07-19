/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numberToText.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:53:12 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 19:52:32 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	digit_to_text(int digit, char *result)
{
	static char	*below_twenty[] = {"", "One", "Two", "Three", "Four", "Five",
			"Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
			"Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
			"Eighteen", "Nineteen"};
	static char	*below_hundred[] = {"", "", "Twenty", "Thirty", "Forty",
			"Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

	if (digit < 20)
	{
		ft_strcpy(result, below_twenty[digit]);
	}
	else
	{
		ft_strcpy(result, below_hundred[digit / 10]);
		if (digit % 10 != 0)
		{
			ft_strcat(result, " ");
			ft_strcat(result, below_twenty[digit % 10]);
		}
	}
}

void	convert_below_thousand(long long num, char *result)
{
	char	*temp;

	temp = (char *)malloc(1000);
	if (!temp)
		return ;
	if (num < 100)
		digit_to_text(num, result);
	else
	{
		digit_to_text(num / 100, temp);
		ft_strcpy(result, temp);
		ft_strcat(result, " Hundred");
		if (num % 100 != 0)
		{
			ft_strcat(result, " ");
			digit_to_text(num % 100, temp);
			ft_strcat(result, temp);
		}
	}
	free(temp);
}

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

/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = malloc(1000);
	number_to_text_large("1341232132144125", result);
	printf("%s\n", result);
	number_to_text_large("12222345", result);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
