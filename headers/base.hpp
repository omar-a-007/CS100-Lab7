#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>

class Base {

	protected:
		Base* x;	// Basically, the lhs operator
		Base* y;	// Basically, the rhs operator
	
	public:
		/* Constructors */
		Base() : x(nullptr), y(nullptr) { }
		Base(Base* x, Base* y) : x(x), y(y) { }

		virtual ~Base() { delete x; delete y;}

		/* Pure Virtual Functions */
		virtual double evaluate() = 0;
		virtual std::string stringify() = 0;
};

#endif //__BASE_HPP__
