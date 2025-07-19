/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:58:11 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 23:24:08 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	number_argument(char *num);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		number_argument(argv[1]);
	}
	else if (argc == 3)
	{
		// dir_Argument(argv[1], argv[2]);
	}
	else
		write(1, "Error\n", 7);
}
