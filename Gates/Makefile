output: test.o Nand.o Not.o And.o Or.o Xor.o Mux.o DMux.o Not16.o And16.o Or16.o Mux16.o Or8Way.o Mux4Way16.o Mux8Way16.o DMux4Way.o DMux8Way.o And16Way.o HalfAdder.o
	g++ test.o Nand.o Not.o And.o Or.o Xor.o Mux.o DMux.o Not16.o And16.o Or16.o Mux16.o Or8Way.o Mux4Way16.o Mux8Way16.o DMux4Way.o DMux8Way.o And16Way.o -o test

test.o: test.cpp
	g++ -c test.cpp

Nand.o: Nand.cpp
	g++ -c Nand.cpp

Not.o: Not.cpp
	g++ -c Not.cpp

And.o: And.cpp
	g++ -c And.cpp

Or.o: Or.cpp
	g++ -c Or.cpp

Xor.o: Xor.cpp
	g++ -c Xor.cpp

Mux.o: Mux.cpp
	g++ -c Mux.cpp

DMux.o: DMux.cpp
	g++ -c DMux.cpp

Not16.o: Not16.cpp
	g++ -c Not16.cpp

And16.o: And16.cpp
	g++ -c And16.cpp

Or16.o: Or16.cpp
	g++ -c Or16.cpp

Mux16.o: Mux16.cpp
	g++ -c Mux16.cpp

Or8Way.o: Or8Way.cpp
	g++ -c Or8Way.cpp

Mux4Way16.o: Mux4Way16.cpp
	g++ -c Mux4Way16.cpp

Mux8Way16.o: Mux8Way16.cpp
	g++ -c Mux8Way16.cpp

DMux4Way.o: DMux4Way.cpp
	g++ -c DMux4Way.cpp
	
DMux8Way.o: DMux8Way.cpp
	g++ -c DMux8Way.cpp

And16Way.o: And16Way.cpp
	g++ -c And16Way.cpp

HalfAdder.o: /home/a/c-projects/HackComputer/Adders/HalfAdder.cpp
	g++ -c /home/a/c-projects/HackComputer/Adders/HalfAdder.cpp
	
clean:
	rm *.o test

