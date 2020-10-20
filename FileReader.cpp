/**
* Coursework1 File Reader main file
* 
* modify the body of all procedures within this file to achieve the set task of opening/closing, loading and inspecting a given format textfile
* for that purpose, you will have to implement basic filereading from a textfile as well as parsing and storing capabilties
* 
* DO NOT modify the test.h file or the FileReader.h in any way but implement the bodies of the outlined procedures for a working
* file reader and pass all tests.
*/
#include "FileReader.h"

int FileReader::runTests()
{
	doctest::Context ctx;
	ctx.setOption("abort-after", 5);  // default - stop after 5 failed asserts
	ctx.setOption("no-breaks", true); // override - don't break in the debugger
	int res = ctx.run();              // run test cases unless with --no-run
	if (ctx.shouldExit())              // query flags (and --exit) rely on this
		return res;                   // propagate the result of the tests
	// your actual program execution goes here - only if we haven't exited
	return res; // + your_program_res
}

/**
* modify this procedure according to your own liking to test run your class
*/
void FileReader::runCustomCommands()
{
	//Your code here
}

FileReader::FileReader() {
	currentFileName = "";
	textFile = nullptr;
}


// returns an array of strings ideally one for each line in the file
bool FileReader::openFile(std::string fileName) {
	return false;
}
std::string FileReader::currentFile() {
	
	//Your code here
	// You also need to modify the return value
	return "";
}

int FileReader::lineCount()
{
	//Your code here
	// You also need to modify the return value
	return -1;
}

std::string FileReader::getLine(int line)
{
	return "";
}

std::vector<std::string> FileReader::getLines(int start, int end)
{
	//Your code here
	// You also need to modify the return value
	return std::vector<std::string>();
}

std::vector<std::string> FileReader::inspectForFirst(std::string nodeType)
{
	//Your code here
	// You also need to modify the return value
	return std::vector<std::string>();
}

std::vector<std::string> FileReader::inspectForFirst(std::string nodeType, std::string subNodeType)
{
	//Your code here
	// You also need to modify the return value
	return std::vector<std::string>();
}

std::string FileReader::inspectForFirstAttribute(std::string nodeType, std::string attrib)
{
	//Your code here
	// You also need to modify the return value
	return std::string();
}

std::string FileReader::inspectForFirstAttribute(std::string nodeType, std::string subNodeType, std::string attrib)
{
	//Your code here
	// You also need to modify the return value
	return std::string();
}

void FileReader::printDataToCMD(std::string* lines)
{
	//Your code here
	// You also need to modify the return value
}

bool FileReader::readFile(std::string fileName) {
	return false;
}

bool FileReader::overrideCurrentFile(std::string fileName, std::string* lines) {

	//Your code here
	// You also need to modify the return value
	return false;
}
bool FileReader::closeFile(std::string fileName) {

	//Your code here
	// You also need to modify the return value
	return false;
}
bool FileReader::closeCurrentFile()
{
	//Your code here
	// You also need to modify the return value
	return false;
}

// Your additional Code om implemeting the FileReader here


/**
* Do not modify main
*/
int main(int argc, char** argv) {
	FileReader reader;
	reader.runCustomCommands();
	return reader.runTests();
}