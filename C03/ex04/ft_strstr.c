/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:46:09 by hbani-at          #+#    #+#             */
/*   Updated: 2025/06/30 18:46:13 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str);
int	to_find_start(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	n;

	n = to_find_start(str, to_find);
	if (n != 0)
		return (str + n);
	else
		return (0);
}
/*
int main()
{	char str1[] = "my name is hamzah";
	char str2[] = "name";
		printf("%s", ft_strstr(str1, str2));
}
*/

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	to_find_start(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (!(str[i + j] == to_find[j]))
			{
				break ;
			}
			j++;
		}
		if (j == size)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
