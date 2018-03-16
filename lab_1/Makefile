zad1.out: zad1.o Skarb.o Skrzynia.o
	clang++ -o zad1.out zad1.o Skarb.o Skrzynia.o
zad1.o: zad1.cpp Skarb.h Skrzynia.h
	clang++ -c -o zad1.o zad1.cpp 
Skrzynia.o: Skrzynia.cpp Skrzynia.h Skarb.h
	clang++ -c -o Skrzynia.o Skrzynia.cpp  
Skarb.o: Skarb.h Skarb.cpp
	clang++ -c -o Skarb.o Skarb.cpp
