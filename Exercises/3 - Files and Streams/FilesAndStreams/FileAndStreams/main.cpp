#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct language {
    string lang;
    string designer;
    int date;
};

int main()
{
    vector<language>languages;


    ifstream infile{"languages.txt"};

    if(!infile){
        cout << "Could not open the file" << endl;
        return -1;
    }

    string line;

    while(getline(infile, line)){
        string lang;
        string designer;
        int year;

        istringstream istring{line};
        istring >> lang;
        istring >> designer;
        istring >> year;

        languages.push_back({lang, designer, year});

    }
    infile.close();

    for(const auto& data: languages){
      cout << data.lang <<", "<< data.designer <<", "<< data.date << endl;
    }

    return 0;
}
