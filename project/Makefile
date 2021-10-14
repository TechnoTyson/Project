TEST_DIR=test
LIB_DIR=lib

INCLUDES=\
	-I$(LIB_DIR)\
	-I$(TEST_DIR)\

SRCS=\
	$(LIB_DIR)/Player.cpp\
	$(LIB_DIR)/Tile.cpp\
	$(LIB_DIR)/Property.cpp\
	$(LIB_DIR)/main.cpp\
	$(LIB_DIR)/generate_board.cpp\
	$(LIB_DIR)/Tax.cpp\
	$(LIB_DIR)/Go.cpp\
	$(LIB_DIR)/Go_to_gaol.cpp\
	$(LIB_DIR)/Gaol.cpp\
	$(LIB_DIR)/Free_parking.cpp\
	$(LIB_DIR)/Chance.cpp\

OBJS=$(SRCS:.cpp=.o)

MonopolyGame: $(OBJS)
	@clang++ $(INCLUDES) -o MonopolyGame $(OBJS)
	@./MonopolyGame

TEST_SRCS=\
	$(TEST_DIR)/test_main.cpp\
	$(LIB_DIR)/Player.cpp\
	$(LIB_DIR)/Tile.cpp\
	$(LIB_DIR)/Property.cpp\
	$(LIB_DIR)/dice.cpp\

TEST_OBJS=$(TEST_SRCS:.cpp=.o)

test: $(TEST_OBJS)
	@clang++ $(INCLUDES) -o run_test $(TEST_OBJS) $(TEST_SRC)
	@./run_test

%.o : %.cpp
	clang++ -c $< -o $@

clean:
	rm $(OBJS)
	rm $(TEST_OBJS)