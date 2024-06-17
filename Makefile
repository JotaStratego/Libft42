# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 18:28:36 by javialva          #+#    #+#              #
#    Updated: 2024/06/17 01:54:18 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Werror -Wall -Wextra
M_DIR=/home/jota/Documentos/Libft/main
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
MEMSET_FILES=ft_memset.c $(M_DIR)/main_ft_memset.c
MEMSET_OBJECTS=$(MEMSET_FILES:.c=.o)
BZERO_FILES=ft_bzero.c $(M_DIR)/main_ft_bzero.c
BZERO_OBJECTS=$(BZERO_FILES:.c=.o)
MEMCPY_FILES=ft_memcpy.c $(M_DIR)/main_ft_memcpy.c
MEMCPY_OBJECTS=$(MEMCPY_FILES:.c=.o)
MEMMOVE_FILES=ft_memmove.c $(M_DIR)/main_ft_memmove.c
MEMMOVE_OBJECTS=$(MEMMOVE_FILES:.c=.o)
STRLCPY_FILES=ft_strlcpy.c $(M_DIR)/main_ft_strlcpy.c
STRLCPY_OBJECTS=$(STRLCPY_FILES:.c=.o)
STRLCAT_FILES=ft_strlcat.c $(M_DIR)/main_ft_strlcat.c
STRLCAT_OBJECTS=$(STRLCAT_FILES:.c=.o)
TOUPPER_FILES=ft_toupper.c $(M_DIR)/main_ft_toupper.c
TOUPPER_OBJECTS=$(TOUPPER_FILES:.c=.o)
TOLOWER_FILES=ft_tolower.c $(M_DIR)/main_ft_tolower.c
TOLOWER_OBJECTS=$(TOLOWER_FILES:.c=.o)
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

memset: $(MEMSET_OBJECTS)
	gcc $(CFLAGS) -o memset $(MEMSET_OBJECTS)

bzero: $(BZERO_OBJECTS)
	gcc $(CFLAGS) -o bzero $(BZERO_OBJECTS)

memcpy: $(MEMCPY_OBJECTS)
	gcc $(CFLAGS) -o memcpy $(MEMCPY_OBJECTS)

memmove: $(MEMMOVE_OBJECTS)
	gcc $(CFLAGS) -o memmove $(MEMMOVE_OBJECTS)

strlcpy: $(STRLCPY_OBJECTS)
	gcc $(CFLAGS) -o strlcpy $(STRLCPY_OBJECTS)

strlcat: $(STRLCAT_OBJECTS)
	gcc $(CFLAGS) -o strlcat $(STRLCAT_OBJECTS)

toupper: $(TOUPPER_OBJECTS)
	gcc $(CFLAGS) -o toupper $(TOUPPER_OBJECTS)

tolower: $(TOLOWER_OBJECTS)
	gcc $(CFLAGS) -o tolower $(TOLOWER_OBJECTS)

clean:
	rm -f *.o $(M_DIR)/*.o

fclean: clean
	rm -f $(NAME) isalpha isdigit isalnum isascii isprint strlen \
	memset bzero memcpy memmove strlcpy strlcat toupper tolower \

re: fclean all
