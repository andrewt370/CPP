CFLAGS = -O
CC = g++
game: main.o Board.o Tile.o
	$(CC) $(CFLAGS) -o play main.o Board.o Tile.o
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
Board.o: Board.cpp
	$(CC) $(CFLAGS) -c Board.cpp
Tile.o: Tile.cpp
	$(CC) $(CFLAGS) -c Tile.cpp
clean:
	rm -f core *.o
