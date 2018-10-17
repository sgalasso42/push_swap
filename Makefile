# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/13 17:12:19 by sgalasso          #+#    #+#              #
#    Updated: 2018/10/17 13:24:40 by sgalasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PS = push_swap

NAME_CK = checker

SRC_CK = main_checker.c \

SRC_PS = main_push_swap.c \

SRC = srcs/ft_parse_pile.c \
	  srcs/ft_nbrlen.c \
	  srcs/ft_display_pile.c \
	  srcs/ft_check_command.c \
	  srcs/ft_sa_sb_ss.c \
	  srcs/ft_pa_pb.c \
	  srcs/ft_ra_rb_rr.c \
	  srcs/ft_rra_rrb_rrr.c \
	  srcs/ft_exec_commands.c \
	  srcs/ft_check_order.c \
	  srcs/ft_layout_study.c \
	  srcs/ft_select_algo.c \
	  srcs/ft_check_piles.c \
	  srcs/ft_algo_max_3.c \
	  srcs/ft_algo_max_5.c \
	  srcs/ft_sort_3.c \
	  srcs/ft_calc_med.c \
	  srcs/ft_algo_quicksort.c \
	  utils/ft_atoi.c \
	  utils/ft_isdigit.c \
	  utils/ft_putchar.c \
	  utils/ft_putendl.c \
	  utils/ft_putnbr.c \
	  utils/ft_putstr.c \
	  utils/ft_strcmp.c \
	  utils/ft_strequ.c \
	  utils/ft_strlen.c \
	  utils/ft_strcat.c \
	  utils/ft_strdup.c \
	  utils/ft_strjoin.c \
	  utils/ft_strncpy.c \
	  utils/ft_strnew.c \
	  utils/ft_strsub.c \
	  utils/get_next_line.c \

OBJ_PS = $(SRC:.c=.o)
OBJ_PS += $(SRC_PS:.c=.o)

OBJ_CK = $(SRC:.c=.o)
OBJ_CK += $(SRC_CK:.c=.o)

INCLUDES = includes/

all: $(NAME_PS) $(NAME_CK)

$(NAME_PS): $(OBJ_PS)
	gcc -Wall -Wextra -Werror -o $(NAME_PS) $(OBJ_PS) -I $(INCLUDES)

$(NAME_CK): $(OBJ_CK)
	gcc -Wall -Wextra -Werror -o $(NAME_CK) $(OBJ_CK) -I $(INCLUDES)

%.o: %.c $(INCLUDES)commands.h $(INCLUDES)checker.h $(INCLUDES)push_swap.h
	gcc -Wall -Wextra -Werror -o $@ -c $<

clean:
	rm -f $(OBJ_PS) $(OBJ_CK)

fclean: clean
	rm -f $(NAME_PS) $(NAME_CK)

re: fclean all
