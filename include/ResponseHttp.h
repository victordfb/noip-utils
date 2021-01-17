#ifndef NOIPUTILS_RESPONSEHTTP_H
#define NOIPUTILS_RESPONSEHTTP_H

#include <string>

using namespace std;

class ResponseHttp
{
private:
    int status;
    string statusMessage;
    string content;

public:
    ResponseHttp(string content) : status(200), statusMessage(""), content(content) {}

    ResponseHttp(int status, string statusMsg, string content)
            : status(status), statusMessage(statusMsg),
              content(content) {}

    string getContent() const;

    string filtraIp() const;

    bool isSucessful() const;
};


#endif //NOIPUTILS_RESPONSEHTTP_H
