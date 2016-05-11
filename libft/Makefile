# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnematan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/13 15:18:33 by dnematan          #+#    #+#              #
#    Updated: 2016/05/10 18:00:40 by dnematan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a

CC = gcc -Wall -Werror -Wextra

SRC = ft_strcmp.c\
	  ft_strlen.c\
	  ft_strcpy.c\
	  ft_strncmp.c\
	  ft_strncpy.c

O_FILES = ft_strcpy.o\
		  ft_strncmp.o\
		  ft_strcmp.o\
		  ft_strlen.o\
		  ft_strncpy.o

all: $(TARGET)

$(TARGET):
	$(CC) -c $(SRC)
	ar rc $(TARGET) $(O_FILES)
	$(CC) main.c -L. -lft

clean: 
	rm -f $(O_FILES)

fclean: clean 
	rm -f $(TARGET)

re: fclean all
