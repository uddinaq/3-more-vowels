
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/* These are constants used to format the output, and also used to define each letter, capital and lowercase. We also use the fstream library to define a file variable
*/
const char dot = '.', star = '*';
const char a = 'a', A = 'A', e = 'e', E = 'E', I = 'I', i = 'i', O = 'O', o = 'o', u = 'u', U = 'U', j = 'J', Q = 'Q', Z = 'Z';
string letter;
ifstream newFile;

//Each vowel counter is set to 0 initially and will get incremeneted each time the program sees one
int Acounter = 0, Ecounter = 0, Icounter = 0, Ocounter = 0, Ucounter = 0, jcounter = 0,Qcounter = 0, Zcounter = 0, sum = 0;


/*In our main function we have to pass in argc, and argv. argc is an integer which is the number of arguments that get passed through the main function and argv takes each argument seperated by spaces and stores them as elements in the array */

int main(int argc, char* argv[]) {
    //argv[1] is used to open because argv[0] is always the name of the file, so to open the file we do fileName.open(argv[argumentNumber])	

    newFile.open(argv[1]);
    cout << setw(50) << setfill(star) << star << endl;
    cout << setfill('*') << setw(12) << star << "Welcome to my letter counter"
        << setfill('*') << setw(12) << star << endl;
    cout << setw(50) << setfill(star) << star << endl;
    cout << endl;

    cout << "Analyzing file Constitution_of_the_United_States.html..." << endl;
    cout << endl;

    //The if statement is to see if the file opened, if it opens successfully, the program will continue executing, and if not it will return and error
    if (newFile.is_open()) {
        char letter;
        // this while loop will go through each letter, and will increment the appropriate letter counter when it recognizes equality
        while (newFile.get(letter)) {
            if (letter == a) {
                Acounter = Acounter + 1;
            }
            if (letter == A) {
                Acounter = Acounter + 1;
            }
            if (letter == e) {
                Ecounter = Ecounter + 1;
            }
            if (letter == E) {
                Ecounter = Ecounter + 1;
            }
            if (letter == i) {
                Icounter = Icounter + 1;
            }
            if (letter == I) {
                Icounter = Icounter + 1;
            }
            if (letter == o) {
                Ocounter = Ocounter + 1;
            }
            if (letter == O) {
                Ocounter = Ocounter + 1;
            }
            if (letter == u) {
                Ucounter = Ucounter + 1;
            }
            if (letter == U) {
                Ucounter = Ucounter + 1;
            }
            if (letter == j) {
                jcounter = jcounter + 1;
            }
            if (letter == Q) {
                Qcounter = Qcounter + 1;
            }
            if (letter == Z) {
                Zcounter = Zcounter + 1;
            }
        }
    }
    //Error for improper file i/o
    else {
        cout << "Error opening file" << endl;
        return 0;
    }

    sum = Acounter + Ecounter + Icounter + Ocounter + Ucounter + jcounter + Qcounter + Zcounter;

    cout << left << setw(60) << setfill(dot) << "The number of A's" << Acounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of E's" << Ecounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of I's" << Icounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of O's" << Ocounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of U's" << Ucounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of j's" << jcounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of Q's" << Qcounter
        << endl;
    cout << left << setw(60) << setfill(dot) << "The number of Z's" << Zcounter
        << endl;
    
    cout << left << setw(60) << setfill(dot) << "The vowel count and the other three letters is" << sum << endl;

    return 0;
}