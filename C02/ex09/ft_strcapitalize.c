/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:45:58 by hbani-at          #+#    #+#             */
/*   Updated: 2025/06/24 20:52:15 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 1;

	if (str == NULL)
		return NULL;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && is_first)
		{
			str[i] -= 32;
			is_first = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !is_first)
		{
			str[i] += 32;
		}
		else if (str[i] >= 0 && str[i] <= 9)
		{
			is_first  = 0;
		}

		else if (!(str[i+1] >= 'a' && str[i+1] <= 'z') ||
			!(str[i+1] >= 'A' && str[i+1] <= 'Z') ||
			!(str[i+1] >= 0 && str[i+1] <= 9))
		{
			is_first = 0;
		}
		else 
			is_first = 1;
		i++;
	}
	return (str);
}

int	main()
{
	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(string);
	printf("%s", string);
}
