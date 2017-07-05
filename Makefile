INC=/usr/include/boost
LIB=/usr/lib/x86_64-linux-gnu
CC=g++ -std=c++11 -Wall -Werror


SOURCES=$(shell find -type f -iname '*.cpp')

EXES=$(SOURCES:./%.cpp=bin/%)
#$(info $$EXE_DIRS_UNIQUE is $(EXE_DIRS_UNIQUE))

EXE_DIRS=$(dir $(EXES))
# $(info $$EXE_DIRS is $(EXE_DIRS))
#
EXE_DIRS_UNIQUE=$(shell for DIR in $(EXE_DIRS); do echo $$DIR; done | sort | uniq)
# $(info $$EXES is $(EXES))

$(shell for DIR in $(EXE_DIRS_UNIQUE); do if [ ! -d $$DIR ]; then mkdir -p $$DIR; fi; done)

all: $(EXES)

$(EXE_DIRS_UNIQUE):
	@mkdir -p $?

# all: asio/deadline_timer/wait asio/deadline_timer/async_wait

bin/asio/deadline_timer/wait: asio/deadline_timer/wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

bin/asio/deadline_timer/async_wait: asio/deadline_timer/async_wait.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

bin/bad_function_call: bad_function_call.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/bind/simple: bind/simple.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system

bin/filesystem/file_size: filesystem/file_size.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem

bin/filesystem/tests: filesystem/tests.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_filesystem

bin/function/clear: function/clear.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/function/empty: function/empty.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/function/function: function/function.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/function/member_function: function/member_function.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/lexical_cast: lexical_cast.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

bin/thread/call_once: thread/call_once.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@ -lboost_system -lboost_thread

bin/variant/simple: variant/simple.cpp
	$(CC) -I$(INC) -L$(LIB)  $< -o $@

clean:
	@rm -rf bin
