//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013-2019 Automatak, LLC
// 
// Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
// LLC (www.automatak.com) under one or more contributor license agreements.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership. Green Energy Corp and Automatak LLC license
// this file to you under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may obtain
// a copy of the License at:
// 
//   http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "opendnp3/gen/MasterTaskType.h"

namespace opendnp3 {

uint8_t MasterTaskTypeToType(MasterTaskType arg)
{
  return static_cast<uint8_t>(arg);
}
MasterTaskType MasterTaskTypeFromType(uint8_t arg)
{
  switch(arg)
  {
    case(0):
      return MasterTaskType::CLEAR_RESTART;
    case(1):
      return MasterTaskType::DISABLE_UNSOLICITED;
    case(2):
      return MasterTaskType::ASSIGN_CLASS;
    case(3):
      return MasterTaskType::STARTUP_INTEGRITY_POLL;
    case(4):
      return MasterTaskType::NON_LAN_TIME_SYNC;
    case(5):
      return MasterTaskType::LAN_TIME_SYNC;
    case(6):
      return MasterTaskType::ENABLE_UNSOLICITED;
    case(7):
      return MasterTaskType::AUTO_EVENT_SCAN;
    case(8):
      return MasterTaskType::USER_TASK;
  }
}
char const* MasterTaskTypeToString(MasterTaskType arg)
{
  switch(arg)
  {
    case(MasterTaskType::CLEAR_RESTART):
      return "CLEAR_RESTART";
    case(MasterTaskType::DISABLE_UNSOLICITED):
      return "DISABLE_UNSOLICITED";
    case(MasterTaskType::ASSIGN_CLASS):
      return "ASSIGN_CLASS";
    case(MasterTaskType::STARTUP_INTEGRITY_POLL):
      return "STARTUP_INTEGRITY_POLL";
    case(MasterTaskType::NON_LAN_TIME_SYNC):
      return "NON_LAN_TIME_SYNC";
    case(MasterTaskType::LAN_TIME_SYNC):
      return "LAN_TIME_SYNC";
    case(MasterTaskType::ENABLE_UNSOLICITED):
      return "ENABLE_UNSOLICITED";
    case(MasterTaskType::AUTO_EVENT_SCAN):
      return "AUTO_EVENT_SCAN";
    case(MasterTaskType::USER_TASK):
      return "USER_TASK";
    default:
      return "UNDEFINED";
  }
}

}
