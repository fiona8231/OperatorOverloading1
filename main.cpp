#include <iostream>

using namespace std;

class Grade{
    int inGrade;
    int outGrade;
public:
    Grade(){
        inGrade = 0;
        outGrade = 0;
    }

    Grade(int iGrade, int oGrade ){
        inGrade = iGrade;
        outGrade = oGrade;
    }

    void display(){
        cout << inGrade << endl << outGrade << endl;
    }

    Grade operator+ (Grade g){

        Grade temp;
        // initialize + g1.in + g2.in = 0 + 20 + 10 = 30
        temp.inGrade = inGrade +  g.inGrade ;
        temp.outGrade = outGrade + g.outGrade;

        return temp;
    }

    Grade operator-(Grade g);
};

//2, Operator function outside the class

Grade Grade::operator- (Grade g){

    Grade temp1;
    temp1.inGrade = inGrade - g.inGrade;
    temp1.outGrade = outGrade - g.outGrade;

    return temp1;

}


int main() {

    Grade g1 = Grade(20, 30);
    Grade g2 = Grade (10, 40);

    Grade g3 = g1 + g2;
    g3.display();

    Grade g4 = Grade(12, 11);
    Grade g5 = Grade(22, 44);

    Grade g6 = g4 - g5;
    g6.display();
    return 0;
}