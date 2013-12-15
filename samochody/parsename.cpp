#include "parsename.h"
#include <sstream>
#include <stdio.h>
#include <conio.h>

using namespace std;

string parsename(string type) {
	stringstream ss;
	ss << "c++filt ­t " << type;
	FILE *pipe = _popen(ss.str().c_str(), "r");
	if
		(!pipe) return "ERROR";
	char buffer[128];
	std::string result = "";
	while(!feof(pipe)) {
		if(fgets(buffer, 128, pipe) != NULL)
	      result += buffer;
	}
	_pclose(pipe);
	return
	result.erase(result.find_last_not_of(" \n\r\t")+1);
}