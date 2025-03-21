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
 * @file typesCdrAux.hpp
 * This source file contains some definitions of CDR related functions.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPESCDRAUX_HPP_
#define _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPESCDRAUX_HPP_

#include "types.h"

constexpr uint32_t eprosima_fastdds_statistics_DiscoveryTime_max_cdr_typesize {852UL};
constexpr uint32_t eprosima_fastdds_statistics_DiscoveryTime_max_key_cdr_typesize {56UL};

constexpr uint32_t eprosima_fastdds_statistics_PhysicalData_max_cdr_typesize {812UL};
constexpr uint32_t eprosima_fastdds_statistics_PhysicalData_max_key_cdr_typesize {28UL};


constexpr uint32_t eprosima_fastdds_statistics_detail_Locator_s_max_cdr_typesize {28UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_Locator_s_max_key_cdr_typesize {0UL};


constexpr uint32_t eprosima_fastdds_statistics_detail_GuidPrefix_s_max_cdr_typesize {16UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_GuidPrefix_s_max_key_cdr_typesize {0UL};

constexpr uint32_t eprosima_fastdds_statistics_detail_SampleIdentity_s_max_cdr_typesize {44UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_SampleIdentity_s_max_key_cdr_typesize {0UL};

constexpr uint32_t eprosima_fastdds_statistics_EntityData_max_cdr_typesize {36UL};
constexpr uint32_t eprosima_fastdds_statistics_EntityData_max_key_cdr_typesize {28UL};

constexpr uint32_t eprosima_fastdds_statistics_Entity2LocatorTraffic_max_cdr_typesize {82UL};
constexpr uint32_t eprosima_fastdds_statistics_Entity2LocatorTraffic_max_key_cdr_typesize {56UL};

constexpr uint32_t eprosima_fastdds_statistics_detail_EntityId_s_max_cdr_typesize {8UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_EntityId_s_max_key_cdr_typesize {0UL};

constexpr uint32_t eprosima_fastdds_statistics_EntityCount_max_cdr_typesize {40UL};
constexpr uint32_t eprosima_fastdds_statistics_EntityCount_max_key_cdr_typesize {28UL};

constexpr uint32_t eprosima_fastdds_statistics_WriterReaderData_max_cdr_typesize {64UL};
constexpr uint32_t eprosima_fastdds_statistics_WriterReaderData_max_key_cdr_typesize {56UL};

constexpr uint32_t eprosima_fastdds_statistics_SampleIdentityCount_max_cdr_typesize {56UL};
constexpr uint32_t eprosima_fastdds_statistics_SampleIdentityCount_max_key_cdr_typesize {44UL};

constexpr uint32_t eprosima_fastdds_statistics_Locator2LocatorData_max_cdr_typesize {64UL};
constexpr uint32_t eprosima_fastdds_statistics_Locator2LocatorData_max_key_cdr_typesize {56UL};

constexpr uint32_t eprosima_fastdds_statistics_detail_GUID_s_max_cdr_typesize {28UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_GUID_s_max_key_cdr_typesize {0UL};

constexpr uint32_t eprosima_fastdds_statistics_detail_SequenceNumber_s_max_cdr_typesize {12UL};
constexpr uint32_t eprosima_fastdds_statistics_detail_SequenceNumber_s_max_key_cdr_typesize {0UL};


namespace eprosima {
namespace fastcdr {

class Cdr;
class CdrSizeCalculator;



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::EntityId_s& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::GuidPrefix_s& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::GUID_s& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::SequenceNumber_s& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::SampleIdentity_s& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::detail::Locator_s& data);




eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::DiscoveryTime& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::EntityCount& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::SampleIdentityCount& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::Entity2LocatorTraffic& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::WriterReaderData& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::Locator2LocatorData& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::EntityData& data);



eProsima_user_DllExport void serialize_key(
        eprosima::fastcdr::Cdr& scdr,
        const eprosima::fastdds::statistics::PhysicalData& data);










} // namespace fastcdr
} // namespace eprosima

#endif // _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_TYPESCDRAUX_HPP_

