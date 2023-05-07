output: test.o Nand.o Not.o And.o Or.o Xor.o Mux.o DMux.o Not16.o And16.o Or16.o Mux16.o Or8Way.o Mux4Way16.o Mux8Way16.o DMux4Way.o DMux8Way.o And16Way.o HalfAdder.o FullAdder.o Add16.o Inc16.o ALU.o ALUComp.o
	g++ test.o Nand.o Not.o And.o Or.o Xor.o Mux.o DMux.o Not16.o And16.o Or16.o Mux16.o Or8Way.o Mux4Way16.o Mux8Way16.o DMux4Way.o DMux8Way.o And16Way.o HalfAdder.o FullAdder.o Add16.o Inc16.o ALU.o ALUComp.o -o test

test.o: test.cpp
	g++ -c test.cpp

Nand.o: /home/a/c-projects/HackComputer/Gates/Nand.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Nand.cpp

Not.o: /home/a/c-projects/HackComputer/Gates/Not.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Not.cpp

And.o: /home/a/c-projects/HackComputer/Gates/And.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/And.cpp

Or.o: /home/a/c-projects/HackComputer/Gates/Or.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Or.cpp

Xor.o: /home/a/c-projects/HackComputer/Gates/Xor.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Xor.cpp

Mux.o: /home/a/c-projects/HackComputer/Gates/Mux.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Mux.cpp

DMux.o: /home/a/c-projects/HackComputer/Gates/DMux.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/DMux.cpp

Not16.o: /home/a/c-projects/HackComputer/Gates/Not16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Not16.cpp

And16.o: /home/a/c-projects/HackComputer/Gates/And16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/And16.cpp

Or16.o: /home/a/c-projects/HackComputer/Gates/Or16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Or16.cpp

Mux16.o: /home/a/c-projects/HackComputer/Gates/Mux16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Mux16.cpp

Or8Way.o: /home/a/c-projects/HackComputer/Gates/Or8Way.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Or8Way.cpp

Mux4Way16.o: /home/a/c-projects/HackComputer/Gates/Mux4Way16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Mux4Way16.cpp

Mux8Way16.o: /home/a/c-projects/HackComputer/Gates/Mux8Way16.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/Mux8Way16.cpp

DMux4Way.o: /home/a/c-projects/HackComputer/Gates/DMux4Way.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/DMux4Way.cpp
	
DMux8Way.o: /home/a/c-projects/HackComputer/Gates/DMux8Way.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/DMux8Way.cpp

And16Way.o: /home/a/c-projects/HackComputer/Gates/And16Way.cpp
	g++ -c /home/a/c-projects/HackComputer/Gates/And16Way.cpp

HalfAdder.o: /home/a/c-projects/HackComputer/Adders/HalfAdder.cpp
	g++ -c /home/a/c-projects/HackComputer/Adders/HalfAdder.cpp

FullAdder.o: /home/a/c-projects/HackComputer/Adders/FullAdder.cpp
	g++ -c /home/a/c-projects/HackComputer/Adders/FullAdder.cpp

Add16.o: /home/a/c-projects/HackComputer/Adders/Add16.cpp
	g++ -c /home/a/c-projects/HackComputer/Adders/Add16.cpp

Inc16.o: /home/a/c-projects/HackComputer/Adders/Inc16.cpp
	g++ -c /home/a/c-projects/HackComputer/Adders/Inc16.cpp

ALU.o: /home/a/c-projects/HackComputer/ALU/ALU.cpp
	g++ -c /home/a/c-projects/HackComputer/ALU/ALU.cpp

ALUComp.o: /home/a/c-projects/HackComputer/ALU/ALUComp.cpp
	g++ -c /home/a/c-projects/HackComputer/ALU/ALUComp.cpp
	
clean:
	rm *.o test

