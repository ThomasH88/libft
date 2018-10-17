# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:42:11 by tholzheu          #+#    #+#              #
#    Updated: 2018/10/17 15:16:16 by tholzheu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_memset.c \
./ft_bzero.c \
./ft_memcpy.c \
./ft_memccpy.c \
./ft_memmove.c \
./ft_memchr.c \
./ft_memcmp.c \
./ft_strlen.c \
./ft_strdup.c \
./ft_strcpy.c \
./ft_strncpy.c \
./ft_strcat.c \
./ft_strncat.c \
./ft_strlcat.c \
./ft_strchr.c \
./ft_strrchr.c \
./ft_strstr.c \
./ft_strnstr.c \
./ft_strcmp.c \
./ft_strncmp.c \
./ft_atoi.c \
./ft_isalpha.c \
./ft_isdigit.c \
./ft_isalnum.c \
./ft_isascii.c \
./ft_isprint.c \
./ft_toupper.c \
./ft_tolower.c \
./ft_memalloc.c \
./ft_memdel.c \
./ft_strnew.c \
./ft_strdel.c \
./ft_strclr.c \
./ft_striter.c \
./ft_striteri.c \
./ft_strmap.c \
./ft_strmapi.c \
./ft_strequ.c \
./ft_strnequ.c \
./ft_strsub.c \
./ft_strjoin.c \
./ft_strtrim.c \
./ft_strsplit.c \
./ft_itoa.c \
./ft_putchar.c \
./ft_putstr.c \
./ft_putendl.c \
./ft_putnbr.c \
./ft_putchar_fd.c \
./ft_putstr_fd.c \
./ft_putendl_fd.c \
./ft_putnbr_fd.c \
./lstnew.c \
./lstdel.c \
./lstadd_front.c \
./itoa_base.c \
./len_n_word.c \
./size_of_nb.c \
./lstadd_back.c \
./lstprint.c \
./lstsize.c \
./get_next_line.c \
./count_words.c

SRCO = $(SRCS:%.c=%.o)

$(NAME):
	@echo Compiling Libft...
	@gcc $(FLAGS) $(SRCS) -I=$(HEADER)
	@ar rcs $(NAME) $(SRCO)
all: $(NAME)

run: re
	@echo Compiling with main...
	@gcc main*.c -L. -lft -I=$(HEADER)
clean:
	@echo Cleaning .o files...
	@/bin/rm -f $(SRCO)

fclean: clean
	@echo Cleaning library and executables...
	@/bin/rm -rf $(NAME) *.out*

re: fclean all

git: fclean
	@echo Gitting...
	@git add .
	@git reset HEAD *main*
	@git status
	@git commit -m "update"
	@git push
