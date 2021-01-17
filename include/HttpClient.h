#ifndef NOIPUTILS_HTTPCLIENT_H
#define NOIPUTILS_HTTPCLIENT_H

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

#include "ResponseHttp.h"

using namespace std;

class HttpClient
{
private:
    string url;

public:
    HttpClient(string url) : url(url) {}

    ResponseHttp executa();
};

#endif //NOIPUTILS_HTTPCLIENT_H
