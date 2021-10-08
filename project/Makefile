MonopolyGame: Player.o Tile.o Property.o main.o
	clang++ Player.o Tile.o Property.o main.o -o MonopolyGame

Player.o: Player.cpp
	clang++ -c Player.cpp

Tile.o: Tile.cpp
	clang++ -c Tile.cpp

Property.o: Property.cpp
	clang++ -c Property.cpp

.PHONY: deploy test clean

TEST_DIR=test

INCLUDE=\
	-I$(TEST_DIR)

SRCS=\
	$(TEST_DIR)/test_main.cpp\
	$/player.cpp

OBJS=$(SRCS:.cpp=.o)

test: $(OBJS)
	@clang++ $(INCLUDES) -o run_test $(OBJS) $(TEST_SRCS)
	@./run_test

%.o : %.cpp
	clang++ -c $< -o $@

clean:
	rm *.o MonopolyGame