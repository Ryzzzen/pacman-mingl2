/**
 *
 * @file    ieditable.hpp
 *
 * @authors D. Mathieu, M. Laporte, Alexandre Sollier
 *
 * @date    17/03/2010
 *
 * @version V2.1
 *
 **/

#ifndef IEDITABLE_HXX
#define IEDITABLE_HXX

#include <iostream>

#include "ieditable.h"

inline std::ostream& nsUtil::operator<<(std::ostream& os, const IEditable& Obj)
{
    return Obj._Edit(os);
} // operator<<

#endif // IEDITABLE_HXX

