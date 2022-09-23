Square: main.o Square_Line_Eq.o input_output.o auxiliary_elements.o SquareTesting.o

main.o: main.cpp
	g++ main.cpp -c main.o

Square_Line_Eq: SquareTwsting.cpp
	g++ SquareTesting.cpp -c SquareTesting.o 

input_output.o: input_output.cpp
	g++ input_output.cpp -c input_output.o

auxiliary_elements: auxiliary_elements.cpp
	g++ auxiliary_elements.cpp -c auxiliary_elements.o

SquareTesting.o: SquareTesting.cpp
	g++ auxiliary_elements.cpp -c auxiliary_elements.o
	 
 

