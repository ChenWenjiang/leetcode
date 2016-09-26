// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {

    //    return guessNumber(1,n);
        int b = 1;
        int e = n;
        int m = (e-b)/2 + b;
        while(1)
        {
            if(guess(m)==-1)
            {
                e = m;
                m = (e-b)/2 + b;
            }
            else if(guess(m)==1)
            {
                b = m+1;
                m = (e-b)/2 + b;
            }
            else
                return m;
        }
    }
/*    int guessNumber(int b,int e)
    {
        if(b==e)
            return b;
        if(guess((b+e)/2)==1)
            return guessNumber((b+e)/2+1,e);
        else if(guess((b+e)/2)==-1)
            return guessNumber(b,(b+e)/2);
        else
            return (b+e)/2;
    }*/
};
