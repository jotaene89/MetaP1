csrc = $(wildcard *.c)
ccsrc = $(wildcard *.cpp)
obj = $(csrc:.c=.o) $(ccsrc:.cpp=.o)

CFLAGS = -lgsl -lgslcblas

p1: $(obj)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) p1 
