#include "List.cpp"


class ShenonList {
private:
	List<char> word;
	List<char> symbols;
	List<bool> encodedWord;
	List<char> decodedWord;
public:
	void input(); //input string,that need to encode
	void FindSymbols();//finding all symbols in out string
	void ListSort();//sort symbols in descending order
	void coding();//encoding our string
	void decoding();//decoding our string
	void print(); //print all info 
};

