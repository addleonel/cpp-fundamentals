#include <iostream>

class Student{
	private:
		int age, standard;
		std::string first_name, last_name;

	public:
		void set_age(int age_) {
			age= age_;
		}
		int get_age() {return age;}
		
		void set_first_name(std::string first_name_) {
			first_name = first_name_;
		}
		std::string get_first_name() {return first_name;}

		void set_last_name(std::string last_name_) {
			last_name = last_name_;
		}
		std::string get_last_name() {return last_name;}

		void set_standard(int standard_) {
			standard = standard_;
		}
		int get_standard() {return standard;}
		
		void print_data() {
			std::cout << age << ","
			<< first_name << ","
			<< last_name << ","
			<< standard << std::endl;
		}
};
int main () {
	Student you;
	int age, standard;
	std::string first_name, last_name;

	std::cin >> age;
	std::cin >> first_name;
	std::cin >> last_name;
	std::cin >> standard;
	
	you.set_age(age);	
	you.set_first_name(first_name);
	you.set_last_name(last_name);
	you.set_standard(standard);

	std::cout << you.get_age() << "\n"
		<< you.get_last_name() << ", " << you.get_first_name() 
		<< "\n" << you.get_standard() << std::endl;
	std::cout<<std::endl;
	you.print_data();

	return 0;
}
