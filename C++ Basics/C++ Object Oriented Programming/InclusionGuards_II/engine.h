#include <string>

class Engine
{
	private:
		std::string enginesize;

	public:

		Engine ();

		Engine (std::string);

		void setSize(std::string);

		std::string getSize();

};