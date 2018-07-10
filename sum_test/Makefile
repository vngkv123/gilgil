all: sum_test		# requirement

sum.o : sum.h sum.cpp
	g++ -c -o sum.o sum.cpp

main.o : sum.h main.cpp
	g++ -c -o main.o main.cpp

sum_test : main.o sum.o
	g++ -o sum_test main.o sum.o

# target : dependencies
# 	command

#reverselab@ubuntu:~/Desktop/BestOfBest/gilgil/sum_test$ g++ -c -o main.o main.cpp
#reverselab@ubuntu:~/Desktop/BestOfBest/gilgil/sum_test$ g++ -c -o sum.o sum.cpp
#reverselab@ubuntu:~/Desktop/BestOfBest/gilgil/sum_test$ g++ -o sum_test main.o sum.o

clean:
	rm -f *.o
	rm -f sum_test


