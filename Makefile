OUT	:= InfernoHero
VERSION	:= 0.0

	
##########################################
	#Linux
CC	:= g++
INCLUDE	:= include
SOURCE	:= src/*.cpp
LIBS	:= -lsfml-graphics -lsfml-window -lsfml-system
LIBSF	:= 
BUILD	:= build/


############################################
	#WINDOWS

WCC	:= x86_64-w64-mingw32-g++
WBUILD	:= Wbuild/

INCLUDE	:= include
SOURCE	:= src/*.cpp
LIBS	:= -lsfml-graphics -lsfml-window -lsfml-system
LIBSF	:=  

##########################################

make :
	$(CC) $(SOURCE) $(LIBS) -I$(INCLUDE) -o$(BUILD)$(OUT)

Windows :
	$(WCC) $(SOURCE) -L$(LIBSF) $(LIBS) -I$(INCLUDE) -o$(WBUILD)$(OUT)

run :
	$(BUILD)$(OUT)

clean:
	
