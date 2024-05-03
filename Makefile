# --------------------------------
# -------- MAIN VARIABLE  --------
# --------------------------------

NAME	=	push_swap.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

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

SRC		=	src/main.c src/arg.c src/sort.c src/utils.c

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
				$(RM) push_swap
				make -C $(LIBFT) clean
				make -C $(PRT) clean

fclean		:	clean
				$(RM) $(NAME)
				make -C $(LIBFT) fclean
				make -C $(PRT) fclean

re			:	fclean all

.PHONY		:	all fclean re clean
