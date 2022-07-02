# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 21:13:32 by jayoon            #+#    #+#              #
#    Updated: 2022/07/02 18:44:53 by jayoon           ###   ########.fr        #
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

# libft 정적 라이브러리를 사용할 예정
# LIBFT_SRCS	=	$(addprefix $(LIBFT_DIR)/,\
# 				)
# SRCS		= 	$(addprefix $(SRCS_DIR)/,\
# 				)
SRCS		= 	$(addprefix ./,\
				main.c\
				check_exeception.c\
				check_error.c)
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
	@make bonus -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) ./
	$(CC) $(CFLAGS) -I $(INCS_DIR) -o $@ $^ $(LIBFT)

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
