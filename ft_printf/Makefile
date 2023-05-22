# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 21:51:13 by remanuel          #+#    #+#              #
#    Updated: 2023/05/22 21:51:17 by remanuel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#indica o nome do programa e onde vai buscar as coisas

NAME		= libftprintf.a

SRC			= ft_printf.c forcands.c bases10.c pointers.c forhexa.c

OBJ			= $(SRC:.c=.o)


#definicao dos parametros, compiler, flags etc

CC				= cc

RM				= rm -f

CFLAGS		= -Wall -Werror -Wextra


#definicao dos comandos, o que fazem e a que ficheiros

$(NAME):	$(OBJ)
				ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all $(NAME)

#comando phony melhora a performance do makefile
#para que os comandos nao entrem em conflito com possiveis ficheiros
#ou outroc comandos pre defenidos 

$(VERBOSE).SILENT:

.PHONY:		all clean fclean re

#phony e opcional no makefile