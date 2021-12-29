#include "mode.h"
#include "Rover.h"

void ModeRemoteGCS::update()
{
	g2.motors.set_steering(cmd.desired_steering * 4500.0f, false);
    g2.motors.set_throttle(cmd.desired_throttle * 100.0f);
    gcs().send_text(MAV_SEVERITY_INFO,"throttle: %f, steering : %f",cmd.desired_throttle,cmd.desired_steering);
/*    gcs().send_text(MAV_SEVERITY_INFO,"MAV_CMD_DO_SET_SERVO");
*/}
void ModeRemoteGCS::set_throttle(float _desired_throttle)
{
	cmd.desired_throttle = _desired_throttle;
}
void ModeRemoteGCS::set_steering(float _desired_steering)
{
	cmd.desired_steering = _desired_steering;
} 

