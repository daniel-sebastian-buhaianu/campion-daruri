#include <fstream>
using namespace std;
int cmmdc(int a, int b);
int main()
{
	ifstream f("daruri.in");
	int T, L;
	f >> T >> L;
	int dc = cmmdc(T, L);
	int np=0, nt=0, nl=0;
	if (dc > 1)
	{
		np = dc;
		nt = T/np;
		nl = L/np;
	}
	f.close();
	ofstream g("daruri.out");
	g << np << '\n';
	g << nt << ' ' << nl;
	g.close();
	return 0;
}
int cmmdc(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
