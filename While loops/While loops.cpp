#include <iostream>
#include "Header.h"

int main() {
	
	while (true) {
		int n;

		show_menu();
		int selection = get_input();
		n = Proces_input(selection);
		if (n == 5) { break; }
		}
}

void show_menu() {
	std::cout << "1. Adittion. " << std::endl;
	std::cout << "2. Subtraction. " << std::endl;
	std::cout << "3. Multiplication. " << std::endl;
	std::cout << "4. Division " << std::endl;
	std::cout << "5. Quit program. " << std::endl;
}


int get_input() {
	int selection;
	std::cout << "Enter your selection > " << std::flush;
	std::cin >> selection;
	return selection;
}
	

int Proces_input(int selection) {

	std::string Question1;
	Question1 = "Give first number > ";
	std::string Question2;
	Question2 = "Give second number > ";
	std::string Awnser;
	Awnser = "The awnser is. ";

	int value1;
	int value2;


	switch (selection) {
	case 1: {
		std::cout << Question1 << std::flush;
		std::cin >> value1;
		std::cout << Question2 << std::flush;
		std::cin >> value2;
		std::cout << "\r" << std::endl;

		std::cout << Awnser << value1 + value2 << std::endl;
		std::cout << "\r" << std::endl;
		break;
	}
	case 2: {
		std::cout << Question1 << std::flush;
		std::cin >> value1;
		std::cout << Question2 << std::flush;
		std::cin >> value2;
		std::cout << "\r" << std::endl;

		std::cout << Awnser << value1 - value2 << std::endl;
		std::cout << "\r" << std::endl;
		break;
	}
	case 3: {
		std::cout << Question1 << std::flush;
		std::cin >> value1;
		std::cout << Question2 << std::flush;
		std::cin >> value2;
		std::cout << "\r" << std::endl;

		std::cout << Awnser << value1 * value2 << std::endl;
		std::cout << "\r" << std::endl;
		break;
	}
	case 4: {
		std::cout << Question1 << std::flush;
		std::cin >> value1;
		std::cout << Question2 << std::flush;
		std::cin >> value2;
		std::cout << "\r" << std::endl;

		std::cout << Awnser << value1 / value2 << std::endl;
		std::cout << "\r" << std::endl;
		break;
	}
	case 5: {
		std::cout << "\r" << std::endl;
		std::cout << "Quiting .... " << std::endl;
		return 5;
		break;
	}
	default: {
		std::cout << "Invalid otion..." << std::endl;
		std::cout << "\r" << std::endl;
	}
	}

}


