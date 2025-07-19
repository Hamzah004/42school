# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbani-at <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 10:56:41 by hbani-at          #+#    #+#              #
#    Updated: 2025/07/05 10:57:37 by hbani-at         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

baba	= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= rush-02
SRC	= ft.c ft2.c BigNumber_Handeling.c BigNumber_Handeling_dir.c big_number_helper.c input_validation.c dir.c main.c numberToText.c number_to_text_dir.c
OBJ	= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(baba) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c rush.h
	$(baba) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean
