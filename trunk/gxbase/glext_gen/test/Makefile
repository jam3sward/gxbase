obj = test.o ../glexfplib.o ../glexfp.o
bin = test

CXX = g++
CXXFLAGS = -pedantic -Wall -g -I.. -I../GL
LDFLAGS = -lGL -lglut

$(bin): $(obj)
	$(CXX) -o $@ $(obj) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) $(bin)
