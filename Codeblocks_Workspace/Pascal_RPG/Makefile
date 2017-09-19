CPPFLAGS=-Wall

HEADERS =
LIBS = -lsfml-window -lsfml-system -lsfml-graphics
INCLUDE = 
BIN=build

VPATH=${SRC_PATH}:Character:Map:Collision:Graphics

SRCS = main.cpp Entity.cpp Map.cpp MapLoader.cpp CollisionMarkerOnMap.cpp SpriteFactory.cpp Player.cpp CollisionDetection.cpp
OBJS = $(SRCS:.cpp=.o)

Debug: program

.cpp.o:
	g++ -Wall -c $<

program: $(OBJS)
	g++ -Wall $^ -o Pascal_RPG $(LIBS)

clean:
	-rm -f $(OBJS)
	-rm -f Pascal_RPG
