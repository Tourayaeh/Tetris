CXX = g++
FLAGS = -g  -std=c++11 
LIBFLAGS =  -lsfml-window -lsfml-graphics -lsfml-system  -lsfml-audio

SRC = App.cpp I.cpp J.cpp L.cpp O.cpp Z.cpp S.cpp T.cpp Board.cpp Game.cpp Screen.cpp Tetromino.cpp
OBJDIR = ./obj
OBJ = $(OBJDIR)/App.o $(OBJDIR)/I.o $(OBJDIR)/J.o $(OBJDIR)/L.o $(OBJDIR)/O.o $(OBJDIR)/Z.o $(OBJDIR)/S.o $(OBJDIR)/T.o $(OBJDIR)/Game.o $(OBJDIR)/Board.o $(OBJDIR)/Screen.o $(OBJDIR)/Tetromino.o
EXEC = tetris.exe

all: $(EXEC)

tetris.exe : $(OBJ)
	$(CXX) $(FLAGS) -o $@ $^ $(LIBFLAGS)

$(OBJDIR)/%.o: %.cpp
	$(CXX) $(FLAGS) -o $@ -c $<

.depend :
	g++ -MM $(SRC) > $@

-include .depend

clean:
	rm -f $(OBJ)
	rm -f $(EXEC)

.PHONY: clean all

