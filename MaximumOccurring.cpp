// MaximumOccurring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

char maximumOccurringCharacter(string text) {

    auto stringSize = text.size();
    int counter[256] = { 0 };
    int max = 0;
    char result = 0;

    for (auto i = stringSize; i > 0; i--)
    {
        counter[text[i]]++;

        if (max <= counter[text[i]])
        {
            max = counter[text[i]];
            result = text[i];
        }
    }

    //for (auto i = 48; i <= 122; i++)
    //{
    //    if (i == 58)
    //    {
    //        cout << endl;
    //        i = 65;
    //    }

    //    if (i == 91)
    //    {
    //        cout << endl;
    //        i = 97;
    //    }
    //        
    //    cout << (char)i << ": " << counter[i] << endl;
    //}

    //cout << endl << "Max = " << max << endl;

    return result;
}

int main()
{
    string string1 = "YD1N35ro7iXNEYp7M3GhZ0pK9qKx4ftBaQDd1dtViBdSQTAUDkXI6Z9xDHbCf6IhQp7Na5CZt3pNDNaiRmfX4ezXHToRfiHACgWK";
    //string string1 = "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";

    cout << "String1:" << endl;
    cout << string1 << endl;
    cout << "Most occurring character: " << maximumOccurringCharacter(string1) << endl;

    return 0;
}