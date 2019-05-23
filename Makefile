# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:42:11 by tholzheu          #+#    #+#              #
#    Updated: 2019/05/23 16:34:55 by tholzheu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
RED = \033[1;32m
YELLOW = \033[1;33m
ORANGE = \033[1;31m
BLUE = \033[1;36m
GREY = \033[1;30m
NC = \033[0m

NAME = libft.a

IDIR = includes

HEADER = $(addprefix $(IDIR)/, libft.h)

CC = gcc

FLAGS = -Wall -Werror -Wextra -I$(IDIR)

ODIR = objs

SDIR = srcs

OBJS = $(addprefix $(ODIR)/, ft_memset.o \
	   ft_bzero.o \
	   ft_memcpy.o \
	   ft_memccpy.o \
	   ft_memmove.o \
	   ft_memchr.o \
	   ft_memcmp.o \
	   ft_strlen.o \
	   ft_strdup.o \
	   ft_strcpy.o \
	   ft_strncpy.o \
	   ft_strcat.o \
	   ft_strncat.o \
	   ft_strlcat.o \
	   ft_strchr.o \
	   ft_strrchr.o \
	   ft_strstr.o \
	   ft_strnstr.o \
	   ft_strcmp.o \
	   ft_strncmp.o \
	   ft_atoi.o \
	   ft_isalpha.o \
	   ft_isdigit.o \
	   ft_isalnum.o \
	   ft_isascii.o \
	   ft_isprint.o \
	   ft_toupper.o \
	   ft_tolower.o \
	   ft_memalloc.o \
	   ft_memdel.o \
	   ft_strnew.o \
	   ft_strdel.o \
	   ft_strclr.o \
	   ft_striter.o \
	   ft_striteri.o \
	   ft_strmap.o \
	   ft_strmapi.o \
	   ft_strequ.o \
	   ft_strnequ.o \
	   ft_strsub.o \
	   ft_strjoin.o \
	   ft_strtrim.o \
	   ft_strsplit.o \
	   ft_itoa.o \
	   ft_putchar.o \
	   ft_putstr.o \
	   ft_putendl.o \
	   ft_putnbr.o \
	   ft_putchar_fd.o \
	   ft_putstr_fd.o \
	   ft_putendl_fd.o \
	   ft_putnbr_fd.o \
	   lib_lstnew.o \
	   lib_lstdel.o \
	   lib_lstadd_front.o \
	   itoa_base.o \
	   len_n_word.o \
	   size_of_nb.o \
	   lib_lstadd_back.o \
	   lib_lstprint.o \
	   lib_lstsize.o \
	   get_next_line.o \
	   count_words.o \
	   ft_isnum.o)

$(ODIR)/%.o: $(SDIR)/%.c $(HEADERS)
	@echo "$(ORANGE)Compiling $(NC)($(YELLOW)$(NAME)$(NC)) > $(BLUE)$<$(NC)"
	@mkdir -p objs
	@$(CC) -c -o $@ $< $(FLAGS)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "$(GREEN)DONE! -->$(YELLOW) $(NAME)$(NC)"

all: $(NAME) 

clean:
	@echo "$(GREY)Cleaning $(RED)Objects$(NC)"
	@/bin/rm -f $(OBJS)
	@/bin/rm -rf objs

fclean: clean
	@echo "$(GREY)Cleaning $(RED)Executables$(NC)"
	@/bin/rm -rf $(NAME) *.out* *.dSYM

re: fclean all

.PHONY: CMP all clean fclean re
