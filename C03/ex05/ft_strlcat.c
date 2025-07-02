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
// #include <bsd/string.h>
int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_size;
	unsigned int	space_left;

	i = 0;
	dest_length = ft_strlen(dest);
	src_size = ft_strlen(src);
	space_left = (size - dest_length - 1);
	if (size <= dest_length)
	{
		return (src_size + size);
	}
	while ((i < space_left) && src[i])
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_size);
}
/*
int	main()
{
	char src[] = "is";
	char dest[] = "hello";
	printf(	"%u\n", ft_strlcat(dest, src, 1));
	printf(	"%lu\n", strlcat(dest, src, 1));

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
