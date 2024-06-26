# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javialva <javialva@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 18:28:36 by javialva          #+#    #+#              #
#    Updated: 2024/06/28 14:08:00 by javialva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Werror -Wall -Wextra
M_DIR=/home/javialva/Desktop/Libft/main
SRC=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_striteri.c \
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
STRCHR_FILES=ft_strchr.c $(M_DIR)/main_ft_strchr.c
STRCHR_OBJECTS=$(STRCHR_FILES:.c=.o)
STRRCHR_FILES=ft_strrchr.c $(M_DIR)/main_ft_strrchr.c
STRRCHR_OBJECTS=$(STRRCHR_FILES:.c=.o)
STRNCMP_FILES=ft_strncmp.c $(M_DIR)/main_ft_strncmp.c
STRNCMP_OBJECTS=$(STRNCMP_FILES:.c=.o)
MEMCHR_FILES=ft_memchr.c $(M_DIR)/main_ft_memchr.c
MEMCHR_OBJECTS=$(MEMCHR_FILES:.c=.o)
MEMCMP_FILES=ft_memcmp.c $(M_DIR)/main_ft_memcmp.c
MEMCMP_OBJECTS=$(MEMCMP_FILES:.c=.o)
STRNSTR_FILES=ft_strnstr.c $(M_DIR)/main_ft_strnstr.c
STRNSTR_OBJECTS=$(STRNSTR_FILES:.c=.o)
ATOI_FILES=ft_atoi.c $(M_DIR)/main_ft_atoi.c
ATOI_OBJECTS=$(ATOI_FILES:.c=.o)
CALLOC_FILES=ft_calloc.c $(M_DIR)/main_ft_calloc.c
CALLOC_OBJECTS=$(CALLOC_FILES:.c=.o)
STRDUP_FILES=ft_strdup.c $(M_DIR)/main_ft_strdup.c
STRDUP_OBJECTS=$(STRDUP_FILES:.c=.o)
STRJOIN_FILES=ft_strjoin.c $(M_DIR)/main_ft_strjoin.c
STRJOIN_OBJECTS=$(STRJOIN_FILES:.c=.o)
STRTRIM_FILES=ft_strtrim.c $(M_DIR)/main_ft_strtrim.c
STRTRIM_OBJECTS=$(STRTRIM_FILES:.c=.o)
SPLIT_FILES=ft_strlcpy.c ft_split.c $(M_DIR)/main_ft_split.c
SPLIT_OBJECTS=$(SPLIT_FILES:.c=.o)
ITOA_FILES=ft_itoa.c $(M_DIR)/main_ft_itoa.c
ITOA_OBJECTS=$(ITOA_FILES:.c=.o)
STRMAPI_FILES=ft_strlcpy.c ft_strlen.c ft_strmapi.c $(M_DIR)/main_ft_strmapi.c
STRMAPI_OBJECTS=$(STRMAPI_FILES:.c=.o)
STRITERI_FILES=ft_striteri.c $(M_DIR)/main_ft_striteri.c
STRITERI_OBJECTS=$(STRITERI_FILES:.c=.o)
OBJECTS=$(SRC:.c=.o)

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

strchr: $(STRCHR_OBJECTS)
	gcc $(CFLAGS) -o strchr $(STRCHR_OBJECTS)

strrchr: $(STRRCHR_OBJECTS)
	gcc $(CFLAGS) -o strrchr $(STRRCHR_OBJECTS)

strncmp: $(STRNCMP_OBJECTS)
	gcc $(CFLAGS) -o strncmp $(STRNCMP_OBJECTS)

memchr: $(MEMCHR_OBJECTS)
	gcc $(CFLAGS) -o memchr $(MEMCHR_OBJECTS)

memcmp: $(MEMCMP_OBJECTS)
	gcc $(CFLAGS) -o memcmp $(MEMCMP_OBJECTS)

strnstr: $(STRNSTR_OBJECTS)
	gcc $(CFLAGS) -o strnstr $(STRNSTR_OBJECTS)

atoi: $(ATOI_OBJECTS)
	gcc $(CFLAGS) -o atoi $(ATOI_OBJECTS)

calloc: $(CALLOC_OBJECTS)
	gcc $(CFLAGS) -o calloc $(CALLOC_OBJECTS)

strdup: $(STRDUP_OBJECTS)
	gcc $(CFLAGS) -o strdup $(STRDUP_OBJECTS)

strjoin: $(STRJOIN_OBJECTS)
	gcc $(CFLAGS) -o strjoin $(STRJOIN_OBJECTS)

strtrim: $(STRTRIM_OBJECTS)
	gcc $(CFLAGS) -o strtrim $(STRTRIM_OBJECTS)

split: $(SPLIT_OBJECTS)
	gcc $(CFLAGS) -o split $(SPLIT_OBJECTS)

itoa: $(ITOA_OBJECTS)
	gcc $(CFLAGS) -o itoa $(ITOA_OBJECTS)

strmapi: $(STRMAPI_OBJECTS)
	gcc $(CFLAGS) -o strmapi $(STRMAPI_OBJECTS)

striteri: 
	gcc $(STRITERI_FILES) -o striteri 

clean:
	rm -f *.o $(M_DIR)/*.o

fclean: clean
	rm -f $(NAME) isalpha isdigit isalnum isascii isprint strlen \
	memset bzero memcpy memmove strlcpy strlcat toupper tolower \
	strchr strrchr strncmp memchr memcmp strnstr atoi calloc \
	strdup strjoin strtrim split itoa strmapi striteri

re: fclean all
