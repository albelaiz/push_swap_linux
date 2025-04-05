NAME = push_swap

SRC = push_swap.c \
	  valid_number.c \
	  ft_error.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_putstr_fd.c\
	  ft_split.c\
	  ft_strlen.c\
	  ft_strlcpy.c\
	  ft_atoi.c\
	  ft_strcmp.c\
	  ft_lstadd_back.c\
	  ft_lstlast.c\
	  ft_lstnew.c\
	  ft_lstsize.c\
	  duplicate.c\

OBJ = $(SRC:.c=.o)

CC = cc
# CFLAGS = -Wall -Wextra -Werror
CFLAGS = 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re