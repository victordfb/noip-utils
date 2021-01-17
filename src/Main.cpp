#include <iostream>

#include "HttpClient.h"
#include "Configurator.h"

using namespace std;

int main(int argc, char **args)
{
    Configurator config("/home/victor/.configurator");

    HttpClient client("whatismyip.host");
    const ResponseHttp &resposta = client.executa();

    if (!resposta.isSucessful())
    {
        cerr << "Erro: " << resposta.getContent() << endl;
    }

    string externalIp = resposta.filtraIp();
    config.saveAsLastIp(externalIp);
    cout << externalIp << endl;

    return 0;
}
