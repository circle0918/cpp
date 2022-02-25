# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyuan <yyuan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/09 19:06:43 by yyuan             #+#    #+#              #
#    Updated: 2022/02/04 16:08:02 by yyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME     = Diamond

CC       = c++
# compiling flags here
CFLAGS   = -Wall -Wextra -Werror -std=c++98
#CFLAGS   = -Wall -Wextra -Werror

LINKER   = c++
# linking flags here
LFLAGS   = -Wall -Wextra -Werror -std=c++98
#LFLAGS   = -Wall -Wextra -Werror

# change these to proper directories where each file should be
SRCDIR   = .
OBJDIR   = obj
#BINDIR   = bin
BINDIR   = .

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(SRCDIR)/*.hpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEPS  := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.d)
INCLUDE = include
rm       = rm -f

all: $(BINDIR) $(OBJDIR) $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJECTS)
	@$(LINKER) $(OBJECTS) $(LFLAGS) -o $@
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@
	@echo "Compiled "$<" successfully!"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(BINDIR):
	@mkdir -p $(BINDIR)

clean:
	@$(rm) $(OBJECTS) $(DEPS)
	@$(rm) -r $(OBJDIR)
	@echo "Cleanup complete!"

fclean: clean
	@$(rm) $(BINDIR)/$(NAME)
	@echo "Executable removed!"

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re bonus 
