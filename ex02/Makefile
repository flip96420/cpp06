# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phillymilly <phillymilly@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 16:39:59 by pschmunk          #+#    #+#              #
#    Updated: 2025/09/05 19:31:17 by phillymilly      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_06 = serializer

CPP_06_SRC =	./Serializer.cpp	\
				./main.cpp			\

CPP_06_OBJ = $(CPP_06_SRC:.cpp=.o)

all: $(CPP_06)

$(CPP_06): $(CPP_06_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_06_OBJ) $(LIBFT) -o serializer

clean:
	$(RM) $(CPP_06_OBJ)
fclean: clean
	$(RM) $(CPP_06)
re: fclean all

.PHONY : all clean fclean re