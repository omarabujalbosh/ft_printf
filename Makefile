# _*_MAKEFILE_*_

NAME = ft_printf.a
CC = cc
CFLAG = -Wall -Wextra -Werror

SRC = ft_printf.c put_char.c put_hexa.c put_mod.c put_pounter.c put_putnum.c put_str.c put_unsgined_int.c

OBG = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

LIBFT_OBJS = $(LIBFT_DIR)/ft_atoi.o $(LIBFT_DIR)/ft_bzero.o $(LIBFT_DIR)/ft_calloc.o \
             $(LIBFT_DIR)/ft_isalnum.o $(LIBFT_DIR)/ft_isalpha.o $(LIBFT_DIR)/ft_isascii.o \
             $(LIBFT_DIR)/ft_isdigit.o $(LIBFT_DIR)/ft_isprint.o $(LIBFT_DIR)/ft_memchr.o \
             $(LIBFT_DIR)/ft_memcmp.o $(LIBFT_DIR)/ft_memcpy.o $(LIBFT_DIR)/ft_memmove.o \
             $(LIBFT_DIR)/ft_memset.o $(LIBFT_DIR)/ft_putchar_fd.o $(LIBFT_DIR)/ft_putendl_fd.o \
             $(LIBFT_DIR)/ft_putnbr_fd.o $(LIBFT_DIR)/ft_putstr_fd.o $(LIBFT_DIR)/ft_split.o \
             $(LIBFT_DIR)/ft_strchr.o $(LIBFT_DIR)/ft_strdup.o $(LIBFT_DIR)/ft_striteri.o \
             $(LIBFT_DIR)/ft_strjoin.o $(LIBFT_DIR)/ft_strlcat.o $(LIBFT_DIR)/ft_strlcpy.o \
             $(LIBFT_DIR)/ft_strlen.o $(LIBFT_DIR)/ft_strmapi.o $(LIBFT_DIR)/ft_strncmp.o \
             $(LIBFT_DIR)/ft_strnstr.o $(LIBFT_DIR)/ft_strrchr.o $(LIBFT_DIR)/ft_strtrim.o \
             $(LIBFT_DIR)/ft_substr.o $(LIBFT_DIR)/ft_tolower.o $(LIBFT_DIR)/ft_toupper.o

all: $(NAME)

$(NAME): $(OBG) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBG) $(LIBFT_OBJS)
	ranlib $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBG)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
