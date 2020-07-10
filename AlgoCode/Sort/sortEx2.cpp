#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

//class: 여러개의 변수를 하나로 묶기 위해서 사용
class Student{
public :
    string name;
    int score;
    Student(string name, int score){ //생성자 
        this -> name = name;
        this -> score = score;
    }
    //정렬기준 = 점수가 작은 순서로 
    bool operator <(Student & student){
        return this -> score <student.score;
    }
};
/*bool compare ( int a, int b){
    return a>b;       
}*/

int main (void){
    Student students[] = {
        Student("나동빈",90),
        Student("이상욱",93),
        Student("박한울",97),
        Student("강종구",87),
        Student("이태일",92)
    };
    sort(students, students+5);
    for( int i=0; i<5;i++){
        cout <<students[i].name << ' ';
    }
}