# Make file template. Replace sources as needed.
# If output is shared library add -no-pie to flags
# Lisa Miller
CXX=gcc
CXXFLAGS= -std=c99 -g -Wall -Wshadow -Wpedantic -Wvla -Werror
SOURCES=fib.c getdouble.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=fib

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ -lm

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.c.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<
