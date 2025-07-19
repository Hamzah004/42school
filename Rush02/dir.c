/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:24:25 by hbani-at          #+#    #+#             */
/*   Updated: 2025/07/05 19:25:38 by yabu-sha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int		ft_atoi(char *str);
void	parse_line(char *line, t_dict_entry *entry)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (line[i] && line[i] != ':')
		entry->key[j++] = line[i++];
	entry->key[j] = 0;
	if (line[i] == ':')
		i++;
	while (line[i] == ' ')
		i++;
	while (line[i] && line[i] != '\n')
		entry->word[k++] = line[i++];
	entry->word[k] = 0;
}

int	read_dict(char *filename, t_dict_entry *entries)
{
	int		fd;
	char	c;
	char	line[256];
	int		len;
	int		count;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	len = 0;
	count = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
		{
			line[len] = '\0';
			parse_line(line, &entries[count++]);
			len = 0;
		}
		else if (len < 255)
			line[len++] = c;
	}
	if (len > 0)
	{
		line[len] = '\0';
		parse_line(line, &entries[count++]);
	}
	close(fd);
	return (count);
}

char	*get_value_by_key(t_dict_entry *entries, int key)
{
	int	i;
	int	value;
	int	count;

	count = read_dict("numbers.dict", entries);
	i = 0;
	while (i < count)
	{
		value = ft_atoi(entries[i].key);
		if (value == key)
			return (entries[i].word);
		i++;
	}
	return ("Number Doesn't Exist");
}
/*
#include <stdio.h>

int	main(void)
{
	t_dict_entry	entries[1000];
	int				i;
	int				count;

	i = 0;
	count = read_dict("numbers.dict", entries);
	printf("The Value Of Key 90 is : %s",get_value_by_key(entries,90));
	while (i < count)
	{
		write(1, "Key: ", 5);
		write(1, entries[i].key, ft_strlen(entries[i].key));
		write(1, " -> Word: ", 10);
		write(1, entries[i].word, ft_strlen(entries[i].word));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
*/
