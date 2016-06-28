# include<iostream>

using namespace std;

typedef int data_type;

int main(void)
{
    vector<data_type> dynamic_input();
    void combination(vector<data_type>);

    vector<data_type> A;

    A = dynamic_input();

    combination(A);

    return 0;
}

void combination(vector<data_type> A)
{
    void swap(data_type &, data_type &);
    void print(vector<data_type> &);

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            swap(A[i], A[j]);
            print(A);
            swap(A[i], A[j]);
        }
    }
}

void swap(data_type &a, data_type &b)
{
    data_type temp = a;
    a = b;
    b = temp;
}

void print(vector<data_type> &A)
{
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << "  ";
    cout << endl;
}

vector<data> dynamic_input()
{
    vector < data > A;

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
