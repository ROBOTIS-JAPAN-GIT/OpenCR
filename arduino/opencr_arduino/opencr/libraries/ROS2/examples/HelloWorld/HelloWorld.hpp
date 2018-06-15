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
 * @file HelloWorld.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _HelloWorld_HPP_
#define _HelloWorld_HPP_


#include "micrortps.hpp"
#include <topic.hpp>


namespace idl {

#include "HelloWorld.h"

} // namespace idl




namespace std_msg {

class HelloWorld : public ros2::Topic<idl::HelloWorld>
{
public:
  idl::HelloWorld message_;

  HelloWorld()
  { 
		serialize = idl::serialize_HelloWorld_topic;
		deserialize = idl::deserialize_HelloWorld_topic;
    write = idl::write_HelloWorld;

  	profile_ = (char*)"<dds>\
                        <topic>\
                          <name>HelloWorldTopic</name>\
                          <dataType>HelloWorld</dataType>\
                        </topic>\
                      </dds>";

		writer_profile_ = (char*)"<profiles>\
                                <publisher profile_name=\"default_xrce_publisher_profile\">\
                                  <topic><kind>NO_KEY</kind>\
                                    <name>HelloWorldTopic</name>\
                                    <dataType>HelloWorld</dataType>\
                                    <historyQos><kind>KEEP_LAST</kind><depth>10</depth></historyQos>\
                                    <durability><kind>TRANSIENT_LOCAL</kind></durability>\
                                  </topic>\
                                </publisher>\
                              </profiles>";

		reader_profile_ = (char*)"<profiles>\
                                <subscriber profile_name=\"default_xrce_subscriber_profile\">\
                                  <topic><kind>NO_KEY</kind>\
                                    <name>HelloWorldTopic</name>\
                                    <dataType>HelloWorld</dataType>\
                                    <historyQos><kind>KEEP_LAST</kind><depth>10</depth></historyQos>\
                                    <durability><kind>TRANSIENT_LOCAL</kind></durability>\
                                  </topic>\
                                </subscriber>\
                              </profiles>";
	};
};


} // namespace std_msg

#endif // _HelloWorld_HPP_
