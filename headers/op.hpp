#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
	private:
        std::string removeTrailing (const std::string& s)
        {
            std::string str = s;
            str.erase ( str.find_last_not_of('0') + 1, std::string::npos ); 
            str.erase ( str.find_last_not_of('.') + 1, std::string::npos );
            return str;
        }
	protected:
		double value; 
	public:
		Op(double value) : Base(), value(value) { }
		virtual double evaluate() { return value; }
		virtual std::string stringify() { return removeTrailing(std::to_string(value)); }
};

#endif //__OP_HPP__
