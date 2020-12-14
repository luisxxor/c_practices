#include "iostream"

void bitwise_set()
{
	int original = 0b10100;
	std::cout << "Original number: " << original << std::endl;

	int mask = 0b1 << 3;
	std::cout << "Mask: " << mask << std::endl;

	int result = original | mask;
	std::cout << "Result: " << result << std::endl;
}

void bitwise_unset()
{
	int original = 0b1001010;
	std::cout << "Original number: " << original << std::endl;

	int mask = 0b1 << 6;
	std::cout << "Mask: " << mask << std::endl;

	int result = original & ~mask;
	std::cout << "Result: " << result << std::endl;
}

void bitwise_toggle_with_xor()
{
	int original = 0b1001;
	std::cout << "Original number: " << original << std::endl;
	
	int mask = 0b0100;
	std::cout << "Mask: " << mask << std::endl;

	int result = original ^ mask;
	std::cout << "Result: " << result << std::endl;
}

int main(void)
{
	std::cout << "Setting a byte: I have 20 and I can turn on the 4th byte" << std::endl;
	bitwise_set();
	std::cout << "\n\n" << "And you can do the opposite, turning off a byte" << std::endl;
	std::cout << "For example, I have 74 and I cant turn off the 7th byte to get a 10" << std::endl;
	bitwise_unset();
	std::cout << "\n\n";
	bitwise_toggle_with_xor();
	return 0;
}
