/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:42:09 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/09 15:55:57 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (!(s1[i] - s2[i] == 0))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_strings(int num, char **s)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0)
		{
			if (ft_strcmp(s[j - 1], s[j]) > 0)
			{
				temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	arg;

	ft_sort_strings(argc - 1, argv + 1);
	i = 0;
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i])
		{
			write(1, &(argv[arg][i]), 1);
			i++;
		}
		arg++;
		write(1, "\n", 1);
	}
}
