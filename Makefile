INC=/usr/include/boost
LIB=/usr/lib/x86_64-linux-gnu
CC=g++

SOURCES=$(shell find -type f -iname '*.cpp')
all: $(SOURCES:.cpp=)

# all: asio/deadline_timer/wait asio/deadline_timer/async_wait

asio/deadline_timer/wait: asio/deadline_timer/wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

asio/deadline_timer/async_wait: asio/deadline_timer/async_wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

conversion/lexical_cast: conversion/lexical_cast.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

filesystem/file_size: filesystem/file_size.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem

filesystem/tests: filesystem/tests.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem
