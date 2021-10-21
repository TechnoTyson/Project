TEST_DIR=test
LIB_DIR=lib

INCLUDES=\
	-I$(LIB_DIR)\
	-I$(TEST_DIR)\

TAGS=\
	$(-std=c++11)

SRCS=\
	$(LIB_DIR)/Tile.cpp\
	$(LIB_DIR)/Property.cpp\
	$(LIB_DIR)/Player.cpp\
	$(LIB_DIR)/main.cpp\
	$(LIB_DIR)/generate_board.cpp\
	$(LIB_DIR)/dice.cpp\
	$(LIB_DIR)/Tax.cpp\
	$(LIB_DIR)/Go.cpp\
	$(LIB_DIR)/Go_to_gaol.cpp\
	$(LIB_DIR)/Gaol.cpp\
	$(LIB_DIR)/Free_parking.cpp\
	$(LIB_DIR)/Chance.cpp\
	$(LIB_DIR)/uppercase.cpp\

OBJS=$(SRCS:.cpp=.o)

MonopolyGame: $(OBJS)
	@clang++ $(INCLUDES) $(TAGS) -o MonopolyGame $(OBJS)
	@./MonopolyGame

TEST_SRCS=\
	$(TEST_DIR)/test_main.cpp\
	$(LIB_DIR)/Tile.cpp\
	$(LIB_DIR)/Property.cpp\
	$(LIB_DIR)/Player.cpp\
	$(LIB_DIR)/generate_board.cpp\
	$(LIB_DIR)/dice.cpp\
	$(LIB_DIR)/Tax.cpp\
	$(LIB_DIR)/Go.cpp\
	$(LIB_DIR)/Go_to_gaol.cpp\
	$(LIB_DIR)/Gaol.cpp\
	$(LIB_DIR)/Free_parking.cpp\
	$(LIB_DIR)/Chance.cpp\
	$(LIB_DIR)/uppercase.cpp\

TEST_OBJS=$(TEST_SRCS:.cpp=.o)

test: $(TEST_OBJS)
	@clang++ $(INCLUDES) $(TAGS) -o run_test $(TEST_OBJS) $(TEST_SRC)
	@./run_test

%.o : %.cpp
	clang++ -c $< -o $@

clean_test:
	rm $(TEST_OBJS)

clean:
	rm $(OBJS)