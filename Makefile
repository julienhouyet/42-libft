# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 09:14:53 by jhouyet           #+#    #+#              #
#    Updated: 2023/10/27 10:26:46 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

files 	   = 	ft_isalpha \
				ft_isdigit \
				ft_isalnum \
				ft_isascii \
				ft_isprint \
				ft_strlen \
				ft_strdup \
				ft_memset \
				ft_bzero \
				ft_memcpy \
				ft_memmove \
				ft_strlcpy \
				ft_strlcat \
				ft_toupper \
				ft_tolower \
				ft_strchr \
				ft_strrchr \
				ft_strncmp \
				ft_memchr \
				ft_memcmp \
				ft_strnstr \
				ft_calloc \
				ft_atoi \
				ft_substr \
				ft_strjoin \
				ft_strtrim \
				ft_split \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putnbr_fd \
				ft_putendl_fd

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(NAME)

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re