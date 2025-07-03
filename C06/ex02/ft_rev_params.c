/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 02:22:17 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/03 02:22:18 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	args;

	i = 0;
	args = argc;
	while (args >= 1)
	{
		i = 0;
		while (argv[args][i])
		{
			write(1, &(argv[args][i]), 1);
			i++;
		}
		args--;
	}
	write(1, "\n", 1);
	return (0);
}
