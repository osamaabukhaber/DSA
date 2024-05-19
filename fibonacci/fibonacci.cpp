#include <iostream>
#include<vector>
#include<array>
//#include "fibonacci.h"
using namespace std;
int fibonacci(int n) {
	if (n <= 1)
		return n;

	int prev = 0;
	int current = 1;

	for (int i = 2; i <= n; ++i) {
		int next = prev + current;
		prev = current;
		current = next;
	}

	return current;
}


void incr(int* c)
{
	int w = 10;
	c = &w;
	cout << *c << endl;

}

int* DoubleValue(int* v)
{
	int d = (*v) * 2;
	return &d;

}
int* heap(int* v)
{
	int result = 2 * (*v);
	int* ptr = new int(2 * (*v));
	//int* ptr = new int(555);
	return ptr;
	new int(5);
}

int** Array2D(int r, int c)
{

	int** ptr = new int* [r];
	for (int i = 0;i < r;i++)
	{
		ptr[i] = new int[c];
	}
	return ptr;
}

void InputArrayNums(int r, int c, int** ptr)
{
	for (int i = 0; i < r; i++)
	{
		cout << "Enter Array " << i << " nums\n";
		for (int j = 0; j < c; j++)
		{
			cin >> ptr[i][j];
		}
	}
}

void PrintArrayNums(int r, int c, int** ptr)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << ptr[i][j];
		}
		cout << endl;
	}
}

void rec(int v)
{
	if (v == 0)
		return;
	printf("%d", v--);
	rec(v);
}

void forN(int v)
{
	for (int i = v; i > 0; i--)
	{
		printf("%d\n", i);
	}
}

void Calc(vector<int> vec)
{
	int result = 0;
	for (int i = 0;i < vec.size();i++)
	{
		result += vec.at(i);
	}
	cout << "\nResult = " << result;
}

void Calc_Arr(int a[], int count)
{
	int result = 0;
	for (int i = 0;i < count;i++)
	{
		result += a[i];
	}
	cout << "\nResult = " << result;

}

//void funWord(string w)
//{
//	
//	char c = [w];
//		if (w[i] == w[i + 1])
//		{
//			//i++;
//		}
//		else
//		{
//			cout << w[i] << "\n";
//
//		}
//
//}

void ForFact(int v)
{
	int f = 1;
	for (int i = 1;i <= v;++i)
	{
		f = f * i;
		//cout << "h" << v + 1 << endl;
	}
	cout << f;
}

void fibo(int v)
{
	int p = 0, n = 1, r = 1;
	for (int i = 0; i <= v;i++)
	{

		cout << p;
		r = p + n;
		p = n;
		n = r;
	}

}

void FiboRec(int v)
{
	int p = 0, n = 1, r = 1;


}

int fiborec(int v)
{
	if (v <= 1)
		return 1;

	return fiborec(v - 1) + fiborec(v - 2);
}

int farec(int v)
{
	//if (v == 1)
	//	return 1;
	//else if (v <= 0)
	//		return 0;
	if (v <= 0)
		return 0;
	else if (v == 1)
		return 1;

	return farec(v - 1) + farec(v-2);

}

int FactRec(int v)
	{
		////int f=v;
		if (v <= 0)
			return 1;
		//while (v==0)
		//{

		//}
		//cout<< v ;
		//FactRec(v-1);
		return v * FactRec(v - 1);

	}

int diagonalDifference(vector<vector<int>> arr) {

		int a = 0, b = 0, c = 0;
		// for(int i=0;i<arr.size();i++)
		//  {
		//      a=a+arr[i][i];
		//  }

		for (int j = arr.size();j >= 0;j--)
		{
			b = b + arr[j][j];
		}

		return b;


	}

	int main()
	{
		int n = 5;
		for (int i = 0; i < n;i++)
		{
			cout << farec(i);
		}

		//vector<int> ve(3);
		//ve = { 1,2,3 };
		//int v = 5;
		//for (int i = 0;i <= v;i++)
		//{
		//	cout << farec(i);
		//}
		//cout <<endl<< ve.size();
		//fibo(5);
		//cout<<FactRec(6);
		//ForFact(5);
		//cout<<fact(5);
		//funWord("hhhhhhhhhhhjjjjellkkkko");
		//int count = 5;
		//int sum=1;
		//for (int i = 1;i <= count;i++)
		//{
		//	sum *= i;
		//}
		//cout << sum;
		//for (int i = count;i > 0;i--)
		//{
		//	sum
		//}

		//vector <int> vec{ 10,20,30 };
		//cout << vec.at(1)<<endl;
		//cout << vec[1]<<endl;
		//vec.push_back(400);
		////cout << vec.size()<<endl;
		////vec.push_back(40);
		//cout  << vec[3] << "\n";
		//cout << vec.size()<<endl;
		//vec.pop_back();
		//vec.pop_back();
		//vec.pop_back();
		//cout << vec.size() << endl;

		//int arr[] = { 1,2,3,6,8 };
		//int ar_size = size(arr);
		//int i = 0;
		//int vecSize;
		//vector<int> vec2;
		//cin >> vecSize;
		//vec2.resize(vecSize);
		//while (i<vec2.size())
		//{
		//	cin >> vec2[i] ;
		//	i++;
		//}
		//int j = 0;
		//while (j<vec2.size())
		//{
		//	cout << vec2[j];
		//	j++;
		//}
		//vector<int>vec1 = { 4,5,6,20 };
		//array<int, 5> newArr{ 1,2,3,4,5 };
		//int ars = size(arr);
		//int aa = vec1.size();
		////Calc(vec1);
		////Calc_Arr(arr,ar_size);
	}

