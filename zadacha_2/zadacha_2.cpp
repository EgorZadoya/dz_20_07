#include "String.h"

int main()
{
    String s1{ "egor" };
    String s2{ "zadoya" };
    s1 += s2;
    s1.show();
    cout << endl;
    s1.clear();
    s1.show();
    Bit_string b1 { "34" };
    b1.show();
}