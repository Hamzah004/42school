/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:22:01 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/01 16:22:17 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_size;
	unsigned int	space_left;

	i = 0;
	dest_length = ft_strlen(dest);
	src_size = ft_strlen(dest);
	space_left = (size - dest_length - 1);
	if (dest_length <= size)
	{
		return (src_size + size);
	}
	while ((i < space_left) && src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest_length);
}
/*
int	main()
{
	char src[] = "this";
	char dest[] = "hello";
	printf(	"%u", ft_strlcat(dest, src, 3));

}
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
