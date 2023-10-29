#include <iostream>
#include "Url.h"

using namespace std;

int main()
{

    Url url{"http", "www.example.com/index.html"};

    url.DisplayCompleteUrl();

    return 0;
}
