/**
 * @file /qadd_server/qadd.hpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef QADD_NODE_HPP_
#define QADD_NODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <string>
#include <std_msgs/String.h>
#include "../common/qnode.hpp"
#include "qt_tutorials/TwoInts.h"

/*****************************************************************************
** Class
*****************************************************************************/

class QAdd : public QNode {

public:
	QAdd(int argc, char** argv);
	virtual ~QAdd() {}
	void run();
	void ros_comms_init();
private:
	ros::ServiceClient add_client;
};

#endif /* QADD_NODE_HPP_ */
