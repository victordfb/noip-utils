#ifndef NOIPUTILS_CONFIGURATOR_H
#define NOIPUTILS_CONFIGURATOR_H

#include <string>

using namespace std;

class Configurator
{
private:
    string file;
    string token;

public:
    Configurator(string file) : file(file) {}

    void saveCredentials(string user, string passwd);

    void saveAsLastIp(const string &ip) const;
};


#endif //NOIPUTILS_CONFIGURATOR_H
