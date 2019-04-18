# Fix the required object files and target name to match requirements.
OBJ=
TARGET=a1_n9998250

# Fix the directories to match your file organisation.
CC_FLAGS=-std=gnu99 -I../../CAB202/ZDK -Wall -Werror -g
LD_FLAGS=-L../../CAB202/ZDK -lzdk -lncurses -lm

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc $(OBJ) $(LD_FLAGS) -o $(TARGET)

%.o : %.c
	gcc -c $< $(CC_FLAGS)

clean:
	rm -f *.exe $(OBJ) $(TARGET)

rebuild: clean all