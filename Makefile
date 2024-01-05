FILES		= server client utils
CC			= cc
CFLAGS 		= -Wall -Wextra -Werror
SERVER		= server
CLIENT		= client
LIBFT 		= libft/libft.a

SRCS		= $(addsuffix .c, $(FILES))
OBJS		= $(SRCS:.c=.o)

SRCS_BONUS	= $(addsuffix _bonus.c, $(FILES))
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

all: $(SERVER) $(CLIENT)

re: fclean all

bonus: $(addsuffix _bonus, $(SERVER) $(CLIENT))

$(addsuffix _bonus, $(SERVER)): $(OBJS_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(filter-out client_bonus.o, $(OBJS_BONUS)) $(LIBFT) -o $@

$(addsuffix _bonus, $(CLIENT)): $(OBJS_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(filter-out server_bonus.o, $(OBJS_BONUS)) $(LIBFT) -o $@

$(LIBFT) :
	make -C libft/

$(SERVER): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(filter-out client.o, $(OBJS)) $(LIBFT) -o $@

$(CLIENT): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(filter-out server.o, $(OBJS)) $(LIBFT) -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	make -C libft/ clean
	rm -f $(CLIENT) $(SERVER) a.out core $(name) $(DEBUG) $(addsuffix _bonus, $(SERVER) $(CLIENT))

.PHONY: all clean fclean re