#include "Sed.hpp"

bool Sed::read(const std::string &file)
{
	_in.open (file, std::ifstream::in);
	if(!_in.is_open())
		return false;
	std::string outfile = file + ".replace";
	_out.open(outfile);
	if(!_out.is_open())
		return false;
	return true;
}

void Sed::replace(const std::string &s1, const std::string &s2)
{

	std::string line;
	while (std::getline(_in, line))
	{
		std::size_t found = line.find(s1);
		while(found != std::string::npos) //end ofline
		{
		//	std::cout << "found :" << found << std::endl;
			std::string pre = line.substr(0, found);
		//	std::cout << "pre :" << pre << std::endl;
			std::string post = line.substr(found + s1.length());
		//	std::cout << "post :" << post << std::endl;
			line = pre + s2 + post;
			std::cout << "line :" << line << std::endl;
			found = line.find(s1);
		}
		_out << line;
		if(!_in.eof())
			_out << "\n";
	}
	_in.close();
	_out.close();

}