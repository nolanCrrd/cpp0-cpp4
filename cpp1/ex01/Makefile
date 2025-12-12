CC=c++
NAME = horde
SRC_DIR = ./

SRCS = $(SRC_DIR)Zombie.cpp \
	$(SRC_DIR)zombieHorde.cpp \
	$(SRC_DIR)main.cpp \

OBJ_DIR = .build/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

FSANITIZE = -fsanitize=address,undefined,leak

CFLAGS = -Wall -Werror -Wextra -std=c++98 -g \
		-I include \

LDFLAGS =

ifdef SANITIZE
	CFLAGS += $(FSANITIZE)
	LDFLAGS += $(FSANITIZE)
endif

all: $(NAME)

sanitize:
	@echo ""
	@echo "================================"
	@echo "Recompiling with fsanitize flags..."
	@echo "================================"
	@echo ""
	@$(MAKE) re SANITIZE=1

$(NAME): $(OBJS)
	@echo ""
	@echo "================================"
	@echo "Creating ex00..."
	@echo "================================"
	@echo ""
	@$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re sanitize
