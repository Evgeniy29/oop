
#include <iostream>
#include <cmath>

class Power {

 // private: 
    double chislo_1 = 2.0 , chislo_2 = 10.0 ;
    double a,b;

public: 
    void set(double _chislo_1,double _chislo_2) {
         chislo_1 =  _chislo_1;
         chislo_2 =  _chislo_2;
    }
	void calculate(double a,double b) {
	pow(a,b);
	}
    
    void set();
   void calculate();

};
void Power::set() { std::cout << chislo_1 <<" "<< chislo_2 << std::endl; }
void Power::calculate() {std::cout<<pow(chislo_1,chislo_2)<<std::endl;}


int main() { // 1TBS

    Power calc;
    calc.set();
    calc.calculate();

    return 0; 
}
