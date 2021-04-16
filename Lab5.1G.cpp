#include <iostream>
#include "Fraction.h"

int main()
{
    cout << "Number of objects of class Fraction: " << Object::Count() << endl;
    Fraction a;
    cout << "Number of objects of class Fraction: " << Object::Count() << endl;
    Fraction b;
    cout << "Number of objects of class Fraction: " << Object::Count() << endl;
    Fraction c;
    cout << "Number of objects of class Fraction: " << Object::Count() << endl;
    int result;

    try
    {
        Fraction F(1, 1);
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (MyException& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }

    cout << "\nPair a" << endl;
    cin >> a;
    cout << a;

    cout << "\nPair b" << endl;
    cin >> b;
    cout << b;

    cout << "\nPair c" << endl;
    cin >> c;
    cout << c;

    cout << "\na and b" << endl;
    result = a.ComparePairs(a, b);
    a.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = a.ComparePairs(a, c);
    a.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = a.ComparePairs(b, c);
    a.ComparePairsResult(result);

    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Fraction) << endl;

    return 0;
}