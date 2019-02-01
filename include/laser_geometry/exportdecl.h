/*
 * Cross platform macros.
 *
 */
#ifndef LASER_GEOMETRY__DECL_H_
#define LASER_GEOMETRY__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef laser_geometry_EXPORTS  // we are building a shared lib/dll
    #define LASER_GEOMETRY_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define LASER_GEOMETRY_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define LASER_GEOMETRY_DECL
#endif

#endif