OBJ_DIR = .
SRC_DIR = .
BIN_DIR = .
INC_DIR = .
NAME 	= libft.a
INCLUDES = $(INC_DIR)/libft.h
SRC = 	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_isalpha.c	
OBJS =  $(OBJ_DIR)/ft_strlen.o \
	$(OBJ_DIR)/ft_isalpha.o
	
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all:$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
#	mkdir -p $(BIN_DIR)
	ar rcs $(NAME) $(OBJS)  

#regla patron $< sustotir los nombre del output, $@ los del input
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDES)
#	mkdir -p $(OBJ_DIR)	
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
#	rm -rf $(OBJ_DIR)	

fclean: clean
	rm -f $(NAME)
#	rm -rf $(BIN_DIR)

re: fclean all

.PHONY: re fclean clean all

