#include <string>
#include <iostream>
#include <vector>

using namespace std;

typedef int data;		// Input format data for vector(can be int float etc.)

vector<data> dynamic_input();
subarray max_subarray(vector<data> &, int, int);

struct subarray
{
        data sum;
        int start;
        int end;

        subarray(data sum0, int start0, int end0)
        {
            sum = sum0;
            start = start0;
            end = end0;
        }
};

int main(void)
{
    vector<data> A = dynamic_input();
    subarray max_array = max_subarray(A, 0, A.size() - 1)

    return 0;
}

subarray max_subarray(vector<data> &A, int p, int r)
{
    subarray max_crossarray(vector<data> &, int, int, int);

    if (p == r)
        return subarray(A[p], p, p);

    int q = (int) (p + r) / 2;
    subarray left = max_subarray(A, p, q);
    subarray right = max_subarray(A, q + 1, r);
    subarray cross = max_crossarray(A, p, q, r);
    if (left.sum >= right.sum && left.sum >= cross.sum)
        return left;
    if (right.sum >= left.sum && right.sum >= cross.sum)
        return right;
    return cross;
}

subarray max_crossarray(vector<data> &A, int p, int q, int r)
{
    subarray cross_sum(A[q], q, q);
    data left_max_sum = A[q];
    data sum = (data) 0;
    for (int i = q; i >= p; i--)
    {
        sum += A[i];
        if (sum > left_max_sum)
        {
            left_max_sum = sum;
            cross_sum.start = i;
        }
    }

    data right_max_sum = A[q];
    sum = (data) 0;
    for (int i = q; i <= r; i++)
    {
        sum += A[i];
        if (sum > right_max_sum)
        {
            right_max_sum = sum;
            cross_sum.end = i;
        }
    }

    cross.sum = left_max_sum + right_max_sum - A[q];
    return cross;
}

vector<data> dynamic_input()
{
    vector<data> A;

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

    return A;
}
