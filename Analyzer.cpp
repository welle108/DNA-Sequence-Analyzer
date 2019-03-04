#include <iostream>
#include "Analyzer.h"
#include <string>
using namespace std;

int count=0;
int sum=0;
float mean=0.0;

Analyzer::Analyzer()
{

}

Analyzer::~Analyzer()
{

}

void Analyzer::ReadString(string line)
{
	for (int i = 0; i<line.length(); ++i)
	{
		++sum;
	}

}

void Analyzer::SetCount(int lineCount)
{
	count=lineCount;
}

void Analyzer::CalcMean()
{
	mean = sum/count;

	cout<<"Line Count: "<<count<<endl;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Mean: "<<mean<<endl;

}