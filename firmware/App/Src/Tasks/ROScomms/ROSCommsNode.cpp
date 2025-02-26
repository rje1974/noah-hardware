/**
 * @file ROSCommsNode.cpp
 * @author Gonzalo Cervetti (cervetti.g@gmail.com)
 * @brief Entrypoint for the node in charge of communication with ROS
 * @version 0.1
 * @date 16-07-2020
 *
 * @copyright Copyright (c) 2020
 *
 */

// Standard libraries
#include <cstdlib>

// Noah libraries
#include "Config.h"
#include "NodeEntrypoint.h"
#include "Tasks/ROScomms/ROSComms.hpp"
#include "Utils/NoahInfo.h"

using noah::tasks::ROSComms;

// External variable definitions

/**
 * @brief Initializes the power management node
 * @return
 */
int ROSCommsNode(NoahInfoHandler *noah_info_handler) {

  ROSComms ros_node(ROS_PORT, ROS_TASK_UPDATE_RATE_MS, noah_info_handler);

  ros_node.run();
  return EXIT_SUCCESS;
}

