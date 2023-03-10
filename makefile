
#OBJS specifies which files to compile as part of the project
OBJS = main.cpp init.cpp audio.cpp event.cpp level1.cpp level2.cpp level3.cpp LoadMedia.cpp RectLoad.cpp replay2.cpp startMenu.cpp replay1.cpp
#loadTex.cpp audio.cpp init.cpp level2.cpp event.cpp loadRect.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = r

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME) && ./$(OBJ_NAME)