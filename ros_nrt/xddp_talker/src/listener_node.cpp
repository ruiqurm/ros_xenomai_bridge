#include "xddp_utilities/ListenerXddp.h"

int main(int argc, char**argv)
{
    ros::init(argc, argv, "listener");
    ListenerXDDP listener("/xddp");
    ros::Rate loop_rate(10);
    ros::spin();
}
