run: gcalc
	./gcalc

gcalc: main.o GradeCalculator.o
	g++ -o gcalc main.o GradeCalculator.o

main.o: main.cpp GradeCalculator.h
	g++ -c main.cpp

GradeCalculator.o: GradeCalculator.cpp GradeCalculator.h
	g++ -c GradeCalculator.cpp

clean:
	rm *.o gcalc