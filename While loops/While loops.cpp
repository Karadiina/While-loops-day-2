
#include <iostream>

int main()
{

	while (true) {

		std::cout << "1. Adittion. " << std::endl;
		std::cout << "2. Subtraction. " << std::endl;
		std::cout << "3. Multiplication. " << std::endl;
		std::cout << "4. Division " << std::endl;
		std::cout << "5. Quit program. " << std::endl;

		std::cout << "Enter your selection > " << std::flush;

		std::string Question1;
		Question1 = "Give first number > ";
		std::string Question2;
		Question2 = "Give second number > ";
		std::string Awnser;
		Awnser = "The awnser is. ";

		int selection;
		int value1;
		int value2;
		std::cin >> selection;



		if (selection == 1) {
			std::cout << Question1 << std::flush;
			std::cin >> value1;
			std::cout << Question2 << std::flush;
			std::cin >> value2;

			std::cout << Awnser << value1 + value2 << std::endl;
			std::cout << "\r" << std::endl;

		}
		else if (selection == 2) {
			std::cout << Question1 << std::flush;
			std::cin >> value1;
			std::cout << Question2 << std::flush;
			std::cin >> value2;

			std::cout << Awnser << value1 - value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 3) {
			std::cout << Question1 << std::flush;
			std::cin >> value1;
			std::cout << Question2 << std::flush;
			std::cin >> value2;

			std::cout << Awnser << value1 * value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 4) {
			std::cout << Question1 << std::flush;
			std::cin >> value1;
			std::cout << Question2 << std::flush;
			std::cin >> value2;

			std::cout << Awnser << value1 / value2 << std::endl;
			std::cout << "\r" << std::endl;
		}
		else if (selection == 5) {
			std::cout << "Quiting .... " << std::endl;
			break;
		}
		else {
			std::cout << "Invalid otion..." << std::endl;
		}

	}
    
    

}