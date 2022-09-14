# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 00:50:04 by wwallas-          #+#    #+#              #
#    Updated: 2022/09/14 12:14:23 by wwallas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c      \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c    \
			ft_memcmp.c ft_memcpy.c ft_memcpy.c ft_memmove.c ft_memset.c    \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c   \
			ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c   \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
			ft_toupper.c ft_get_next_line.c free_ptr.c numb_house.c         \
			ft_is_int_nbr.c ft_array_len.c ft_array_dup.c ft_lstadd_back.c  \
			ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c     \
            ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS	 	=	$(patsubst %.c, objects/%.o, $(SRCS))
OBJS_DIR	=	objects

INCLUDES 	=	libft.h

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

RM			= 	rm -rf

NAME 		=	libft.a

$(OBJS_DIR)/%.o:	%.c
			$(CC) $(CFLAGS) -c $< -o $@ -I./

$(NAME):	$(OBJS_DIR) $(OBJS) $(INCLUDES)
				ar -rcs $@ $(OBJS)

all:		$(NAME)

$(OBJS_DIR):
				mkdir -p $@

clean:
			$(RM) $(OBJS_DIR)

fclean:		 clean
			$(RM) $(NAME)

re: 		fclean all

.PHONEY:	all bonus clean fclean re
