#include <iostream>
#include <cstring>
using namespace std;

char encryption_dat[] = {'2','7','8','v','a','g','b','h','&','$','l','z','k','p','r','j','k','-','d','#','4','q','w','e',')','t'};
char decryption_dat[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

const int MAXIMUM_SIZE = sizeof(decryption_dat);

int index(char arr[], char x)
{
    for(int i=0; i<MAXIMUM_SIZE ; i++)
    {
        if(arr[i] == x)
        {
            return i; 
        }
    }
    return -1;
}

string encryption(string s)
{
    int ind;

    for(int i=0; i< s.size() ; i++)
    {
        ind = index(decryption_dat, s[i]);
        if(ind >= 0)
        {
            s[i] = encryption_dat[ind];
        }
    }

    return s;
}

string decryption(string s)
{
    int ind;

    for(int i=0; i< s.size() ; i++)
    {
        ind = index(encryption_dat, s[i]);
        if(ind >= 0)
        {
            s[i] = decryption_dat[ind];
        }
    }

    return s;
}

int main ()
{
    cout << "Current size of array is: " << MAXIMUM_SIZE << endl;

    string str=""; //enter the string you'd like to encrypt
    cout << "\n Intial: " << str << endl;
    str = encryption(str);
    cout << "\n Encryption: " << str << endl;
    str = decryption(str);
    cout << "\n Decryption: " << str << endl;

    return 0;
}