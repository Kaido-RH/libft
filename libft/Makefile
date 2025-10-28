NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

GREEN = \033[0;32m

SOURCES = ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_memchr.c\
ft_memcmp.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\




OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o: %.c libft.h   
	@echo "$(GREEN)Compiling $< into $@..."
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@echo "$(GREEN)Creating library $(NAME)..."
	@$(AR) $(NAME) $(OBJECTS)
	@echo "Library $(NAME) created successfully!"

clean:
	@echo "Cleaning object files..."
	$(RM) $(OBJECTS)
	@echo "Object files cleaned!"

fclean: clean
	@echo "Full clean: removing $(NAME)..."
	$(RM) $(NAME)
	@echo "Everything cleaned!"

re: fclean all
	@echo "Rebuild complete!"

.PHONY: all clean fclean re