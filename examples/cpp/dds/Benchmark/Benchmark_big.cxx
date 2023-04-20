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
 * @file Benchmark_big.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Benchmark_big.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define BenchMarkBig_max_cdr_typesize 8388616ULL;
#define BenchMarkBig_max_key_cdr_typesize 0ULL;

BenchMarkBig::BenchMarkBig()
{
    // char m_data
    memset(&m_data, 0, (8388608) * 1);
    // unsigned long m_index
    m_index = 0;

}

BenchMarkBig::~BenchMarkBig()
{


}

BenchMarkBig::BenchMarkBig(
        const BenchMarkBig& x)
{
    m_data = x.m_data;
    m_index = x.m_index;
}

BenchMarkBig::BenchMarkBig(
        BenchMarkBig&& x) noexcept 
{
    m_data = std::move(x.m_data);
    m_index = x.m_index;
}

BenchMarkBig& BenchMarkBig::operator =(
        const BenchMarkBig& x)
{

    m_data = x.m_data;
    m_index = x.m_index;

    return *this;
}

BenchMarkBig& BenchMarkBig::operator =(
        BenchMarkBig&& x) noexcept
{

    m_data = std::move(x.m_data);
    m_index = x.m_index;

    return *this;
}

bool BenchMarkBig::operator ==(
        const BenchMarkBig& x) const
{

    return (m_data == x.m_data && m_index == x.m_index);
}

bool BenchMarkBig::operator !=(
        const BenchMarkBig& x) const
{
    return !(*this == x);
}

size_t BenchMarkBig::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BenchMarkBig_max_cdr_typesize;
}

size_t BenchMarkBig::getCdrSerializedSize(
        const BenchMarkBig& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((8388608) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void BenchMarkBig::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;

    scdr << m_index;

}

void BenchMarkBig::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;

    dcdr >> m_index;
}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void BenchMarkBig::data(
        const std::array<char, 8388608>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void BenchMarkBig::data(
        std::array<char, 8388608>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::array<char, 8388608>& BenchMarkBig::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::array<char, 8388608>& BenchMarkBig::data()
{
    return m_data;
}
/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void BenchMarkBig::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t BenchMarkBig::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& BenchMarkBig::index()
{
    return m_index;
}



size_t BenchMarkBig::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return BenchMarkBig_max_key_cdr_typesize;
}

bool BenchMarkBig::isKeyDefined()
{
    return false;
}

void BenchMarkBig::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}
