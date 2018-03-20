z1.out: complex.o z1.o
	clang++ -o z1.out complex.o z1.o
z1.o: z1.cpp complex.h
	clang++ -c -o z1.o z1.cpp
complex.o: complex.h complex.cpp
	clang++ -c -o complex.o complex.cpp
