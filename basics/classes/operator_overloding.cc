#include <iostream>
#include <cmath>

class Complex {
		
	public:
		float re, im;
		Complex(float re_, float im_){
			re = re_;
			im = im_;
		}
		
		Complex operator + (const Complex &other) {
			return Complex(re + other.re, im + other.im);	
		}

        Complex operator += (const Complex &other) {
            re +=other.re;
            im += other.im;
            return Complex(re, im);
        }

        Complex operator - (const Complex &other) {
            return Complex(re - other.re, im - other.im);
        }

        Complex operator -= (const Complex &other) {
            re -= other.re;
            im -= other.im;
            return Complex(re, im);
        }

		Complex operator * (const Complex &other) {
			float nre = re*other.re - im*other.im;
			float nim = re*other.im + im*other.re;
			return Complex(nre, nim);
		}

		Complex operator / (const Complex &other) {
			float nre = (re*other.re + im*other.im)/(pow(other.re, 2) + pow(other.im, 2));
			float nim = (im*other.re - re*other.im)/(pow(other.re, 2) + pow(other.im, 2));
			return Complex(nre, nim);
		}

        Complex sqrt_() {
			return Complex(pow(re, 2) - pow(im, 2), 2*re*im);
		}
		
		float modulus() {
			return sqrt(pow(re, 2) + pow(im, 2));
		}
			
		std::string read() {
			return "(" + std::to_string(re) + ", " + std::to_string(im) + ")";
		}

		std::string str();
};


std::string Complex::str() {
	return std::to_string(re) + " + " + std::to_string(im) + "j";
}


int main () {
    Complex c1(12, 20);
    Complex c2(12.5, 10);
    
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;
    c1 -= c1;
    std::cout << &c1 << "\n";
    std::cout << c1.str() << "\n";
    std::cout << c3.str() << "\n";
    std::cout << c4.str() << "\n";
    std::cout << c5.str() << "\n";
    std::cout << c6.str() << "\n";
	return 0;
}
