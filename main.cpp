#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N után alsó vonal
    std::cout << '1-100 ertekek duplazasa' // nem karakter hanem " kell alkalmazni
    for (int i = 0;) //ciklushiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //ciklushiba
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //hibas ciklus
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
