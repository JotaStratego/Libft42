# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 10:34:19 by javialva          #+#    #+#              #
#    Updated: 2024/07/05 09:52:10 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

FT=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ=$(FT:.c=.o)

CFLAGS=-Wall -Werror -Wextra

BONUS_F=ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_O=$(BONUS_F:.c=.o)

all: $(NAME)

$(NAME): $(FT) $(OBJ)
	@gcc -c $(CFLAGS) $(FT)
	@ar rcs $(NAME) $(OBJ)

bonus: $(NAME) $(BONUS_F) $(BONUS_O)
	@gcc -c $(CFLAGS) $(BONUS_F)
	@ar rcs $(NAME) $(BONUS_O)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(BONUS_O)

re: fclean all

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

.PHONY: all bonus clean fclean re
