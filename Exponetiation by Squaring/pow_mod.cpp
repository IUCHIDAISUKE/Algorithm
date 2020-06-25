#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// Exponetiation by Squaring (繰り返し二乗法)

ll pow_mod(ll number, ll cnt, ll mod)
{
    if (cnt == 0)
    {
        return 1;
    }
    else if (cnt % 2 == 0)
    {
        ll squaring_number = pow_mod(number, cnt / 2, mod);
        return squaring_number * squaring_number % mod;
    }
    else
    {
        return number * pow_mod(number, cnt - 1, mod) % mod;
    }
}

ll pow_mod_binary(ll number, ll cnt, ll mod)
{
    ll res = 1;
    for (; cnt > 0; cnt >>= 1)
    {
        if (cnt & 1)
        {
            res = (res * number) % mod;
        }
        number = (number * number) % mod;
    }
    return res;
}
