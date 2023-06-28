#include <iostream>
#include <string>

bool isValid(std::string& creditNumber) {
	int sum = 0;
	int* arr = new int[100];

	
	
	for (int i = 0; i <= creditNumber.length(); i++) {
		arr[i] = creditNumber[i] - '0';

		if ((i % 2) && (creditNumber.length() % 2 != 0 )) {
			arr[i] *= 2;

			while (arr[i] > 0) {
				int temp = arr[i] % 10;
				arr[i] /= 10;

				sum += temp;
			}
		}
		else if ((i % 2 == 0) && (creditNumber.length() % 2 == 0))
		{
			arr[i] *= 2;

			while (arr[i] > 0) {
				int temp = arr[i] % 10;
				arr[i] /= 10;

				sum += temp;
			}
		}


		else {
			sum += arr[i];
		}
	}

	if (sum % 10==0)
	{
		if ((creditNumber[0] == '4') && (creditNumber.length() == 13 || creditNumber.length() == 16))
			std::cout << "VISA";
		else if (((creditNumber[0] == '2') || (creditNumber[0] == '5')) && creditNumber.length() == 16)
			std::cout << "MASTERCARD";
		else if ((creditNumber[0] == '3') && creditNumber.length() == 15)
			std::cout << "AMEX";
		else
		{
			std::cout << "INVALID" << std::endl;
			return false;
		}

		return true;
	}
	else
	{
		std::cout << "INVALID" << std::endl;
		return false;
	}
}



int main(int argc, char* argv[])
{
	/*
	int height;
	std::cout << "Height: ";
	std::cin >> height;
	while (height <= 0)
	{
		std::cout << "Height: ";
		std::cin >> height;
	}

	mario_c(height);
	*/
	std::string creditNumber;

	std::cout << "Number:";
	std::cin >> creditNumber;

	while(isValid(creditNumber) != true){
		std::cout << "Number: ";
		std::cin >> creditNumber;
	}

	return 0;


}

