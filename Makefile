CFLAGS=-Wall -g -m32

targets = main1 main2 main3 main4 main5 main6 main1_stdcall

all: $(targets)

run: $(targets)
	./run.sh

.PHONY: clean

clean:
	rm -f $(targets)
