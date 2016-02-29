csrc = $(wildcard *.c ../*c)
ccsrc = $(wildcard *.cpp ../*cpp)
obj = $(csrc:.c=.o) $(ccsrc:.cpp=.o)

CFLAGS = -lgsl -lgslcblas

kp: $(obj)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) kp 
