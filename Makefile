CPP = g++
COMPILE_OUTPUT = a.out

input:
	$(CPP) input.cpp -o $(COMPILE_OUTPUT)

guessing_game:
	$(CPP) guessing_game.cpp -o $(COMPILE_OUTPUT)

gcd:
	$(CPP) gcd.cpp -o $(COMPILE_OUTPUT)

run:
	./$(COMPILE_OUTPUT)

clean:
	rm -f $(COMPILE_OUTPUT)
