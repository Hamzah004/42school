/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:56:05 by username          #+#    #+#             */
/*   Updated: 2025/06/24 14:57:05 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char a[] = "AAAA";
	char b[] = "hfkdshf";
	printf(	"%d\n", ft_str_is_uppercase(a));
	printf(	"%d\n", ft_str_is_uppercase(b));

}*/
