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

#ifndef _STD_MSGS_BOOL_HPP_
#define _STD_MSGS_BOOL_HPP_


#include "micrortps.hpp"
#include <topic_config.h>
#include <topic.hpp>


namespace std_msgs {


class Bool : public ros2::Topic<Bool>
{
public:
  bool data;

  Bool():
    Topic("std_msgs::msg::dds_::Bool_", STD_MSGS_BOOL_TOPIC),
    data(false)
  { 
  }

  virtual bool serialize(MicroBuffer* writer, const Bool* topic)
  {
      serialize_bool(writer, topic->data);

      return writer->error == BUFFER_OK;
  }

  virtual bool deserialize(MicroBuffer* reader, Bool* topic)
  {
      deserialize_bool(reader, &topic->data);

      return reader->error == BUFFER_OK;
  }

  virtual uint32_t size_of_topic(const Bool* topic)
  {
      (void)(topic);
      uint32_t size = 0;

      size += 1 + get_alignment(size, 1);

      return size;
  }

};

} // namespace std_msgs


#endif // _STD_MSGS_BOOL_HPP_