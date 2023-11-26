#include <iostream>
#include <cctype>
/*
  Create a function to replace any character punctuation by exclamation mark (!)
*/

void Exclaim(std::string& text){

    for(auto& c: text){
        if(ispunct(c)){
            c = '!';
        }
    }

}

int main()
{
    std::string test{"To be, or not to be, that is the question."};

    std::cout << "Before invoke Exclaim function: " << test << std::endl;

    Exclaim(test);

    std::cout << "After invoke Exclaim function: " << test << std::endl;

    return 0;
}
