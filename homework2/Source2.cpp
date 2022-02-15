#include <iostream>
#include <memory>
class BankCell {
public:
	BankCell(std::cout << "we created the cell\n") {};
	~BankCell(std::cout << "we loct the cell\n") {};
};
class Human {
public:
	Human(shared_ptr <BankCell> user_)
	{
		user = user_;
		std::cout << "hello new cell user\n";
	}
	~Human() { std::cout << "goodbye, cell user\n"; };
private:
	shared_ptr <BankCell> user;
};
int main()
{
	BankCell cell;
	std::shared_ptr<BankCell> bank;
	Human first user(bank);
}

