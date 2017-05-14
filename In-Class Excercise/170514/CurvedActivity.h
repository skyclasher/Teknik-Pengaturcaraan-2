#ifndef CURVEDACTIVITY_H
#define CURVEDACTIVITY_H
#include "GradedActivity.h"

class CurvedActivity : public GradedActivity
{
	protected:
		double rawScore;
		double percentage;
	public:
		CurvedActivity() : GradedActivity() {
			rawScore = 0.0;
			percentage = 0.0;
		}
		
		void setScore(double s){
			rawScore = s;
			GradedActivity::setScore(rawScore * percentage);
		}
		
		void setPercentage(double c){
			percentage = c;
		}
		
		double getPercentage() const {
			return percentage;
		}
		
		double getRawScore() const {
			return rawScore;
		}
};
#endif