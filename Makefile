INC=/usr/include/boost
LIB=/usr/lib/x86_64-linux-gnu
CC=g++ -Wall -Werror


SOURCES=$(shell find -type f -iname '*.cpp')
all: $(SOURCES:.cpp=)

# all: asio/deadline_timer/wait asio/deadline_timer/async_wait

asio/deadline_timer/wait: asio/deadline_timer/wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

asio/deadline_timer/async_wait: asio/deadline_timer/async_wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

bind/simple: bind/simple.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

conversion/lexical_cast: conversion/lexical_cast.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

filesystem/file_size: filesystem/file_size.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem

filesystem/tests: filesystem/tests.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem

function/function: function/function.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

function/member_function: function/member_function.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

thread/call_once: thread/call_once.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_thread

variant/simple: variant/simple.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@
