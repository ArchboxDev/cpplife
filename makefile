#This original(non-customized, aka the place I copied and pasted it from) is from Lazy Foo's SDL tutorial

#OBJS specifies which files to compile as part of the project
OBJS = main.cpp class/human.cpp class/sim.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -l

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = cpplife

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) -o $(OBJ_NAME) $(OBJS) $(COMPILER_FLAGS)