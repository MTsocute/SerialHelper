# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SerialHelper_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SerialHelper_autogen.dir\\ParseCache.txt"
  "SerialHelper_autogen"
  )
endif()
