CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = $(filter-out $(CURDIR)/test.cpp, $(wildcard $(CURDIR)/*.cpp))
TEST =  $(wildcard $(CURDIR)/test.cpp)
OBJS = $(SRCS:.cpp=.o)
OBJT = $(TEST:.cpp=.o)
EXEC = demo.exe

.PHONY: all clean test

all: $(EXEC)

test: $(OBJT)
	$(CXX) $(CXXFLAGS) $(OBJT) -o $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS) $(OBJT)
