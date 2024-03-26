CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = $(wildcard $(CURDIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)
EXEC = demo.exe

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)
