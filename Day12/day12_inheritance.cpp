#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


///// Boilerplate start
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
///// Boilerplate end
///// Code start
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string fName, string lName, int student_id, vector<int> t_scores) : Person(fName, lName, student_id), testScores(t_scores)
        {}
        char calculate()
        {
            int average = accumulate(testScores.begin(), testScores.end(), 0)/testScores.size();
            if(average < 40)
                return 'T';
            else if(average < 55)
                return 'D';
            else if(average < 70)
                return 'P';
            else if(average < 80)
                return 'A';
            else if(average < 90)
                return 'E';
            return 'O';
        }
};
///// Code end
///// Boilerplate start
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
///// Boilerplate end