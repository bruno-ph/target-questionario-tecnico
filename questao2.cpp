#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string input_string;
    int a_counter = 0;
    getline(std::cin, input_string);
    int string_size = input_string.length();
    for (int i = 0; i < string_size; i++)
    {
        if (input_string[i] == 'a' or input_string[i] == 'A')
        {
            a_counter++;
        }
    }
    if (!a_counter)
    {
        cout << "Não houve ocorrência da letra A\n";
        return 0;
    }
    cout << "A letra A apareceu " << a_counter << " vez(es)\n";
    return 0;
}