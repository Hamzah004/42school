/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 11:50:24 by username          #+#    #+#             */
/*   Updated: 2025/06/22 11:50:27 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
/*
int main()
{
	int a = 50;
	int b = 1;
	printf("before swap:\na: %d\nb:%d\n",a,b);
	ft_swap(&a, &b);
	printf("after swap:\na: %d\nb:%d\n",a,b);
}*/
