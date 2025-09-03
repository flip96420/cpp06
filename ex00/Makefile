# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 16:39:59 by pschmunk          #+#    #+#              #
#    Updated: 2025/09/02 20:17:32 by pschmunk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g #-std=c++98
RM = rm -rf

CPP_06 = scalar

CPP_06_SRC =	./main.cpp				\
				./convert.cpp			\
				./identify.cpp			\
				./ScalarConverter.cpp	\

CPP_06_OBJ = $(CPP_06_SRC:.cpp=.o)

all: $(CPP_06)

$(CPP_06): $(CPP_06_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_06_OBJ) $(LIBFT) -o scalar

clean:
	$(RM) $(CPP_06_OBJ)
fclean: clean
	$(RM) $(CPP_06)
re: fclean all

.PHONY : all clean fclean re