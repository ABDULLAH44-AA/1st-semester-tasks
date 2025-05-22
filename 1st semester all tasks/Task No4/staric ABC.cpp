

#include <iostream>
using namespace std;

void printA() {
    cout << " *** " << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
}

void printB() {
    cout << "**** " << endl;
    cout << "*   *" << endl;
    cout << "**** " << endl;
    cout << "*   *" << endl;
    cout << "**** " << endl;
}

void printC() {
    cout << " ****" << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << " ****" << endl;
}

void printD() {
    cout << "**** " << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "**** " << endl;
}

void printE() {
    cout << "*****" << endl;
    cout << "*    " << endl;
    cout << "*****" << endl;
    cout << "*    " << endl;
    cout << "*****" << endl;
}

void printF() {
    cout << "*****" << endl;
    cout << "*    " << endl;
    cout << "*****" << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
}

void printG() {
    cout << " ****" << endl;
    cout << "*    " << endl;
    cout << "* ***" << endl;
    cout << "*   *" << endl;
    cout << " ****" << endl;
}

void printH() {
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*****" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
}

void printI() {
    cout << "*****" << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
    cout << "*****" << endl;
}

void printJ() {
    cout << "    *" << endl;
    cout << "    *" << endl;
    cout << "    *" << endl;
    cout << "*   *" << endl;
    cout << " *** " << endl;
}

void printK() {
    cout << "*   *" << endl;
    cout << "*  * " << endl;
    cout << "* *  " << endl;
    cout << "**   " << endl;
    cout << "* *  " << endl;
}

void printL() {
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
    cout << "*****" << endl;
}

void printM() {
    cout << "*   *" << endl;
    cout << "** **" << endl;
    cout << "* * *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
}

void printN() {
    cout << "*   *" << endl;
    cout << "**  *" << endl;
    cout << "* * *" << endl;
    cout << "*  **" << endl;
    cout << "*   *" << endl;
}

void printO() {
    cout << " *** " << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << " *** " << endl;
}

void printP() {
    cout << "**** " << endl;
    cout << "*   *" << endl;
    cout << "**** " << endl;
    cout << "*    " << endl;
    cout << "*    " << endl;
}

void printQ() {
    cout << " *** " << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*  **" << endl;
    cout << " ** *" << endl;
}

void printR() {
    cout << "**** " << endl;
    cout << "*   *" << endl;
    cout << "**** " << endl;
    cout << "* *  " << endl;
    cout << "*  * " << endl;
}

void printS() {
    cout << " ****" << endl;
    cout << "*    " << endl;
    cout << " ****" << endl;
    cout << "    *" << endl;
    cout << "**** " << endl;
}

void printT() {
    cout << "*****" << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
}
void printU() {
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << " *** " << endl;
}
void printV() {
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << " * * " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
}
void printW() {
    cout << "*   *" << endl;
    cout << "*   *" << endl;
    cout << "* * *" << endl;
    cout << "** **" << endl;
    cout << "*   *" << endl;
}
void printX() {
    cout << "*   *" << endl;
    cout << " * * " << endl;
    cout << "  *  " << endl;
    cout << " * * " << endl;
    cout << "*   *" << endl;
}
void printY() {
    cout << "*   *" << endl;
    cout << " * * " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
    cout << "  *  " << endl;
}
void printZ() {
    cout << "*****" << endl;
    cout << "    *" << endl;
    cout << "   *" << endl;
    cout << "  *" << endl;
    cout << "*****" << endl;
}

int main() {
    char c;
    cout << "Enter alphabet (A-Z): ";
    cin >> c;
    switch (c) {
        case 'A':
            printA();
            break;
        case 'B':
            printB();
            break;
        case 'C':
            printC();
            break;
        case 'D':
            printD();
            break;
			case 'E':
            printE();
            break;
			case 'F':
            printF();
            break;
			case 'G':
            printG();
            break;
			case 'H':
            printH();
            break;
			case 'I':
            printI();
            break;
			case 'J':
            printJ();
            break;
			case 'K':
            printK();
            break;
			case 'L':
            printL();
            break;
			case 'M':
            printM();
            break;
			case 'N':
            printN();
            break;
			case 'O':
            printO();
            break;
			case 'P':
            printP();
            break;
			case 'Q':
            printQ();
            break;
			case 'R':
            printR();
            break;
			case 'S':
            printS();
            break;
			case 'T':
            printT();
            break;
			case 'U':
            printU();
            break;
			case 'V':
            printV();
            break;
			case 'W':
            printW();
            break;
			case 'X':
            printX();
            break;
			case 'Y':
            printY();
            break;
        case 'Z':
            printZ();
            break;
        default:
            cout << "Invalid alphabet" << endl;
    }
    return 0;
}