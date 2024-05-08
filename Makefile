# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: claferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 18:04:23 by claferna          #+#    #+#              #
#    Updated: 2024/05/08 17:51:01 by claferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --------------------------------
# -------- MAIN VARIABLE  --------
# --------------------------------

NAME	=	push_swap.a

CC		=	cc

CFLAGS	=	-g -o -Wall -Wextra -Werror

RM		=	rm -f

AR		=	ar -rc

# ---------------------------------
# ---------- LIBRARIES ------------
# ---------------------------------
#
# ............ LIBFT ..............

LIBFT		=	./lib/libft
LIBFT_A		=	$(LIBFT)/libft.a

# ........... PRINTF .............
PRT			= 	./lib/printf
PRT_A		=	$(PRT)/libftprintf.a

# ---------------------------------
# --------- DIRECTORIES -----------

SRCDIR		=	src

OBJDIR		=	obj

# ---------------------------------
# ---------- SRC & OBJS -----------
# ---------------------------------

SRC			=	src/main.c\
				src/arg.c\
				src/list/list.c\
				src/utils.c\
				src/moves/push.c src/moves/rotate.c src/moves/swap.c src/moves/r_rotate.c\
				src/algorithm/big_sort.c src/algorithm/steps.c src/algorithm/short_sort.c	

OBJS		=	$(SRC:.c=.o)

# ---------------------------------
# ------------ RULES --------------
# ---------------------------------
all			:	$(NAME)

$(NAME)		:	$(OBJS)
				make -C $(LIBFT) -f Makefile
				make bonus -C $(LIBFT) -f Makefile
				make -C $(PRT) -f Makefile
				$(CC) $(CFLAGS) $(OBJS) -o push_swap $(LIBFT_A) $(PRT_A)
				$(AR) $(NAME) $(OBJS)

clean		:	
				$(RM) $(OBJS) 
				make -C $(LIBFT) clean
				make -C $(PRT) clean

fclean		:	clean
				$(RM) $(NAME)
				$(RM) push_swap
				make -C $(LIBFT) fclean
				make -C $(PRT) fclean

re			:	fclean all

.PHONY		:	all fclean re clean
