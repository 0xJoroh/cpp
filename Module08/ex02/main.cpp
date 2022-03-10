#include "MutantStack.hpp"

void lfonction()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    cout << mstack.top() << endl;
    mstack.pop();
    cout << mstack.size() << endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        cout << *it << endl;
        ++it;
    }

    cout << "----------------------------------" << endl;
    {
        MutantStack<int> V;
        MutantStack<int>::iterator iter;
        V.push(1);
        V.push(2);
        V.push(3);
        V.push(4);
        V.push(5);
        V.push(6);
        for (iter = V.begin(); iter != V.end(); iter++)
            cout << *iter << endl;
    }
}

int main()
{
    lfonction();
    // system("leaks ");
    return 0;
}