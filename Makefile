# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 18:05:22 by pmendez-          #+#    #+#              #
#    Updated: 2023/09/21 18:05:25 by pmendez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

FILES = ft_printf.c ft_printstr.c ft_print_integer.c ft_printchar.c ft_printpointer.c ft_print_hexa.c ft_print_unsigned_int.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -f $(OBJS) $(OBJ_BONUS)

ejecutar:
	gcc $(FILES) $(CFLAGS)
	./a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
