# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -I./include

# Directories
SRCDIR := src
INCDIR := include
BUILDDIR := build
TARGET := program

# Files
SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

-include $(DEPS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -MMD -MP -c -o $@ $<

clean:
	rm -rf $(BUILDDIR) $(TARGET)
	


# IDIR = src
# CC=gcc
# CFLAGS=-I$(IDIR)

# ODIR=obj
# # LDIR =../home/roopali_chauhan/Puresoftware/linkedlist/src

# LIBS=-lm

# _DEPS = header.h
# DEPS = $(pathsubst %,$(IDIR)/%,$(_DEPS))

# _OBJ = insert.o delete.o display.o main.obj
# OBJ = $(pathsubst %,$(ODIR)/%,$(_OBJ))

# $(ODIR)/%.o: %.c $(DEPS)
# 	$(CC) -c -o $@ $< $(CFLAGS)

# final: $(OBJ)
# 	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# .PHONY: clean

# clean:
# 	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~



# final: main.o delete.o insert.o display.o
# 	gcc main.o delete.o insert.o display.o -o final
# main.o: main.c
# 	gcc -c main.c
# delete.o: delete.c header.h
# 	gcc -c delete.c
# insert.o: insert.c header.h
# 	gcc -c insert.c 
# display.o: display.c header.h
# 	gcc -c display.c
# clean:
# 	rm *.o final
