/*
 * ContinuousAngleTracker.h
 *
 *  Created on: Jul 30, 2015
 *      Author: Scott
 */

#ifndef SRC_CONTINUOUSANGLETRACKER_H_
#define SRC_CONTINUOUSANGLETRACKER_H_

namespace ADBLib
{
	class ContinuousAngleTracker
	{
		float last_angle;
		double last_rate;
		int zero_crossing_count;
	public:
		ContinuousAngleTracker();
		void NextAngle( float newAngle );
		double GetAngle();
		double GetRate();
	};
}

#endif /* SRC_CONTINUOUSANGLETRACKER_H_ */
