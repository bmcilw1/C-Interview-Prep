CXX=g++
DEBUG=-g
CPPFLAGS=-c -Wall $(DEBUG)
LFLAGS=-Wall $(DEBUG)
EXE=graphs.out
OBJS=graphs.o AdjGraph.o

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o $(EXE)

graphs.o: graphs.cpp
	$(CXX) $(CPPFLAGS) graphs.cpp

AdjGraph.o: AdjGraph.cpp AdjGraph.h
	$(CXX) $(CPPFLAGS) AdjGraph.cpp

clean:
	$(RM) *.o *~ *.out $(EXE)
