# Makefile to make multiple programs
# Lisa Miller 1/17/2022
# to make inputchar enter: make ic
# to make inputdouble enter: make id
# ***********************************
# Variables for compiler
CXX=gcc
CXXFLAGS= -std=c99 -g -Wall -Wshadow -Wpedantic -Wvla -Werror
# add some standard arguments to gcc
# -std=c99 means to use the C99 version of the C language.
# -g means to enable gdb by storing information such as your variable names
#   in the executable
#  -Wall, -Wshadow, -Wpedantic, Wvla, -Werror turn on extra warnings to let
#   you know about anomolies in your code might indicate a bug.
#   **********************************
#   Variables for source files
id_SRC=inputdouble.c getdouble.c
ic_SRC=inputchar.c

# Variables for compilig inputdouble
id_OBJ=$(id_SRC:.c=.o)
id_EXE=inputdouble

# Variables for compiling inputchar
ic_OBJ=$(ic_SRC:.c=.o)
ic_EXE=inputchar

# Command to compile inputdouble
id: $(id_SRC) $(id_EXE)

$(id_EXE): $(id_OBJ)
	$(CXX) $(id_OBJ) -o $@ 
#add -lm after @ to include c math library

# Command to compile input char
ic: $(ic_SRC) $(ic_EXE)

$(ic_EXE): $(ic_OBJ)
	$(CXX) $(ic_OBJ) -o $@

# Command to remove .o and executable files
clean:
	rm -f $(id_OBJ) $(ic_OBJ) $(id_EXE) $(ic_EXE)

# Command to setup compiler with flags
.c.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<

