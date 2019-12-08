all:
	g++ -Wall -W -Wextra -lsimlib -lm main.cpp 

.PHONY: run

run:
	./a.out ${ARGS}

clean:
	rm -f a.out