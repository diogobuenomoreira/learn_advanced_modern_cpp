#include "Url.h"

Url::Url(const std::string &protocol, const std::string &url): protocol{protocol},url{url}
{
    std::cout<<"Constructor called"<<std::endl;
};

Url::~Url()
{
    //dtor
    std::cout<<"Destructor called"<<std::endl;
}


void Url::DisplayCompleteUrl() const
{
    std::string completeUrl{protocol + "://" + url};

    std::cout<<completeUrl<<std::endl;
}
