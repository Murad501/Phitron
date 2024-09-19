#include <stdio.h>
int main()
{
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    long long int value = 0;

    if (mouth == 0)
    {
        // for one
        if (eye >= body * 2)
        {
            value += body;
        }
        else
        {
            value += eye / 2;
        }
    }
    else
    {
        // for three
        if (eye == 0 || body == 0)
        {
            value = 0;
        }
        else if (mouth < eye && mouth < body)
        {
            value = mouth;
            eye -= mouth;
            body -= mouth;
            mouth = 0;

            if (eye >= body * 2)
            {
                value += body;
            }
            else
            {
                value += eye / 2;
            }
        }
        else
        {
            if (eye < body)
            {
                value = eye;
            }
            else
            {
                value = body;
            }
        }
    }

    printf("%lld", value);
    return 0;
}