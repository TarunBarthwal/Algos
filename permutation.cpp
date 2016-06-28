# include<iostream>
# include<assert>

using namespace std;

typedef int data_type;

void printCombination(vector<data_type>);
void printPermutation(vector<data_type>);
void swap(data_type&, data_type&);
void print(vector<data_type> &);

vector<data_type> dynamic_input();

int main(void)
{
    vector<data_type> A = dynamic_input();

    printPermutation(A);

    return 0;
}

void printPermutation(vector<data_type> A)
{
    void
    perm(vector<data_type> &, int);
    perm(A, 0);

}

void perm(vector<data_type> &A, int position);
{
    if(position == A.size()-1)
    {
        print(A);
        return;
    }
    for(int i = position; i<A.size(); i++)
    {
        swap(A[position], A[i]);
        perm(A, (position+1));
        swap(A[position], A[i]);
    }
}

void printCombination(vector<data_type> A)
{
    void
    comb(vector<data_type> &, int);
    comb(A, 0);

}

void comb(vector<data_type> &A, int position);
{
    if(position == A.size()-1)
    {
        print(A);
        return;
    }
    for(int i = position; i<A.size(); i++)
    {
        vector<data_type> recursedElements;
        if(ifPresent(recursedElements,A[i]))
        continue;
        recursedElements.push_back(A[i]);

        swap(A[position], A[i]);
        perm(A, (position+1));
        swap(A[position], A[i]);
    }
}

bool ifPresent(vector<data_type> &A, data_type k)
{
    for (int i = 0; i < A.size(); i++)
        if (A[i] == k)
            return true;
    return false;
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
