# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 09:14:53 by jhouyet           #+#    #+#              #
#    Updated: 2023/10/28 16:42:38 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_P1		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_strdup.c

SRCS_P2		= 	ft_atoi.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c

SRCS_B		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS_P1 = $(SRCS_P1:.c=.o)
OBJS_P2 = $(SRCS_P2:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)

CC			= gcc
FLAGS		= -Wall -Wextra -Werror
LIB			= ar rcs

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS_P1) $(OBJS_P2)
	$(LIB) $@ $^

bonus:		$(OBJS_B)
			$(LIB) $(NAME) $(OBJS_B)

norm:
	norminette

clean:
	rm -f $(OBJS_P1) $(OBJS_P2) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re