# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samkhize <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 14:13:56 by samkhize          #+#    #+#              #
#    Updated: 2019/06/10 16:08:21 by samkhize         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_atoi.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_islower.c \
		  ft_isprint.c \
		  ft_isupper.c \
		  ft_memccpy.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_strcat.c \
		  ft_strchr.c \
		  ft_strcmp.c \
		  ft_strcpy.c \
		  ft_strdup.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strncat.c \
		  ft_strncmp.c \
		  ft_strncpy.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strstr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_putnbr.c \
		  ft_memalloc.c \
		  ft_memdel.c \
		  ft_strnew.c \
		  ft_strdel.c \
		  ft_strclr.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strmap.c \
		  ft_strmapi.c \
		  ft_strsub.c \
		  

OBJECTS		= $(SRC:.c=.o)

INCLUDES	= ./

FLAGS		= -Wall -Werror -Wextra

all		: $(NAME)

$(NAME)	: $(SRC) libft.h
		gcc $(FLAGS) -I$(INCLUDES) -c $(SRC)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean	:
		rm -f $(OBJECTS)

fclean	:
		rm -f $(NAME)

gclean	:
		rm -f $(NAME)
		rm -f $(OBJECTS)
