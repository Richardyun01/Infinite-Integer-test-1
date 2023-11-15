#include "inf_int.h"
#include <iostream>
#include <sstream>
#include <ctime>

using namespace std;

#define TEST_LOOP 5

void waitForEnterKey() {
    cin.get();
}

int main()
{
#if TEST_LOOP
    //�׽�Ʈ 1: ������ �� 6���� �������� ���� Ȯ��
    {
        cout << "\nTEST CASE #1... " << endl;
        inf_int a, e;
        inf_int b(100);
        inf_int c("321111111111122222222222233333333333444444444445555555555");
        inf_int d("123451987651234572749499923455022211");
        inf_int f=d;
        inf_int g(f);

        a = b * c;
        b = c - d;

        if (f == d) {
            cout << "a : " << a << endl;
            cout << "b : " << b << endl;
            cout << "c : " << c << endl;
            cout << "d : " << d << endl;
            cout << "f : " << f << endl;
            cout << "g : " << g << endl;
        }

        waitForEnterKey();
    }

    srand(time(NULL));

    //�׽�Ʈ 2: ������ ������ �� 5���� ��
    cout << "\nTEST CASE #2... " << endl;
	for (int n = 0; n < TEST_LOOP; n++) {
        int a = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        int b = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        if (rand() & 1) a = -a;
        if (rand() & 1) b = -b;

        inf_int ia(a);
        inf_int ib(b);

        bool c1 = (a == b);
        bool c2 = (a != b);
        bool c3 = (a < b);
        bool c4 = (a > b);

        bool ic1 = (ia == ib);
        bool ic2 = (ia != ib);
        bool ic3 = (ia < ib);
        bool ic4 = (ia > ib);

        cout << "#" << n+1 << endl;
        cout << "\t" << ia << " == " << ib << " : " << (ic1 ? "true" : "false") << (c1 == ic1 ? "\t[PASS]" : "\t[FAIL]") << endl;
        cout << "\t" << ia << " != " << ib << " : " << (ic2 ? "true" : "false") << (c2 == ic2 ? "\t[PASS]" : "\t[FAIL]") << endl;
        cout << "\t" << ia << " < "  << ib << " : " << (ic3 ? "true" : "false") << (c3 == ic3 ? "\t[PASS]" : "\t[FAIL]") << endl;
        cout << "\t" << ia << " > "  << ib << " : " << (ic4 ? "true" : "false") << (c4 == ic4 ? "\t[PASS]" : "\t[FAIL]") << endl;

        waitForEnterKey();
	}
	cout << "SUCESS\n";
	waitForEnterKey();

	//�׽�Ʈ 3: ������ ������ �� 5���� ���� ����
	cout << "\nTEST CASE #3... " << endl;
	for (int n = 0; n < TEST_LOOP; n++) {
        int a = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        int b = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        if (rand() & 1) a = -a;
        if (rand() & 1) b = -b;

        inf_int ia(a);
        inf_int ib(b);

        int64_t c = (int64_t)a + (int64_t)b; // 32bit + 32bit > 32bit
        inf_int ic = ia + ib;

        string rstr = std::to_string(c);
        ostringstream ostr;
        ostr << ic;

        cout << "#" << n+1 << endl;
        cout << "\t" << ia << " + " << ib << " = " << ic << (rstr == ostr.str() ? "\t[PASS]" : "\t[FAIL]") << endl;

        waitForEnterKey();
	}
	cout << "SUCESS\n";
	waitForEnterKey();

	//�׽�Ʈ 4: ������ ������ �� 5���� ���� ����
    cout << "\nTEST CASE #4... " << endl;
	for (int n = 0; n < TEST_LOOP; n++) {
        int a = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        int b = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        if (rand() & 1) a = -a;
        if (rand() & 1) b = -b;

        inf_int ia(a);
        inf_int ib(b);

        int64_t c = (int64_t)a - (int64_t)b; // 32bit - 32bit > 32bit
        inf_int ic = ia - ib;

        string rstr = std::to_string(c);
        ostringstream ostr;
        ostr << ic;

        cout << "#" << n+1 << endl;
        cout << "\t" << ia << " - " << ib << " = " << ic << (rstr == ostr.str() ? "\t[PASS]" : "\t[FAIL]") << endl;

        waitForEnterKey();
	}
	cout << "SUCESS\n";
	waitForEnterKey();

	//�׽�Ʈ 5: ������ ������ �� 5���� ���� ����
    cout << "\nTEST CASE #5... " << endl;
	for (int n = 0; n < TEST_LOOP; n++) {
        int a = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        int b = (rand() & 1) ? rand() : ((rand()<<15) | rand());
        if (rand() & 1) a = -a;
        if (rand() & 1) b = -b;

        inf_int ia(a);
        inf_int ib(b);

        int64_t c = (int64_t)a * (int64_t)b; // 32bit * 32bit = 64bit
        inf_int ic = ia * ib;

        string rstr = std::to_string(c);
        ostringstream ostr;
        ostr << ic;

        cout << "#" << n+1 << endl;
        cout << "\t" << ia << " * " << ib << " = " << ic << (rstr == ostr.str() ? "\t[PASS]" : "\t[FAIL]") << endl;

        waitForEnterKey();
	}
	cout << "SUCESS\n\n";
	waitForEnterKey();
#endif

	return 0;
}
