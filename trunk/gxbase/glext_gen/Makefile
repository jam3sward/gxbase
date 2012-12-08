obj = glext_gen.o
bin = glext_gen

CXX = g++
CXXFLAGS = -pedantic -Wall -g -IGL -Ilinux -I../src
LDFLAGS = -lGL -lX11

$(bin): $(obj)
	$(CXX) -o $@ $(obj) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) $(bin)
