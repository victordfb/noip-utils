//
// Created by victor on 1/16/21.
//

#ifndef NOIPUTILS_RESPOSTAHTTP_H
#define NOIPUTILS_RESPOSTAHTTP_H

#include <string>

using namespace std;

class RespostaHttp
{
private:
    string content;

public:
    RespostaHttp(string content) : content(content) {}

    string getContent() const { return content; }
};


#endif //NOIPUTILS_RESPOSTAHTTP_H
