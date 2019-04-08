#include <iostream>
using namespace std;

void messageSender(const char* word){
    const char* exp_palabra = word;
    const char* pyfile = "python trial.py ";

    string msj = pyfile;
    msj += exp_palabra;
    //----------------------------------------------------
    //
    //      Ordenar palabra para que se vea mejorcito
    //
    //----------------------------------------------------

    const char* exp_palabra1 = ",";
    msj += exp_palabra1;

    const char* exp_palabra2 = "8896";
    msj += exp_palabra2;

    const char* sendCommand = msj.c_str();

    system(sendCommand);

}

int main() {
    messageSender("fgjfjg");
    return 0;
}