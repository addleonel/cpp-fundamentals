#include <iostream>
#include <vector>
class Person {
	// There are three access specifiers: private, protected, and public
    int id = 0;  // by default are private attributes

	private:
        
        // A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
        std::string username;
        std::string email;
        std::string password;
        

    protected:

        // A protected member cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
        std::string birthdate;

	public:
        
        // A public member is accessible from outside the class, and anywhere within the scope of the class object.
        std::string firstName;
        std::string lastName;
        std::string gender;
        int age;

        // These are contructor methods
        explicit Person(std::string uname, std::string email, std::string password) {
            setId();
            setUsername(uname);
            setEmail(email);
            setPassword(password);    
        }

        Person(std::string uname, std::string email, std::string password, std::string fname) {
            setId();
            setUsername(uname);
            setEmail(email);
            setPassword(password);
            firstName = fname;
        }

        Person(std::string uname, std::string email, std::string password, std::string fname, std::string lname) {
            setId();
            setUsername(uname);
            setEmail(email);
            setPassword(password);
            firstName = fname;
            lastName = lname;
        }

        Person(std::string uname, std::string email, std::string password, std::string fname, std::string lname, std::string gen) {
            setId();
            setUsername(uname);
            setEmail(email);
            setPassword(password);
            firstName = fname;
            lastName = lname;
            gender = gen;
        }

        Person(std::string uname, std::string email, std::string password, std::string fname, std::string lname, std::string gen, int age_);  // constructor declaration

        //  getters and setters
        void setId() {
            id = rand() % 100 + 1;
        }
        int getId() { return id;}

        void setUsername(std::string username_) {
            username = username_;
        }
        std::string getUsername() { return username;}

        void setEmail(std::string email_) {
            email = email_;
        }
        std::string getEmail() { return email;}

        void setPassword(std::string password_) {
            password = password_;
        }
        std::string getPassword() { return password;}
        // instance methods
		void printData() {
            if (getId() != 0)
                std::cout << "Id: " << getId() << "\n";
            if (getUsername() != "")
                std::cout << "Username: " << getUsername() << "\n";
            if (firstName != "")
                std::cout << "FirstName: " << firstName << "\n";
            if (lastName != "")
                std::cout << "LastName: " << lastName << "\n";
            if (gender != "")
                std::cout << "Gender: " << gender << "\n";
            if (age)
                std::cout << "Age: " << age << "\n";
		}

        // method declaration
        void concat(std::string word=", ");
};

// We can define method outside the class (method definition)
Person::Person(std::string uname, std::string email, std::string password, std::string fname, std::string lname, std::string gen, int age_) {
    setId();
    setUsername(uname);
    setEmail(email);
    setPassword(password);
    firstName = fname;
    lastName = lname;
    gender = gen;
    age = age_;
}

void Person::concat(std::string word) {
    if (getId() != 0)
        std::cout << getId() << word;
    if (getUsername() != "")
        std::cout << getUsername() << word;
    if (firstName != "")
        std::cout << firstName << word;
    if (lastName != "")
        std::cout << lastName << word;
    if (gender != "")
        std::cout << gender << word;
    if (age)
        std::cout << age << word;
}

// Student (is a subclass)
class Student: public Person {
    public:
        using Person::Person;
        std::vector<std::string> courses;
        void printCourses();
        void printData();
};

void Student::printCourses() {
    std::cout << "My Courses: \n";
    for (auto course: courses) {
        std::cout << course << ", ";
    }
}

void Student::printData() {
    std::cout << "Id: " << getId() << "\n";
    if (getUsername() != "")
        std::cout << "Username: " << getUsername() << "\n";
    if (firstName != "")
        std::cout << "FirstName: " << firstName << "\n";
    if (lastName != "")
        std::cout << "LastName: " << lastName << "\n";
    if (gender != "")
        std::cout << "Gender: " << gender << "\n";
    if (age)
        std::cout << "Age: " << age << "\n";
    printCourses();
    std::cout << "\n";
}

// Teacher (is a subclass)
class Teacher: public Person {
    public:
        using Person:: Person;
        
        std::string material;
        void printData();
};

void Teacher::printData() {
        std::cout << "Id: " << getId() << "\n";
        if (getUsername() != "")
            std::cout << "Username: " << getUsername() << "\n";
        if (firstName != "")
            std::cout << "FirstName: " << firstName << "\n";
        if (lastName != "")
            std::cout << "LastName: " << lastName << "\n";
        if (gender != "")
            std::cout << "Gender: " << gender << "\n";
        if (age)
            std::cout << "Age: " << age << "\n";
        if (material != "")
            std::cout << "Material: " << material << "\n";
}


int main () {
	std::string username, email, password;
    
    username = "addleonel";
    email = "example@example.io";
    password = "examplepassword";

	Student you(username, email, password, "Leonel", "", "Male", 22);
    you.courses.push_back("Math");
    you.courses.push_back("Data structure and Algorithms");

	you.printData();
    you.concat(", ");

    Teacher mathTeacher("john23", "john123@example.com", "john123", "John", "Cooper", "Male", 46);
    mathTeacher.material = "Mathematics";
    mathTeacher.printData();
    
	return 0;
}
