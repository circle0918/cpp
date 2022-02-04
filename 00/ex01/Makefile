# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyuan <yyuan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 19:06:43 by yyuan             #+#    #+#              #
#    Updated: 2022/01/30 00:04:05 by yyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME     = PhoneBook

CC       = clang++
# compiling flags here
CFLAGS   = -Wall -Wextra -Werror
#CFLAGS   = -Wall -Wextra -Werror

LINKER   = clang++
# linking flags here
LFLAGS   = -Wall -Wextra -Werror
#LFLAGS   = -Wall -Wextra -Werror

# change these to proper directories where each file should be
SRCDIR   = .
OBJDIR   = obj
#BINDIR   = bin
BINDIR   = .

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(SRCDIR)/*.hpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm       = rm -f

all: $(BINDIR) $(OBJDIR) $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJECTS)
	@$(LINKER) $(OBJECTS) $(LFLAGS) -o $@
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(BINDIR):
	@mkdir -p $(BINDIR)

clean:
	@$(rm) $(OBJECTS)
	@$(rm) -r $(OBJDIR)
	@echo "Cleanup complete!"

fclean: clean
	@$(rm) $(BINDIR)/$(NAME)
	@echo "Executable removed!"

re: fclean all

.PHONY: all clean fclean re bonus 
