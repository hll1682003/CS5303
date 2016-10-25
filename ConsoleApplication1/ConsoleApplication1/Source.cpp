#include "Header.h"
using namespace std;



int main() {					//main function
	menu();
	return 0;
}

void menu() {						// menu function
	bool done = false;
	int choice = 0;
	PointerKing King;
	
	while (!done) {
		cout << "1.Test Containers" << "\n";
		cout << "2.Test Pointers" << "\n";
		cout << "3.Quit" << "\n";
		cout << "::";
		cin >> choice;
		switch (choice){
		case 1:
			fibonacci();
			break;
		case 2:
			King.fourth_callabove();
			break;
		case 3:
			done = true;
			exit(0);
		default:
			menu();
		}

	}
	

}

containers::containers(void) {					//initialize every element in array fiboarray to 0
	for (int i = 0; i < 20; i++) {
		fiboarray[i] = 0;
	}
}

void containers::fibogenerator() {
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

void containers::showtable() {					//showtable function to print vector, array and list to the screen
	std::cout << "Vector:\t";
	for (int i = 0; i < 20; i++) {				//print vector elements
		cout << fibovector[i];
		if (i != 19) {
			cout << ",";
		}
	}
	cout << endl;
	std::cout << "Array:\t";
	for (int i = 0; i < 20; i++) {					//print array elements
		cout << fiboarray[i];
		if (i != 19) {
			cout << ",";
		}
	}
	cout << endl;
	std::cout << "List:\t";
	int listcount = 0;			//keep track of the number of output elements in the list for the purpose of output formatting
	for (list<int>::iterator j = fibolist.begin(); j != fibolist.end(); j++) {					//print list elements
		if (listcount < 19) {
			cout << *j << ",";
		}
		else {
			cout << *j << "\n";				//create a newline after the last output
		}
		listcount++;


	}
}


void fibonacci() {
	containers fibonacci;
	fibonacci.fibogenerator();
	fibonacci.showtable();
}

PointerKing::PointerKing() {
	charpointer=nullptr;
	intpointer=nullptr;
	doublepointer=nullptr;
	charpointer = &PointerKing::inputstring[0];
	intpointer = &PointerKing::number[0];
	doublepointer = &PointerKing::doublenumber[0];
	
}


void PointerKing::fourth_callabove() {
	PointerKing::third_output();
	PointerKing::second_update(intpointer,doublepointer,charpointer);
	PointerKing::third_output();

}

void PointerKing::third_output() {
	cout << "Int Pointer:\t" << *intpointer << endl;
	cout <<"Float Pointer:\t"<< *doublepointer<< endl;
	cout << "Char Pointer: \t" << *charpointer << endl << endl;
}

void PointerKing::second_update(int *number,double *doublenumber,std::string *inputstring) {
	intpointer=number+1;
	doublepointer=doublenumber+1;
	charpointer=inputstring+1;
}
