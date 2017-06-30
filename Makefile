
# SOURCES=$(shell find -type f -iname '*.cpp')
# 
# all: $(SOURCES:.cpp=)

INC=/usr/include/boost
LIB=/usr/lib/x86_64-linux-gnu
CC=g++

asio/deadline_timer: asio/deadline_timer.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system
