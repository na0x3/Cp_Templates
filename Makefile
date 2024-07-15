

a : test.o 
	g++ test.o -o make

main.o: test.cpp
	g++ -c test.cpp

clean:
		rm -rf *.o make

