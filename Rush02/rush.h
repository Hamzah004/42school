/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabu-sha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 01:17:16 by yabu-sha          #+#    #+#             */
/*   Updated: 2025/07/05 23:23:38 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_LENGTH 40
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

// char	*filename;
typedef struct t_dict_entry
{
	char	key[100];
	char	word[100];
}			t_dict_entry;

typedef struct t_big_number
{
	int		digits[1000];
	int		length;
}			t_big_number;

int			read_dict(char *filename, t_dict_entry *entries);
int			ft_strlen(char *str);

int			is_numeric(char *str);
int			ft_atoi(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strcpy(char *dest, char *src);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
void		number_to_text(long long num, char *result);
void		digit_to_text(int digit, char *result);
void		convert_below_thousand(long long num, char *result);
void		t_big_number_to_text(t_big_number *num, char *result);
void		remove_last_three_digits(t_big_number *num);
void		inti_from_string(t_big_number *num, char *str);
int			is_zero(t_big_number *num);
void		remove_last_three_digits(t_big_number *num);
int			get_last_three_digits(t_big_number *num);
int			read_dict(char *filename, t_dict_entry *entries);
char		*get_value_by_key(t_dict_entry *entries, int key);
int			ft_power(int n, int p);
void		number_to_text_large_dir(char *number_string, char *result);
void		convert_below_thousand_dir(long long num, char *result);
void		digit_to_text_dir(int digit, char *result);
void		t_big_number_to_text(t_big_number *num, char *result);
void		number_to_text_large_dir(char *number_string, char *result);
void		dir_Argument(char *num);
void		number_argument(char *num);
