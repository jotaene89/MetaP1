csrc = $(wildcard *.c ../*.c)
ccsrc = $(wildcard *.cpp ../*.cpp)
obj = $(csrc:.c=.o) $(ccsrc:.cpp=.o)

CFLAGS = -lgsl -lgslcblas

tsp: $(obj)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) tsp
