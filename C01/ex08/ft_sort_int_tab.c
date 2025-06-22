/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 16:26:54 by username          #+#    #+#             */
/*   Updated: 2025/06/22 16:30:06 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	tmp;
	int	i;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}
/*
int main(void){
	int size = 10;
	int number[] = {3,2,5,2,5,6,8,9,1,4};
	ft_sort_int_tab(number, size);
	for(int i = 0;i < size ;i++)
		printf("%d,",number[i]);
	return 0;
}*/
