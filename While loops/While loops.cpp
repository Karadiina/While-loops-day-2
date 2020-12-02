
#include <iostream>

int main()
{
    
    int i = 0;

    do {

		std::cout << "1. Adittion. " << std::endl;
		std::cout << "2. Subtraction. " << std::endl;
		std::cout << "3. Multiplication. " << std::endl;
		std::cout << "4. Division " << std::endl;
		std::cout << "5. Quit program. " << std::endl;

		std::cout << "Enter your selection > " << std::flush;

		int selection;
		int value1;
		int value2;
		std::cin >> selection;

		if (selection == 1) {
			std::cout << "Give first number > " << std::flush;
			std::cin >> value1;
			std::cout << "Give second number > " << std::flush;
			std::cin >> value2;
			
			std::cout << "The awnser is. " << value1 + value2 << std::endl;
			std::cout << "\r" << std::endl;

		}
		else if (selection == 2) {
			std::cout << "Give first number > " << std::flush;
			std::cin >> value1;
			std::cout << "Give second number > " << std::flush;
			std::cin >> value2;

			std::cout << "The awnser is. " << value1 - value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 3) {
			std::cout << "Give first number > " << std::flush;
			std::cin >> value1;
			std::cout << "Give second number > " << std::flush;
			std::cin >> value2;

			std::cout << "The awnser is. " << value1 * value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 4) {
			std::cout << "Give first number > " << std::flush;
			std::cin >> value1;
			std::cout << "Give second number > " << std::flush;
			std::cin >> value2;

			std::cout << "The awnser is. " << value1 / value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 5) {
			std::cout << "Quiting .... " << std::endl;
			i = 1;
		}
		else {
			std::cout << "Invalid otion..." << std::endl;
		}


    } while (i == 0);
    

}