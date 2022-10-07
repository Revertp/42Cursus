# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areverte <areverte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 18:10:23 by areverte          #+#    #+#              #
#    Updated: 2022/10/07 19:04:51 by areverte         ###   ########.fr        #
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
	ft_lstmap_bonus.c \

CFLAGS = -Wall -Werror -Wextra
OBJS =  ${SRCS:.c=.o}
OBJSBONUS = ${SRCSB:.c=.o}
HEADER = libft.h


RM = rm -Rf ..swp -o .ft_ -o

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME} :	${OBJS} ${HEADER}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS} ${OBJSBONUS} ${HEADER}
			ar rcs ${NAME} ${OBJS} ${OBJSBONUS}
			@touch $@
clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
			${RM} ${NAME} bonus

re:		fclean all

.PHONY = all clean fclean re bonus
