/*
 * Copyright (C) 2006-2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <SpeedUpLevelComm.h>



int SpeedUpLevelCommVocab::fromString(const std::string& input) {
  // definitely needs optimizing :-)
  if (input=="NO_SPEEDUP_COMM") return (int)NO_SPEEDUP_COMM;
  if (input=="MED_SPEEDUP_COMM") return (int)MED_SPEEDUP_COMM;
  if (input=="HIGH_SPEEDUP_COMM") return (int)HIGH_SPEEDUP_COMM;
  return -1;
}
std::string SpeedUpLevelCommVocab::toString(int input) const {
  switch((SpeedUpLevelComm)input) {
  case NO_SPEEDUP_COMM:
    return "NO_SPEEDUP_COMM";
  case MED_SPEEDUP_COMM:
    return "MED_SPEEDUP_COMM";
  case HIGH_SPEEDUP_COMM:
    return "HIGH_SPEEDUP_COMM";
  }
  return "";
}


