# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areverte <areverte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 16:11:19 by areverte          #+#    #+#              #
#    Updated: 2022/10/05 22:08:45 by areverte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c \



SRCSB =	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \

CFLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSB:.c=.o)
HEADERS = /*.h
DEPS = $(SRCS:.c=.d)
DEPSB = $(SRCSB:.c=.d)ls -

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJS) $(DEPS)

-include $(DEPS) $(DEPSB)

all: $(NAME)

bonus:
	$(CC) $(CFLAGS) -c $(SRCS) $(SRCSB) -I $(HEADERS)
	ar rcs $(NAME) $(OBJSBONUS) $(DEPSB)
#touch $@

clean:
	rm -f $(OBJS) $(OBJSBONUS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = fclean clean all re bonus

#mirar MMD y MD
