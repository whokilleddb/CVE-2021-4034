CC = gcc

EFLAGS = -Wall -Wextra -O2 -g -D_GNU_SOURCE
SFLAGS = --shared -fPIC 

TARGET=exploit
INCLUDE= include
SOURCE= src

all:
	$(CC) $(SOURCE)/$(TARGET).c -o $(TARGET) $(EFLAGS) -I $(INCLUDE) 
	$(CC) $(SOURCE)/$(TARGET)-so.c -o $(TARGET).so $(EFLAGS) $(SFLAGS) -I $(INCLUDE) 
clean: 
	$(RM) -rf .sus $(TARGET)* GCONV_PATH=.
