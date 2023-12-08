#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct language{
    string lang;
    string designer;
    int date;
};

int main()
{
    ifstream infile{"languages2.txt"};
    vector<language>languages;

    if(!infile){

        cout << "Could not open the file" << endl;
        return -1;
    }

    string line;
    while(getline(infile, line)){

        string lang;
        string designer;
        int year;

        istringstream istring(line);
        istring >> lang;
        string temp;
        istring >> temp;
        designer = temp;
        istring >> temp;

        while(!isdigit(temp[0])){
            designer += " " + temp;
            istring >> temp;
        }

        year = stoi(temp);

        languages.push_back({lang, designer, year});
    }

    infile.close();

    for(const auto& language: languages){

        cout << language.lang <<", "<< language.designer <<", "<< language.date<<endl;
    }

    return 0;
}
