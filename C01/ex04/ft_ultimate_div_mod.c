/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 12:23:33 by username          #+#    #+#             */
/*   Updated: 2025/06/22 12:24:58 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int main() {
	int number1 = 20;
	int number2 = 10;
  int *a = &number1, *b = &number2;

  ft_ultimate_div_mod(a, b);
  printf("div: %d\nmod: %d", *a, *b);
}*/
