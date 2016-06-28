#include <iostream>
#include <vector>

using namespace std;

vector<int> addDigit(vector<int>A, vector<int>B)
{
	vector<int>C;
	int carry = 0,sum = 0;
	
	int i = A.size()-1;
	int j = B.size()-1;
	
	while(i >= 0 && j >= 0)
	{
		assert(A[i]<10); assert(A[i]>=0);
		assert(B[i]<10); assert(B[i]>=0);

		sum = A[i--] + B[j--] + carry;
		C.push_back(sum%10);
		carry = (sum>9)? 1:0;
	}
	
	while(i>=0)
	{
		assert(A[i]<10); assert(A[i]>=0);
		sum = A[i--] + carry;
		C.push_back(sum%10);
		carry = (int)floor(sum/10);
	}
	
	while(j>=0)
	{
		assert(B[i]<10); assert(B[i]>=0);
		sum = B[j--] + carry;
		C.push_back(sum%10);
		carry = (int)floor(sum/10);
	}	
	
	if(carry>0) C.push_back(carry);

	// Reverse the added vector to correct format (right align)
	int K = (int)(C.size()/2);
	for(int k = 0; k < K; k++)
	{
		int temp = C[k];
		C[k] = C[C.size()-1-k];
		C[C.size()-1-k] = temp;
	}
	return C;
}
