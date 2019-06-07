CXX=g++
CXXFLAGS=-Wall -Werror -pedantic -std=c++17
all: a b c
a:
	${CXX} ${FLAGS} algA.cpp -o algA
b:
	${CXX} ${FLAGS} algB.cpp -o algB
c:
	${CXX} ${FLAGS} algC.cpp -o algC

