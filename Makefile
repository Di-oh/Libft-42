# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dionmart <dionmart@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:18:56 by dionmart          #+#    #+#              #
#    Updated: 2023/05/03 16:44:06 by dionmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME 	= libft.a
HEADER 	= libft.h
SRC 	= ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c \
		  ft_isprint.c ft_memset.c
OBJS 	= ft_strlen.o ft_isalpha.o ft_isalnum.o ft_isdigit.o ft_isascii.o \
		  ft_isprint.o ft_memset.o
	
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

all:$(NAME)

$(NAME): $(OBJS) $(HEADER)
	@ar rcs $(NAME) $(OBJS)  

#regla patron $< sustotir los nombre del output, $@ los del input
%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all


