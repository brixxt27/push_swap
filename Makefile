# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 21:13:32 by jayoon            #+#    #+#              #
#    Updated: 2022/06/30 21:32:37 by jayoon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
DEBUG		= -g3 -fsanifize=address
NAME		= push_swap
LIBFT_DIR	= libft
SRCS_DIR	= srcs
B_SRCS_DIR	= bonus_srcs
INCS_DIR 	= includes
LIBFT_SRCS	=	$(addprefix $(LIBFT_DIR)/,\
				)
SRCS		= 	$(addprefix $(SRCS_DIR)/,\
				main.c)
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
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $^ -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -o $@ $^

debug: 
	$(MAKE) DEBUG_FLAG=1 all

clean:
	rm -f $(OBJS) $(B_OBJS) $(LIBFT_OBJS)

fclean: clean
	rm -f $(NAME)

re:
	make clean
	make all

# bonus:
# 	@make BONUS_FLAG=1 all

.PHONY : all clean fclean re bonus debug
