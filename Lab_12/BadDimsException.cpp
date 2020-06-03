#include "BadDimsException.h"

BadDimsException::BadDimsException(std::string text)
{
    info = text;
}
std::string BadDimsException::what()
{
    return info;
}
