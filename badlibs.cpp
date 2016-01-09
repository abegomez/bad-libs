#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


vector<string> words;

void getContents(fstream &);
void printFinish(vector<string>);
void fillIn(vector<string> &);

int main()
{
	fstream dataFile;
	dataFile.open("words.txt", ios::in);
	if(dataFile.fail())
		"File couldn't be opened.";
	else
	{
		getContents(dataFile);
		fillIn(words);
		printFinish(words);
	}
}

void getContents(fstream &file)
{
	string word;
	while(file >> word)
	{
		words.push_back(word);
	}
	
}

void printFinish(vector<string> words)
{
	for(int i = 0; i != words.size(); i++)
		cout <<words[i] << " ";
}

void fillIn(vector<string> &words) //NOUN, ADJECTIVE, VERB, ADVERB, PREPOSITION, INTERJECTION
{
	string answer;
	for(int i = 0; i<words.size(); i++)
	{
		string temp = words[i];
			
		if(temp.compare("NOUN") == 0)
		{
			cout << "NOUN: ";
		}else if(temp.compare("ADJECTIVE") == 0)
		{
			cout << "ADJECTIVE: ";
		}else if(temp.compare("VERB") == 0)
		{
			cout << "VERB: ";	
		}else if(temp.compare("ADVERB") == 0)
		{
			cout << "ADVERB: ";
		}else if(temp.compare("PREPOSITION") == 0)
		{
			cout << "PREPOSITION: ";
		}else if(temp.compare("INTERJECTION") == 0)
		{
			cout << "INTERJECTION: ";
		}
		getline(cin, answer);
		words[i] = answer;
		
	}
}