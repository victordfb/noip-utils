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
    int status;
    string statusMessage;
    string content;

public:
    RespostaHttp(string content) : status(200), statusMessage(""), content(content) {}

    RespostaHttp(int status, string statusMsg, string content)
            : status(status), statusMessage(statusMsg),
              content(content) {}

    string getContent() const;

    string filtraIp() const;

    bool isSucessful() const;
};


#endif //NOIPUTILS_RESPOSTAHTTP_H
