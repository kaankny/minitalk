SERVER = server.c
SERVER_NAME = server
CLIENT = client.c
CLIENT_NAME = client
UTILS = utils.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m

all: kaanstart server client kaanend

kaanstart:
	@echo "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Starting the compilation..."
kaanend:
	@echo "🚧 $(BOLD_YELLOW)Make: $(NO_COLOR)Compilation $(BOLD_GREEN)succesfully $(NO_COLOR)finished!\n"
server:
	@$(CC) $(SERVER) $(UTILS) -o $(SERVER_NAME) $(CFLAGS)
	@echo "📥 Server $(BOLD_GREEN)ready$(NO_COLOR)!"
client:
	@$(CC) $(CLIENT) $(UTILS) -o $(CLIENT_NAME) $(CFLAGS)
	@echo "📟 Client $(BOLD_GREEN)ready$(NO_COLOR)!"
clean:
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	@echo "🧼 $(BOLD_YELLOW)Clean: $(NO_COLOR)Removed the executables"
re: clean all

.PHONY: server client clean fclean re kaanstart
