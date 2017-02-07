/*
 * rot13.cpp
 *
 *  Created on: Feb 7, 2017
 *      Author: teo
 */

#include <string>
#include <cctype>
#include "rot13.h"

std::string rot13(std::string source)
{
  std::string transformed;
  for (size_t i = 0; i < source.length(); ++i)
  {
    if (std::isalpha(source[i]))
    {
      if (tolower(source[i]) - 'a' < 13)
      {
        transformed.append(1, source[i] + 13);
      }
      else
      {
        transformed.append(1, source[i] - 13);
      }
    }
    else
    {
      transformed.append(1, source[i]);
    }
  }

  return transformed;
}

