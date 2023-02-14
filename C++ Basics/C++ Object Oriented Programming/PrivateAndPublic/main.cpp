#include <iostream>
#include "gaussian.h"

int main ()
{

	Gaussian mygaussian(30.0,20.0);
	Gaussian othergaussian(10.0,30.0);
	
	std::cout << "average " << mygaussian.mu << std::endl;
	
	std::cout << "evaluation " << mygaussian.evaluate(15.0) << std::endl;

	std::cout << "mul results sigma " << mygaussian.mul(othergaussian).sigma2 << std::endl;
	std::cout << "mul results average " << mygaussian.mul(othergaussian).mu << std::endl;

	std::cout << "add results sigma " << mygaussian.add(othergaussian).sigma2 << std::endl;
	std::cout << "add results average " << mygaussian.add(othergaussian).mu << std::endl;

	std::cout << "average " << mygaussian.mu << std::endl;
    mygaussian.mu = 25;
    std::cout << "average " << mygaussian.mu << std::endl;
     
	return 0;
}