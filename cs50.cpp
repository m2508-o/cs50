#include <iostream>
#include <string>
/* Problemset 1 
void mario_c(int& height) {
	for (int i = 0; i < height; i++) {

		for (int j = height - 1; j > i; j--) {

			std::cout << " ";
		}

		for (int k = 0; k < i + 1; k++) {
			std::cout << "#";
		}

		std::cout << " ";

		for (int c = height + 1; c > height - i ; c--)
		{
			std::cout << "#";
		}
		std::cout << std::endl;

	}

}

*/
/* Problemset 2 
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

*/ [[likely]];

int main(int argc, char* argv[])
{
	/* Input for problemset 1 
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

	/* Input for problemset 2 
	std::string creditNumber;

	std::cout << "Number:";
	std::cin >> creditNumber;

	while(isValid(creditNumber) != true){
		std::cout << "Number: ";
		std::cin >> creditNumber;
	}
	*/
	return 0;


}
