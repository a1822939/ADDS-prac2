git:
	git add -A
	git commit -m "Working"
	git push

main:
	g++ -o main.out -std=c++11 -O2 -Wall *.cpp

clean:
	rm *.out