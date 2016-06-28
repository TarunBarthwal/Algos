#include <string>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

typedef int form;		// Input data format for vector(can be int float etc.)

int dynamic_input(vector<form>);

struct sub_array
{
        vector<form> sub;
        form total;
        int i, j;
};

void main()
{
    vector<form> A;
    dynamic_input(&A);

    return;
}

sub_array max_subarray(vector<form> A, int p, int r)
{

}

int dynamic_input(vector<form> A)
{
    A.push_back(13);
    A.push_back(-3);
    A.push_back(-25);
    A.push_back(20);
    A.push_back(-3);
    A.push_back(-16);
    A.push_back(-23);
    A.push_back(18);
    A.push_back(20);
    A.push_back(-7);
    A.push_back(12);
    A.push_back(-5);
    A.push_back(-22);
    A.push_back(15);
    A.push_back(-4);
    A.push_back(7);

    return 0;
}
