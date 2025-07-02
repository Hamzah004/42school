/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:45:58 by username          #+#    #+#             */
/*   Updated: 2025/07/02 14:46:48 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == 1)
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && flag == 0)
			str[i] += 32;
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&&!(str[i] >= 'A' && str[i] <= 'Z')
			&&!(str[i] >= '0' && str[i] <= '9'))
			flag = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(string);
	printf("%s\n", string);
}*/
