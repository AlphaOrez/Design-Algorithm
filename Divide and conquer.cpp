#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	cout << "enter the value of multiplier" << endl;
	cin >> a;
	cout << "enter the value of multiplicand" << endl;
	cin >> b;

	//cout << a << endl;
	int lena = a.length();
	int lenb = b.length();
	int moda = lena % 2;
	int modb = lenb % 2;
	string sk,skk,s,ss;
	
	
		if (moda == 0)
		{

			s = a;
		}
		else
		{
			reverse(a.begin(), a.end());
			string d = "0";
			string s1 = a;
			string s2 = d;

			// Concatenate both strings 
			sk = s1 + s2;
			
			reverse(sk.begin(), sk.end());
			s = sk;
			
		}



		if (modb == 0)
		{

			ss = b;
		}
		else
		{
			reverse(b.begin(), b.end());
			string d = "0";
			string s1 = b;
			string s2 = d;

			// Concatenate both strings 
			skk = s1 + s2;

			reverse(skk.begin(), skk.end());
			ss = skk;
			
		}
		
		int newlena = s.length();
		int newlenb = ss.length();
		int lendiffb = newlena - newlenb;
		int lendiffa = newlenb - newlena;

		if (newlena > newlenb)
		{
			for (int i = 0; i < lendiffb; i++)
			{
				reverse(ss.begin(), ss.end());
				ss = ss + "0";
				reverse(ss.begin(), ss.end());
			}
		}
		else if (newlenb > newlena)
		{
			for (int i = 0; i < lendiffa; i++)
			{
				reverse(s.begin(), s.end());
				s = s + "0";
				reverse(s.begin(), s.end());
			}
		}



		string xx = s.substr(0, s.length() / 2);
		string yy = s.substr(s.length() / 2);
		cout << "division of multiplier    " << xx << "  " << yy << endl;
		string pp = ss.substr(0, ss.length() / 2);
		string qq = ss.substr(ss.length() / 2);
		cout << "division of multiplicand  " << pp << "  " << qq << endl;
		

		int num;
		long x = stoi(xx);
		long y = stoi(yy);
		long p = stoi(pp);
		long q = stoi(qq);

		long step1 = x * p;
		long step2 = y * q;
		long step3 = (x + y) * (p + q);
		long step4 = step3 - step2 - step1;

		
		string s1 = to_string(step1);
		

		int lenaa = s.length();
		string ac;
		string s2;
		if (lenaa == 2 && s[0] == '0')
		{	
			ac = s1 + "00";
		}
		else
		{
			for (int i = 0; i < lenaa; i++)
			{
				s2 = s2 + "0";
			}
			ac = s1 + s2;
		}
		string s3 = to_string(step4);
		string zeros, newstep4;

		int lenbb = ss.length();
		
		if (lenbb == 2 && ss[0] == '0')
		{
			
			newstep4 = s3 + "0";
		}
		else
		{
			for (int i = 0;i < lenbb / 2;i++)
			{

				zeros = zeros + "0";

			}
			newstep4 = s3 + zeros;
		}

   		long z = stoi(ac);
		long v = stoi(newstep4);
	    long step5 = z + step2 + v;
		cout <<"Result:  "<< step5 << endl;

	system("pause");
	return 0;

}