/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 12:06:03 by username          #+#    #+#             */
/*   Updated: 2025/06/22 12:06:15 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{	int a = 20, b = 10;

	int div;
	int mod;

	ft_div_mod(a,b,&div,&mod);
	printf("div: %d\nmod: %d",div,mod);
}
