
#include <iostream>
#include <cstdint>

class RGBA {

  private: 
     uint8_t m_red ;
     uint8_t m_green  ;
     uint8_t m_blue  ;
     uint8_t m_alpha  ;
    

public: 

   RGBA()  :
        m_red (0),
        m_green(0),
        m_blue(0),
        m_alpha(255)
        {
        	
		}
    
  
    
	void print()
	{ std::cout << unsigned(m_red)  <<" "<< unsigned(m_green) <<" "<<unsigned(m_blue)  <<" "<<unsigned(m_alpha)  << std::endl; }

};

int main() { 

    RGBA rgba;
    rgba.print();
	    
    return 0; 
}
