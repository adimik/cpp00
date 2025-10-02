# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: didimitr <didimitr@student.42luxembourg>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 12:40:18 by didimitr          #+#    #+#              #
#    Updated: 2025/09/30 16:10:00 by didimitr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = megaphone
CXX     = c++
CFLAG   = -Wall -Wextra -Werror
SRC     = megaphone.cpp
OBJ     = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAG) $(OBJ) -o $(NAME)

megaphone.o: megaphone.cpp
	$(CXX) $(CFLAG) -c megaphone.cpp -o megaphone.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all