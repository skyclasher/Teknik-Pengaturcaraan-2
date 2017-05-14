class GradedActivity
{
	protected:
		char letter;
		double score;
		void determinedGrade();
	public:
		GradedActivity() {
			letter = ' ';
			score = 0.0;
		}
		
		void setScore(double s) {
			score = s;
			determinedGrade();
		}
		
		double getScore() const {
			return score;
		}
		
		char getLetterGrade() const {
			return letter;
		}	
};

void GradedActivity::determinedGrade(){
	if(score > 79) {
		letter = 'A';
	}else if (score < 80 && score > 64) {
		letter = 'B';
	}else if (score < 65 && score > 49) {
		letter = 'C';
	}else if (score < 50 && score > 39) {
		letter = 'D';
	}else {
		letter = 'F';
	}
};