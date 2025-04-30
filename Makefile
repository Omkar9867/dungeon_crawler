CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRC = src/main.cpp src/Game.cpp src/Player.cpp src/Map.cpp
OBJ = $(SRC:.cpp=.o)
EXE = bin/game

all: $(EXE)

$(EXE): $(OBJ)
    $(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
    rm -f $(OBJ) $(EXE)