#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include "GradedActivity.h"

class PassFailExam : public GradedActivity
{
	protected:
		int question, missedQuestion;
		double passingScore;
	public:
		PassFailExam(q, m, p) {
			question = q;
			missedQuestion = m;
			passingScore = p;
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