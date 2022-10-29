
SRC_SERVER	=	server.c
SRC_CLIENT	=	client.c

OBJ_SERVER	=	$(SRC_SERVER:.c=.o)
OBJ_CLIENT	=	$(SRC_CLIENT:.c=.o)

NAME		=	minitalk
NAME_SERVER	=	server
NAME_CLIENT	=	client

CFLAGS		=	-Wall -Wextra -Werror

CC			=	CC

all:		$(NAME)

$(NAME):	$(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER):	$(OBJ_SERVER)
				make -C include/libft
				$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJ_SERVER) include/libft/libft.a
$(NAME_CLIENT):	$(OBJ_CLIENT)
				make -C include/libft
				$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJ_CLIENT) include/libft/libft.a
clean:
				make fclean -C include/libft
				rm -f $(OBJ_SERVER) $(OBJ_CLIENT)

fclean:			clean
				rm -f $(NAME_SERVER) $(NAME_CLIENT)

re:			fclean all

.PHONY:			all clean fclean re
