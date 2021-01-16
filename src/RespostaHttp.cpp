#include <boost/regex.hpp>

#include "RespostaHttp.h"

const boost::regex ip(">((\\d{1,3}\\.*){4})");
const std::string saida("\\1");

string buscaIp(const std::string &s)
{
    return boost::regex_replace(s, ip, saida, boost::match_default | boost::format_no_copy);
}

bool RespostaHttp::isSucessful() const
{
    return this->status >= 200 && this->status < 300;
}

string RespostaHttp::getContent() const
{
    if (!this->isSucessful())
    {
        return this->statusMessage;
    }
    return content;
}

string RespostaHttp::filtraIp() const
{
    return buscaIp(this->getContent());
}
