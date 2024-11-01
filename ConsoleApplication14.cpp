#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string n1;
    int a1;
    string m1;

public:
    Student(const string& n1, int a1, const string& m1)
        : n1(n1), a1(a1), m1(m1) {}

    virtual void dispinf() const {
        cout << "Student Name: " << n1 << endl;
        cout << "Age: " << a1 << endl;
        cout << "Major: " << m1 << endl;
    }
};

class asoirnt : public Student {
private:
    string thzpik;

public:
    asoirnt(const string& n1, int a1, const string& m1, const string& thzpik)
        : Student(n1, a1, m1), thzpik(thzpik) {}
    void dispinf() const override {
        Student::dispinf();
        cout << "Thesis Topic: " << thzpik << endl;
    }
};

int main() {
    Student student("John Doe", 20, "Computer Science");
    student.dispinf();
    cout << "------------------" << endl;
    asoirnt aspirant("Jane Smith", 25, "Physics", "Quantum Computing");
    aspirant.dispinf();

    return 0;
}
