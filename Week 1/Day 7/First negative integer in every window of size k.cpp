vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
    vector<long long> v;
    queue<long long> ni;

    int i = 0, j = 0;
    while (j < K)
    {
        if (A[j] < 0)
            ni.push(j);
        j++;
    }

    while (j <= N)
    {
        if (!ni.empty())
            v.push_back(A[ni.front()]);
        else
            v.push_back(0);

        if (A[i] < 0)
            ni.pop();
        i++;
        if (j < N && A[j] < 0)
            ni.push(j);
        j++;
    }

    return v;
 }