#include <iostream>
/*template <typename T>
class AutoPtr
{
public:
	AutoPtr(T* data) :m_data(data) {}
	~AutoPtr() {
		if (m_data != nullptr)
			delete m_data;
	}
	//AutoPtr(AutoPtr& other)
	T* operator ->() { return m_data; }
	T operator*() { return *m_data; }
private:
	T* m_data;
};
class Student {
public:
	Student() { std::cout << "I became a student\n"; }
	~Student() { std::cout << "I didnt pass the exam\n"; }
	std::string name = "Ivan-MIPT\n";
};
int main() {
	std::cout << "startttt\n";
	AutoPtr<Student> ptr_student(new Student());
	AutoPtr<Student> ptr_student2(new Student());

	std::cout << ptr_student->name;
	std::cout << "finishhhhhhh\n";
	//сематика перемещения
}*/
#include <iostream>
#include <memory>
class BankCell {
public:
	BankCell() { std::cout << "we created the cell\n"; };
	~BankCell() { std::cout << "we loct the cell\n"; };
};
class Human {
public:
	Human(std::shared_ptr <BankCell> user_)
	{
		user = user_;
		std::cout << "hello new cell user\n";
	}
	~Human() { std::cout << "goodbye, cell user\n"; };
private:
	std::shared_ptr <BankCell> user;
};
int main()
{
	BankCell cell;
	std::shared_ptr<BankCell> bank;
	Human first_user(bank);
	Human second_user(bank);
}


