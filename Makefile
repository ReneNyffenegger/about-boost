
# SOURCES=$(shell find -type f -iname '*.cpp')
# 
# all: $(SOURCES:.cpp=)

INC=/usr/include/boost
LIB=/usr/lib/x86_64-linux-gnu
CC=g++

all: asio/deadline_timer/wait asio/deadline_timer/async_wait

asio/deadline_timer/wait: asio/deadline_timer/wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

asio/deadline_timer/async_wait: asio/deadline_timer/async_wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system
