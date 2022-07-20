# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 21:13:32 by jayoon            #+#    #+#              #
#    Updated: 2022/07/20 21:29:42 by jayoon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
DEBUG		= -g3 -fsanitize=address

SRCS_DIR	= srcs
B_SRCS_DIR	= bonus_srcs
INCS_DIR 	= includes

LIBFT_DIR	= libft
LIBFT		= libft.a

# SRCS		= 	$(addprefix $(SRCS_DIR)/,\
# 				)
SRCS		= 	$(addprefix ./,\
				main.c\
				parse.c\
				error.c\
				error.c\
				atol_and_check_int.c
				)
# B_SRCS		=	$(addprefix $(B_SRCS_DIR)/,\
# 				)
LIBFT_OBJS	= $(LIBFT_SRCS:.c=.o)
OBJS		= $(SRCS:.c=.o)
# B_OBJS		= $(B_SRCS:.c=.o)

ifdef BONUS_FLAG
	OBJECTS = $(B_OBJS) $(LIBFT_OBJS)
else
	OBJECTS = $(OBJS) $(LIBFT_OBJS)
endif

ifdef DEBUG_FLAG
	CFLAGS += $(DEBUG)
endif

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $^ -o $@

$(NAME): $(OBJECTS)
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) ./
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFT)

debug: 
	$(MAKE) DEBUG_FLAG=1 all

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJS) $(B_OBJS) $(LIBFT_OBJS) $(LIBFT)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

re:
	@make re -C $(LIBFT_DIR)
	make clean
	make all

# bonus:
# 	@make BONUS_FLAG=1 all

.PHONY : all clean fclean re bonus debug
