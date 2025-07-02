/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:01:30 by hbani-at          #+#    #+#             */
/*   Updated: 2025/06/30 16:02:22 by hbani-at         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
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
/*
int main() {

	char arr1[] = "abcd", arr2[] = "abc";
	int result;

	result = ft_strcmp(arr1,arr2);
	printf("%d\n", result);
  return 0;
}*/
