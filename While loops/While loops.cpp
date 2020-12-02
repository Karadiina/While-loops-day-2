
#include <iostream>

int main()
{
    
    int i = 0;

    do {

		std::cout << "1. Open file. " << std::endl;
		std::cout << "2. Copy file. " << std::endl;
		std::cout << "3. Delete file. " << std::endl;
		std::cout << "4. Send file. " << std::endl;
		std::cout << "5. Quit program. " << std::endl;

		std::cout << "Enter your selection > " << std::flush;

		int value;
		std::cin >> value;

		if (value == 1) {
			std::cout << "Opening file..." << std::endl;
		}
		else if (value == 2) {
			std::cout << "Copying file..." << std::endl;
		}
		else if (value == 3) {
			std::cout << "Deleting file..." << std::endl;
		}
		else if (value == 4) {
			std::cout << "Sending file..." << std::endl;
		}
		else if (value == 5) {
			std::cout << "Quiting .... " << std::endl;
			i = 1;
		}
		else {
			std::cout << "Invalid otion..." << std::endl;
		}


    } while (i == 0);
    

}