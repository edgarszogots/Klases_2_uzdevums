#include <iostream>
using namespace std;

class threedoubles
{
public:
    double x;
    double y;
    double z;
}

int main()
{
    threedoubles t;
    t.set (1.1, 2.2, 3.3);
    t.printsum ();
    threedoubles *tp = new threedoubles (0.2, 0.3, 0.4);
    tp->printsum();
    delete tp;
    return 0;
}
