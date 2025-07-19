/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:20:06 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 23:26:16 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>
#include <unistd.h>

void	number_to_text_large(char *number_string, char *result);
void	number_to_text_large_dir(char *number_string, char *result);
void	dir_Argument(char *num)
{
	char	*result;

	if (is_numeric(num))
	{
		result = malloc(1000);
		number_to_text_large_dir(num, result);
		ft_putstr(result);
		if (!result)
			ft_putstr("Memory allocation failed\n");
		free(result);
	}
	else
		write(1, "Error\n", 7);
}

void	number_argument(char *num)
{
	char				*result;

	if (is_numeric(num))
	{
		result = (char *)malloc(1000);
		if (!result)
			ft_putstr("Memory allocation failed\n");
		number_to_text_large(num, result);
		ft_putstr(result);
		free(result);
	}
	else
	{
		write(1, "Error\n", 7);
	}
}
