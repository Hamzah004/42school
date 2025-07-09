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
	int	arg;

	i = 0;
	arg = argc - 1;
	while (arg >= 1)
	{
		i = 0;
		while (argv[arg][i])
		{
			write(1, &(argv[arg][i]), 1);
			i++;
		}
		arg--;
		write(1, "\n", 1);
	}
	return (0);
}
