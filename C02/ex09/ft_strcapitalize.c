/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:45:58 by username          #+#    #+#             */
/*   Updated: 2025/06/24 20:52:15 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(string);
	printf("%s", string);
}*/
