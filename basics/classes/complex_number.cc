#include <iostream>
#include <vector>
#include <cmath>

class Complex {
		
	public:
		float re, im;
		Complex(float re_, float im_){
			re = re_;
			im = im_;
		}
		
		Complex sum(Complex other) {
			float nre, nim;
			
			nre = re + other.re;
			nim = im + other.im;
			return Complex(nre, nim);	
		}

		Complex mply(Complex other) {
			float nre, nim;
			nre = re*other.re - im*other.im;
			nim = re*other.im + im*other.re;
			return Complex(nre, nim);
		}

		Complex sqrt_() {
			return Complex(pow(re, 2) - pow(im, 2), 2*re*im);
		}

		Complex recal() {
			float nre, nim;
			nre = re/(pow(re, 2) + pow(im, 2));
			nim = - im/(pow(re, 2) + pow(im, 2));
			return Complex(nre, nim);
		}
		Complex dvide(Complex other) {
			float nre, nim;
			nre = (re*other.re + im*other.im)/(pow(other.re, 2) + pow(other.im, 2));
			nim = (im*other.re - re*other.im)/(pow(other.re, 2) + pow(other.im, 2));
			return Complex(nre, nim);

		}
		
		Complex sqrtRoot() {
			float nre, nim;
			nre = sqrt((re + modulus())/2);
			nim = sqrt((-re + modulus())/2);
			return Complex(nre, nim);
		}
		
		float modulus() {
			return sqrt(pow(re, 2) + pow(im, 2));
		
		}
			
		std::string read() {
			return "(" + std::to_string(re) + ", " + std::to_string(im) + ")";
		}

		std::string express();
};


std::string Complex::express() {
	return std::to_string(re) + " + " + std::to_string(im) + "j";
}


int main () {
	
	Complex z1(3, 4);
	Complex z2(1, 2);
	
	Complex z3 = z1.sum(z2);
	Complex z4 = z1.mply(z2);
	Complex z5 = z1.dvide(z2);
	float z5_modulus = z5.modulus();
	Complex z6 = z2.sqrtRoot();


	std::cout << z3.re << " " << z3.im << "\n"; 
	std::cout << z3.read() << "\n"; 
	std::cout << z3.express() << "\n";
	std::cout << z4.read() << "\n";
	std::cout << z5.read() << "'\n";
	std::cout << "|z5| = " << std::to_string(z5_modulus) << "\n";
	std::cout << z6.read() << "\n";
	return 0;
}
