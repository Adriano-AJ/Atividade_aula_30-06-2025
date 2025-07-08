#include <iostream>
using namespace std;

void print(int *arg, int t)
{
	for(int i=0; i < t; ++i)
	{
		cout << "Elemento: " << i << " = "
		     << arg[i] << endl; 
	}
	cout << "---------" << endl;
}

int main(int argc, char** argv)
{
	int a[4] = {7, 2, 1, 4};
    print(a, 4);

    int c[7];
    for(int i = 0; i < 7; ++i) {
        c[i] = 0;
    }

    for(int i = 0; i < 4; ++i) {
        c[a[i] - 1] += 1;
    }

    int b[4];
    int j = 0;
    for(int i = 0; i < 7; ++i) {
        for(int k = 0; k < c[i]; ++k) {
            b[j++] = i + 1;
        }
    }

    print(b, 4);

    return 0;
}
