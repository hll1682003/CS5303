#pragma once
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<string>

class containers {						//definition of class containers
private:
	std::vector <int> fibovector;
	int fiboarray[20];
	std::list <int> fibolist;
public:
	void fibogenerator(void);
	void showtable(void);
	containers();
	~containers() {};
};


class PointerKing {
private:
	std::string *charpointer;
	int *intpointer;
	double *doublepointer;
	std::string inputstring[2] = { "I am the pointer Kiiiing!","It is glorious to be the Pointer King!" };
	int number[2] = { -2016,2017 };
	double doublenumber[2] = { 81.5,32.1 };
public:
	PointerKing();
	~PointerKing() {};
	void second_update(int*, double *, std::string *);
	void third_output();
	void fourth_callabove();

};
void menu();					//prototyping for menu function
void fibonacci();				//prototyping for fibonacci function
