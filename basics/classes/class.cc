#include <iostream>
#include <vector>

class Person {
	//  There are three access specifiers: private, protected, and public
    int id = 0;  //  by default are private attributes

	private:

    	//  A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
        std::string username;
        std::string email;
        std::string password;
        
    protected:

        //  A protected member cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
        std::string birthdate;

	public:
        
        //  A public member is accessible from outside the class, and anywhere within the scope of the class object.
        std::string firstName;
        std::string lastName;
        std::string gender;
        int age;

        //  These are contructor methods
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
		
		//  contructor declaration
       	Person(std::string uname, std::string email, std::string password, std::string fname, std::string lname, std::string gen, int age_);
        	
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
        std::vector<double> marks;
        void printCourses();
        void printData();

        // static method
        static double calculateAverageMarks(Student student) {
            if (student.marks.size() == 0) return 0;
            double totalMark;
            for (auto mark : student.marks) {
                totalMark += mark;
            }
            return totalMark/student.marks.size();
        }
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

//  Multilevel inheritance (Person <- Student <- StudentUngraduate)
class StudentUngraduate: public Student {
    public:
        using Student:: Student;
};

//  Multilevel inheritance (Person <- Sudent <- StudentGraduate)
class StudentGraduate: public Student {
    public:
        using Student:: Student;
};

//                         Student  Teacher
//                              \    /
//  Multiple inheritance (TeacherAssistance)
class TeacherAssistant: public StudentGraduate, public Teacher {
    public:
        TeacherAssistant(std::string un, std::string email, std::string pw, std::string fn, std::string ln, std::string gn, int age_):
            StudentGraduate(un, email, pw, fn, ln, gn, age_), 
            Teacher(un, email, pw, fn, ln, gn, age_){}
        
        void printData() {
            std::cout << "No data to print \n";
            StudentGraduate::printData();  //  printData from Student class
            Teacher::printData();  //  printData from Teacher class
        }

};


void compareAverageTwoStudentMarks(Student std1, Student std2) {
    if (Student::calculateAverageMarks(std1) > Student::calculateAverageMarks(std2)) {
        std::cout << "Student " << std1.getUsername() << " is greater than student " << std2.getUsername() << "\n";
    }
    else {
        std::cout << "Student " << std2.getUsername() << " is greater than student " << std1.getUsername() << "\n";
    }
}


int main () {
	std::string username, email, password;
    
    username = "addleonel";
    email = "example@example.io";
    password = "examplepassword";

	Student you(username, email, password, "Leonel", "", "Male", 22);
    you.courses.push_back("Math");
    you.courses.push_back("Data structure and Algorithms");
    you.marks.push_back(12);
    you.marks.push_back(32.23);
    you.marks.push_back(32.59);
    double markAverage = you.calculateAverageMarks(you);
    std::cout << "Your mark average is: " << std::to_string(markAverage) << "\n";

    Student she("sersi", "sersi@exmaple.com", "sersi123", "Sersi", "", "Female", 29);
    she.marks.push_back(12);
    she.marks.push_back(20);
    std::cout << "Her averge mark is: " << std::to_string(Student::calculateAverageMarks(she)) << "\n";

    compareAverageTwoStudentMarks(you, she);
    
	you.printData();
    you.concat(", ");

    Teacher mathTeacher("john23", "john123@example.com", "john123", "John", "Cooper", "Male", 46);
    mathTeacher.material = "Mathematics";
    mathTeacher.printData();
    
    TeacherAssistant assistant("mary12", "mary@example.io", "mary123", "Mary", "Cooper", "Female", 27);
    assistant.courses.push_back("Neuronal network");
    assistant.courses.push_back("Machine Learning");
    assistant.courses.push_back("Deep Learning");
    assistant.material = "Programming Fundamentals";
    assistant.printData();   

    //  Polymorphism (printData from Student and printData from Teacher)
    //  you.printData();
    //  mathTeacher.printData();
    //  assistant.printData();
	return 0;
}

