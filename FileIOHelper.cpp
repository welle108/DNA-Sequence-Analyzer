#include <"FileIOHelper.h">
#include <"Analyzer.h">
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
Analyzer analyzer;

FileIOHelper::FileIOHelper()
{

}

FileIOHelper::~FileIOHelper()
{

}

void FileIOHelper::Analyze()
{
	std::string cString;
	int count = 0;
	ifstream inFile;

	inFile.open("mockdata.txt");

	//Check for Error
	if (inFile.fail())
	{
		cerr << "Error opening file" << endl;
		exit(1);
	}

	while(!inFile.eof())
	{
		inFile >> item
		Analyzer.ReadString(item);

		++count;


	}

	Analyzer.SetCount(count);
	Analyzer.CalcMean();


}