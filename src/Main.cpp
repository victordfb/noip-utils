#include <iostream>
#include <boost/regex.hpp>

#include "HttpClient.h"

using namespace std;

const boost::regex ip(">((\\d{1,3}\\.*){4})");
const std::string saida("\\1");

string buscaIp(const std::string& s)
{
    return boost::regex_replace(s, ip, saida, boost::match_default | boost::format_no_copy);
}

int main(int argc, char **args)
{
    HttpClient client("http://www.google.com");
    const RespostaHttp &resposta = client.executa();
    string externalIp = buscaIp(resposta.getContent());

    cout << externalIp << endl;
    return 0;
}
