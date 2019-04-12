#include <iostream>

#ifndef DEBUG_HPP
#define DEBUG_HPP

namespace debug
{
	void alert(std::string alert_msg,int Number=0)
	{
		if(Number>0)
		{
			std::cout<<"(Debug) -> "<<alert_msg<<" "<<Number<<std::endl;
		}else{
			std::cout<<"(Debug) -> "<<alert_msg<<std::endl;
		};
		
	}

}

#endif
