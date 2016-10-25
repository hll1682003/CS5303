#include "Header.h"
using namespace std;

class containers {
private:
	std::vector <int> fibovector;
	int fiboarray[20];
	std::list <int> fibolist;
public:
	void fibogenerator(void);
	void showtable(void);
	containers();
};

containers::containers(void) {
	for (int i = 0; i < 20; i++) {
		fiboarray[i] = 0;
	}
}

void containers::fibogenerator(){
	fiboarray[0] = 0;
	fiboarray[1] = 1;
	for (int i = 2; i < 20; i++) {
		fiboarray[i] = fiboarray[i - 1] + fiboarray[i - 2];
	}
	for (int j = 0; j < 20; j++) {
		fibovector.push_back(fiboarray[j]);
		fibolist.push_back(fiboarray[j]);
	}
}

void containers::showtable() {
	std::cout << "Vector:\t";
	for (int i = 0; i < 20; i++) {
		cout << fibovector[i];
		if (i != 19) {
			cout << ",";
		}
	}
	cout << endl;
	std::cout << "Array:\t";
	for (int i = 0; i < 20; i++) {
		cout << fiboarray[i];
		if (i != 19) {
			cout << ",";
		}
	}
	cout << endl;
	std::cout << "List:\t";
	int listcount = 0;
	for (list<int>::iterator j = fibolist.begin(); j != fibolist.end(); j++) {
		cout << *j;
		listcount++;
		if (listcount<20){
			cout << ",";
		}
		
	}
}

int main() {
	containers fibonacci;
	fibonacci.fibogenerator();
	fibonacci.showtable();
}