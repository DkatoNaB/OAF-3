SRC = Field/LuckField.cpp
SRC += Field/ServiceField.cpp
SRC += Field/RealEstateField.cpp
#SRC += Player/GreedyPlayer.cpp
#SRC += Player/GreedyPlayer.cpp
SRC += main.cpp

#dependencies
DEP = Player/GreedyPlayer.h
DEP += Field/Field.h

# object list
OBJS = $(SRC:.cpp=.o)


CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra

#build
all: $(OBJS) 
	$(CXX) $(CXXFLAGS) $(DEP) $(OBJS) Field/Field.h -o Capitaly

#build rules 
%.o: %.cpp %.h
	$(CXX) -c $(CXXFLAGS) $< -o $@

#clean
clean:
	DEL /F /S *.o
	DEL Capitaly.exe
	DEL out.txt
	DEL err.txt


help:
	@echo "all		->	build all"
	@echo "clean		->	delete .o and executeable"
	@echo "save 		->	save output to out.txt"
	@echo "saveERR	->	save errors to err.txt"