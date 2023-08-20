#include<iostream>
//////////////////////
/*note[0]++;: If the condition in the if statement is true 
(i.e., if the first character of note is not 'G'), 
it increments the ASCII value of the first character by 1. 
This effectively changes the character to the next character in the ASCII character set.*/
std::string getEquivalent(std::string note) {
	if(note.back() == '#'){
		note.back()='b';
		if(note[0]!='G'){
			note[0]++;
		}
		else if(note[0] == 'G'){
			note[0]='A';
		}
	}
	else if(note.back() == 'b'){
		note.back()='#';
		if(note[0]=='A'){
			note[0]='G';
		}
		else{
			note[0]--;
		}
	}
	return note;
}

//////////////////////
std::vector<int> sortNumsAscending(std::vector<int> arr) {
	if(arr.size())
		std::sort(arr.begin(),arr.end());
	return(arr);
		
}

////////////////////////////////////////////
bool isSafeBridge(std::string s) {
	//std::size_t found=s.find('.');
  //if (found!=std::string::npos)
	
	std::size_t breakp = s.find(' ');
	if(breakp != std::string::npos)
		return false;
	else
		return true;
}
/////////////////////////////////////////