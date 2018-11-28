#include <iostream>
#include <string>
#include "Header Files/function .h"

using namespace std;


int main() {
    int switcher = 1;
    do{
        cout << "\nEnter task\n";
        cin >> switcher;
        switch (switcher){
            case 1:
                 word_from_last_letter();
                cout << "Task 9.42 completed\n";
                break;
            case 2:
                 wordISpalindrome();
                cout << "Task 9.78 completed\n";
            case 3:
                all_letters_e_replace_i();
                cout << "Task 9.90 completed\n";
                break;
            case 4:
                space_on_();
                cout << "Task 9.91 completed\n";
                break;
            case 5:
                replace_on_y();
                cout << "Task 9.92 completed\n";
                break;
            case 6:
                from_ax_to_yx();
                cout << "Task 9.94 completed\n";
                break;
            case 7:
                from_da_to_no();
                cout << "Task 9.95 completed\n";
                break;
            case 8:
                fromPROtoNOT();
                cout << "Task 9.96 completed\n";
                break;
            case 9:
                Glinyannyy();
                cout << "Task 9.108(a) completed\n";
                Graffika();
                cout << "Task 9.108(b) completed\n";
                break;
            case 10:
                remove_3_letter();
                cout << "Task 9.109(a) completed\n";
                break;
            case 11:
                WithoutLetterO();
                cout << "Task 9.110(a) completed\n";
                WithoutLastLetterL();
                cout << "Task 9.110(b) completed\n";
                break;
            case 12:
                internet();
                cout << "Task 9.133 completed\n";
                break;
            case 13:
                steklyannyy();
                cout << "Task 9.118 completed\n";
                break;
            case 14:
                valuable();
                cout << "Task 9.119 completed\n";
        }
    } while (switcher != 0);


}