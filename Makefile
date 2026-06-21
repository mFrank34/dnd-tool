CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic
OBJS = app.o menu.o

.PHONY : all check 

all : dnd-tool

dnd-tool: src/main.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

app.o: src/app.cpp src/app.h
	$(CXX) $(CXXFLAGS) -c $<

menu.o: src/menu.cpp src/menu.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) *.o dnd-tool 
