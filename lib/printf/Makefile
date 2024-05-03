# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 16:13:47 by claferna          #+#    #+#              #
#    Updated: 2024/03/22 20:26:24 by claferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CFLAGS	=	-Wall -Wextra -Werror

LIB		=	ar -rcs

RM		=	rm -f

SRC		=	ft_printf.c ft_print_char.c ft_print_str.c ft_print_vd.c\
			ft_print_decimal.c ft_print_udecimal.c ft_print_hexa.c\
			ft_print_percentage.c\

OBJS	=	$(SRC:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(LIB) $(NAME) $(OBJS)

.c.o	:
	cc $(CFLAGS) -c $< -o $(<:.c=.o)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
				$(RM) $(NAME)

.PHONY	:	all clean fclean re

re		:	fclean all
		
