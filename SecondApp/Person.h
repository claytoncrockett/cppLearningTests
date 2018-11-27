#include <string>

class Person {
private: 
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	//constructor with 3 arguments
	Person(std::string first, std::string last, int arbitrary);
	//constructor with no args
	Person();
	//destructor doesn't need args in this case
	~Person();
	std::string GetName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }

};
