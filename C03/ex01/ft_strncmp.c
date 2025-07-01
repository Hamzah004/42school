/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:02:44 by hbani-at          #+#    #+#             */
/*   Updated: 2025/06/30 16:02:47 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (!(s1[i] - s2[i] == 0))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char arr1[] = "a", arr2[] = "af";
	int result;

	result = ft_strncmp(arr1,arr2,2);
	printf("%d\n", result);
  return 0;
}*/
