/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yazen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 07:37:54 by yazen             #+#    #+#             */
/*   Updated: 2025/07/05 21:40:27 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_power(int n, int p)
{
	int	pow;
	int	i;

	pow = 1;
	i = 0;
	while (i < p)
	{
		pow = pow * n;
		i++;
	}
	if (p < 0)
		return (1 / pow);
	return (pow);
}
