obj = main.o
bin = test1
gxbase = ../../../libgxbase.a

CXX = g++
CXXFLAGS = -pedantic -Wall -g -I../../../src
LDFLAGS = $(gxbase) -lGL -lGLU -lX11

$(bin): $(obj) $(gxbase)
	$(CXX) -o $@ $(obj) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) $(bin)
