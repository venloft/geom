#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i;
    float s[3], p = 0, sq,m;
	switch(m)
{	
case 1:
    cout << "Vvedite storoni" << endl;
    for (i = 0; i < 3; i++) {
        cin >> s[i];
        p = p + s[i];
    }
    p = p * 0.5;
    sq = sqrt(p * (p - s[i]) * (s[i - 1]) * (p - s[i - 2]));
 cout << "sq= " << sq << endl;
break;
case 2:
	cout << "Vvedite radius" << endl;
    	cin<<p;
    
    
    sq = 3.1415*p*p;
 cout << "sq= " << sq << endl;

}
 return 0;
}

