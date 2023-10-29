#ifndef URL_H
#define URL_H

#include <string>
#include <iostream>

class Url
{
    public:
        Url(const std::string &protocol, const std::string &url);
        virtual ~Url();
        void DisplayCompleteUrl() const;

    private:
        std::string protocol;
        std::string url;
};

#endif // URL_H
