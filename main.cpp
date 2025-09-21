#include <iostream>
#include "libs/portaudio/include/portaudio.h"

using namespace std;

int main() {
    PaError paErr = Pa_Initialize();
    if (paErr != paNoError) {
        cerr << "Pa_Initialize error: " << Pa_GetErrorText(paErr) << endl;
        return 1;
    }

    cout << "Hello world!" << endl;

    // TODO Use RAII
    paErr = Pa_Terminate();
    if (paErr != paNoError) {
        cerr << "Pa_Terminate error: " << Pa_GetErrorText(paErr) << endl;
        return 1;
    }

    return 0;
}