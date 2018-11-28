//
// Created by Арина Дракон on 13/11/2018.
//
#include <iostream>
#include "../Header Files/function .h"
using namespace std;

//9.42
void word_from_last_letter() {
    cout << "Enter word:" << '\n';
    string word;
    cin >> word;
    for (int i = 0; i<word.size(); i++) {
        word[i] = word[word.size() - i - 1];
    }
    cout << "Result: " << word << '\n';
}


//9.78
void wordISpalindrome(){
    cout << "Enter word: \n";
    string word;
    cin >> word;
    int i, j;
    for (i = 0, j = word.size() - 1; i < word.size() / 2; i++, j--)
        if (word[i] != word[j])
            cout << "word isn't palindrome\n";
        else
        cout << "word is palindrome\n";
}

//9.90
void all_letters_e_replace_i() {
    cout << "Enter sentence:" << '\n';
    string sentence;
    cin >> sentence;
    for (int i = 0; i < sentence.size()-1; i++) {
        if (sentence[i] == 'e')
            sentence[i] = 'i';
    }
    cout << "Result: " << sentence << '\n';
}
//9.91
void space_on_(){
    cout << "Enter sentence:" << '\n';
    string sentence = "kejd swx  sdcc ascx";
    for (int i = 0; i<sentence.size()-1; i++){
        if(sentence[i] == ' ') {
                sentence[i] = '_';
        }
    }
    cout << "Result: " << sentence << '\n';
}
//9.92
void replace_on_y() {
    cout << "Enter sentence:" << '\n';
    string sentence;
    cin >> sentence;
    for (int i = 0; i < sentence.size()-1; i++) {
        if (sentence[i] % 2 == 0)
            sentence[i] = 'y';
        if (sentence[i] == ' ') {
                sentence[i] = '_';
        }
    }
    cout << "Result: " << sentence << '\n';
}

//9.94
void from_ax_to_yx(){
    cout << "Enter sentence:" << '\n';
    string sentence ;
    cin >>  sentence;
    for (int i=0; i< sentence.size()-1; i++){
        if ((sentence[i] == 'a') && (sentence[i+1] == 'x')) //srgerga
            sentence[i] = 'y';
    }
    cout << "Result: " << sentence << '\n';
}
//9.95
void from_da_to_no(){
    cout << "Enter sentence:" << '\n';
    string sentence;
    cin >> sentence;
    for (int i=0; i<sentence.size()-1; i++) {
        if(sentence[i] == 'd' && sentence[i+1] == 'a') {
            sentence[i] = 'n';
            sentence[i + 1] = 'o';
        }
    }
    cout << "Result: " << sentence << '\n';
}

//9.96
void fromPROtoNOT() {
    cout << "Enter sentence:" << '\n';
    string sentence;
    cin >> sentence;
    for (int i = 0; i < sentence.size() - 1; i++) {
        if (sentence[i] == 'p' && sentence[i + 1] == 'r' && sentence[i + 2] == 'o') {
            sentence[i] = 'n';
            sentence[i + 1] = 'o';
            sentence[i + 2] = 't';
        }
    }
    cout << sentence << '\n';
}

//9.109
void remove_3_letter(){
    cout << "task 9.109(a)" << '\n';
    string S1,S2;
    cout << "Enter sentence S1:" << '\n';
    cin >> S1;
    cout << "Enter sentence S2:" << '\n';
    cin >> S2;
    for (int i = 1; i < S1.size()-1; ++i)
        if (i  % 3 != 0)
            S2 += S1[i];
    cout << "Result: " << S2 << '\n';
}

//9.108
void Glinyannyy() {
    cout << "task 9.108(a)" << '\n';
    cout << "enter word: \n";
    string S1;
    cin >> S1;
    int k, m = 0;
    for (int i = 0; i < S1.size() - 1; ++i) {
        if (S1[i] == 'n') {
            k = i;
        }
        ++m;
    }
    if (m == S1.size())
        cout << "fail\n";
    else
        S1.erase(k, 1);
    cout << S1<<'\n';
}

void Graffika() {
    cout << "\ntask 9.108(b)" << '\n';
    cout << "enter word: \n";
    string S1;
    cin >> S1;
    int k, m = 0;
    for (int i = 0; i < S1.size() - 1; ++i) {
        if (S1[i] == 'f') {
            k = i;
        }
        ++m;
    }
    if (m == S1.size())
        cout << "fail\n";
    else
        S1.erase(k, 1);
    cout << S1<<'\n';
}

//9.110
void WithoutLetterO(){
    cout << "\ntask 9.110" << '\n';
    cout << "enter word: \n";
    string  str1;
    cin >> str1;
    for (int i = 0; i < str1.size() - 1; i++) {
        if (str1[i] == 'o') {
            str1.erase(i, 1);
            break;
        }
    }
    cout << str1 << '\n';
}

void WithoutLastLetterL() {
    cout << "\ntask 9.110(b)" << '\n';
    cout << "enter word: \n";
    string S, str1;
    cin >> S;
    str1 = S;
    int i = 0;
    for (i = 0; i < str1.size() - 1; i++) {
        if (str1[i] == 'l') {
            str1.erase(i + 2, 1);
        }
    }
    cout << str1 << '\n';
}
//9.133
void internet() {
    cout << "task 9.133" << '\n';
    string str1 = "iternetn";
    swap(str1[7], str1[1]);
    swap(str1[7], str1[2]);
    swap(str1[7], str1[3]);
    swap(str1[7], str1[4]);
    swap(str1[7], str1[5]);
    swap(str1[7], str1[6]);
    cout << str1 << '\n';
}
//9.118
void steklyannyy(){
    cout << "task 9.118" << '\n';
    string str1 = "steklyanyy_.";
    char N = 'n';
    str1.insert(upper_bound(str1.begin(), str1.end(), N), N);
    cout << str1 << '\n';
}
//9.119
void valuable() {
    cout << "task 9.119" << '\n';
    string str1 = "tsenaya thing_.";
    char N = 'n';
    if (str1[3] == N)
        str1[4] = N;
    cout << str1 << '\n';
}
