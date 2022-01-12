#include <iostream>
class Student {
	// There are three access specifiers: private, protected, and public

    int age, standard;  // by default are private attributes

	private:
        /*
        A private member cannot be accessed, or even viewed, from outside the class; 
		it can be accessed only from within the class.
        */
		std::string first_name, last_name;
    protected:
        /*
        A protected member cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
        */
        std::string level;

	public:
        /*
        A public member is accessible from outside the class, and anywhere within the scope of the class object.
        */

        // These are contructor methods
        Student(int age, std::string fname, std::string lname, int standard) {
            set_age(age);
            set_first_name(fname);
            set_last_name(lname);
            set_standard(standard);
        }

        Student(int age, std::string fname, std::string lname) {
            set_age(age);
            set_first_name(fname);
            set_last_name(lname);
        }

        Student(int age, std::string fname) {
            set_age(age);
            set_first_name(fname);
        }

        Student(int age);  // constructor declaration

        //  getters and setters
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

        // instance methods
		void print_data() {
            if (age)
                std::cout << "Age: " << age << "\n";
            if (first_name != "")
                std::cout << "FirstName: " << first_name << "\n";
            if (last_name != "")
                std::cout << "LastName: " << last_name << "\n";
            if (standard)
			    std::cout <<  "Standard: " << standard << "\n";
		}

        // method declaration
        void concat(std::string word=" ");
};

// We can define method outside the class (method definition)
Student::Student(int age){
    set_age(age);
}

void Student::concat(std::string word) {
    if (age)
        std::cout << age << word;
    if (first_name != "")
        std::cout << first_name << word;
    if (last_name != "")
        std::cout << last_name << word;
    if (standard)
        std::cout << standard << "\n";
}



int main () {
	int age, standard;
	std::string first_name, last_name;
	
    age = 22;
    standard = 10;
    first_name = "Leonel";
    last_name = "Aquino";

	Student you(age, first_name, last_name, standard);
    Student you_age(age);

	you.print_data();
    you.concat(", ");
    // std::cout << you.level << "\n";
    you_age.print_data();

    
	return 0;
}
