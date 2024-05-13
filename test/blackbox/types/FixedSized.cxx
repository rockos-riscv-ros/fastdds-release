// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file FixedSized.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "FixedSized.h"

#if FASTCDR_VERSION_MAJOR > 1

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>




FixedSized::FixedSized()
{
}

FixedSized::~FixedSized()
{
}

FixedSized::FixedSized(
        const FixedSized& x)
{
    m_index = x.m_index;
}

FixedSized::FixedSized(
        FixedSized&& x) noexcept
{
    m_index = x.m_index;
}

FixedSized& FixedSized::operator =(
        const FixedSized& x)
{

    m_index = x.m_index;
    return *this;
}

FixedSized& FixedSized::operator =(
        FixedSized&& x) noexcept
{

    m_index = x.m_index;
    return *this;
}

bool FixedSized::operator ==(
        const FixedSized& x) const
{
    return (m_index == x.m_index);
}

bool FixedSized::operator !=(
        const FixedSized& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void FixedSized::index(
        uint16_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint16_t FixedSized::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint16_t& FixedSized::index()
{
    return m_index;
}


// Include auxiliary functions like for serializing/deserializing.
#include "FixedSizedCdrAux.ipp"

#endif // FASTCDR_VERSION_MAJOR > 1
