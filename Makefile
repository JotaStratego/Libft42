# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 18:28:36 by javialva          #+#    #+#              #
#    Updated: 2024/06/13 20:38:32 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Werror -Wall -Wextra
M_DIR=/home/javialva/Desktop/Libft/main
CFILES=ft_isalpha.c
ISALPHA_FILES=ft_isalpha.c $(M_DIR)/main_ft_isalpha.c
ISALPHA_OBJECTS=$(ISALPHA_FILES:.c=.o)
ISDIGIT_FILES=ft_isdigit.c $(M_DIR)/main_ft_isdigit.c
ISDIGIT_OBJECTS=$(ISDIGIT_FILES:.c=.o)
ISALNUM_FILES=ft_isalnum.c $(M_DIR)/main_ft_isalnum.c
ISALNUM_OBJECTS=$(ISALNUM_FILES:.c=.o)
ISASCII_FILES=ft_isascii.c $(M_DIR)/main_ft_isascii.c
ISASCII_OBJECTS=$(ISASCII_FILES:.c=.o)
ISPRINT_FILES=ft_isprint.c $(M_DIR)/main_ft_isprint.c
ISPRINT_OBJECTS=$(ISPRINT_FILES:.c=.o)
STRLEN_FILES=ft_strlen.c $(M_DIR)/main_ft_strlen.c
STRLEN_OBJECTS=$(STRLEN_FILES:.c=.o)
OBJECTS=$(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

isalpha: $(ISALPHA_OBJECTS)
	gcc $(CFLAGS) -o isalpha $(ISALPHA_OBJECTS)

isdigit: $(ISDIGIT_OBJECTS)
	gcc $(CFLAGS) -o isdigit $(ISDIGIT_OBJECTS)

isalnum: $(ISALNUM_OBJECTS)
	gcc $(CFLAGS) -o isalnum $(ISALNUM_OBJECTS)

isascii: $(ISASCII_OBJECTS)
	gcc $(CFLAGS) -o isascii $(ISASCII_OBJECTS)

isprint: $(ISPRINT_OBJECTS)
	gcc $(CFLAGS) -o isprint $(ISPRINT_OBJECTS)

strlen: $(STRLEN_OBJECTS)
	gcc $(CFLAGS) -o strlen $(STRLEN_OBJECTS)

clean:
	rm -f *.o $(M_DIR)/*.o

fclean: clean
	rm -f $(NAME) isalpha isdigit isalnum isascii isprint strlen \

re: fclean all
