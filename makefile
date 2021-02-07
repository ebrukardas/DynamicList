all: run

run: dynamicList.cpp main.cpp
	g++ -o exe dynamicList.cpp main.cpp
	# valgrind ./exe

clean:
	rm -f exe