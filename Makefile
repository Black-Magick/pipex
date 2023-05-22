# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 21:53:00 by remanuel          #+#    #+#              #
#    Updated: 2023/05/22 21:53:00 by remanuel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = pipex
HEADER = ./header/pipex.h

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -o pipex
RM = rm -f

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

SRC = pipex.c erros.c paths.c processes.c
SRC_PATH = ./src/
SRC_R = $(addprefix $(SRC_PATH), $(SRC))
O_SRC = $(SRC_R:.c=.o)

$(LIBFT): $(shell make -C $(LIBFT_PATH) -q libft.a)
		make -C $(LIBFT_PATH)

$(FT_PRINTF): $(shell make -C $(FT_PRINTF_PATH) -q libftprintf.a)
		make -C $(FT_PRINTF_PATH)

$(NAME):  $(O_SRC) $(LIBFT) $(FT_PRINTF)
		$(CC) $(CFLAGS) $(O_SRC) $(LIBFT) $(FT_PRINTF)

all: $(NAME)
		echo "\033[1;32mCompiled:\033[0;97m Pipex (Libft & Ft_Printf included).\033[0;97m"

clean: 
		make clean -C $(LIBFT_PATH) 
		make clean -C $(FT_PRINTF_PATH)
		$(RM) $(O_SRC)
		echo "\033[1;31mRemoved:\033[1;31m\033[0;97m All objects (Libft & Ft_Printf included).\033[0;97m"

fclean: clean
		make fclean -C $(LIBFT_PATH)
		make fclean -C $(FT_PRINTF_PATH)
		echo "\033[1;31mRemoved:\033[1;31m\033[0;97m Pipex.\033[0;97m"
		$(RM) $(NAME)

re: 	fclean all


#$(VERBOSE).SILENT:

.PHONY: all clean fclean re
