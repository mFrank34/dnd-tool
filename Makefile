CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic
OBJs = app.o menu.o

.PHONY : all check 

all : dnd-tool

dnd-tool: src/main.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

app.o: src/app.cpp src/app.h
	$(CXX) $(CXXFLAGS) -c $<

menu.o: src/menu.cpp src/menu.h
	$(CXX) $(CXXFLAGS) -c $<

check: check

check: tests/tests.cpp $(OBJs)
	$(CXX) $(CXXFLAGS) -I tests/ -o check $^

clean:
	$(RM) *.o dnd-tool check 
