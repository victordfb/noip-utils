#include <iostream>

#include "HttpClient.h"

using namespace std;

int main(int argc, char **args)
{
    HttpClient client("whatismyip.host");
    const RespostaHttp &resposta = client.executa();

    if (!resposta.isSucessful())
    {
        cerr << "Erro: " << resposta.getContent() << endl;
    }

    string externalIp = resposta.filtraIp();
    cout << externalIp << endl;

    return 0;
}
