# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 18:52:21 by sngantch          #+#    #+#              #
#    Updated: 2024/07/19 18:52:22 by sngantch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	rush-01
HDRS	=	rush01.h

SRCS	=	main.c \
			rush01.c \
			validator.c \
			initializator.c \
			parser.c \
			resolver.c \
			checker.c \
			utils.c

CMPL	=	cc
FLGS	=	-Wall -Wextra -Werror

DEFARG	=	"1 2 3 3 3 3 2 1 1 2 3 3 3 3 2 1"

all: $(NAME)

$(NAME):
	$(CMPL) $(FLGS) $(SRCS) -o $(NAME)

run: all
	@./$(NAME) $(DEFARG)

clean:
	rm $(NAME)

re: clean all

.PHONY: all run clean re

# Defines the compilation and build process for the project.
# Specifies the compiler (cc) and compilation flags (-Wall -Wextra -Werror).
# Defines targets:

# all: Default target to build the executable.
# clean: Removes the compiled executable.
# re: Combines clean and all to rebuild the project.
# run: Compiles and runs the program with a default argument.


# Lists all source files and headers used in the project.
# Provides a standardized way to compile and manage the project.