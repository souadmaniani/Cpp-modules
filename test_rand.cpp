#include "iostream"
using namespace std;
 
class point
{ 
    public:
        double x, y;
        point()
        {

        }
        point (double px, double py)
        {
            x = px, y = py;
        }
};
 
int main(void)
{
    point a;
    point b(a);
    // cout << a[0].x << "\n";
    return (0);
}