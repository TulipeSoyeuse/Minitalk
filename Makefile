SRCS	=	$(wildcard *.c)
OBJS	=	$(SRCS:.c=.o)
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
SERVER	= server
CLIENT	= client
LIBFT 	= libft/libft.a
DEBUG	= push_swap_debug

# Link all Object Files with external Libraries into Binaries
all: $(SERVER) $(CLIENT)

re: fclean all

$(LIBFT) :
	make -C libft/

$(SERVER): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) server.o utils.o $(LIBFT) -o $(SERVER)

$(CLIENT): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) client.o utils.o $(LIBFT) -o $(CLIENT)

clean:
	rm -f $(OBJS)

fclean: clean
	make -C libft/ clean
	rm -f $(CLIENT) $(SERVER) a.out core $(name) $(DEBUG)

.PHONY: all clean fclean re