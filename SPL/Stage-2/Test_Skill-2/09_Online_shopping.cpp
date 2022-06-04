/*

Online shopping
Arun wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount % and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt in each website and decide which website has the lowest price.
INPUT & OUTPUT FORMAT:

Input consist of 9 integers. First three input corresponds to Flipkart details such as the amount of the shirt, discount offered and shipping charges. Next three input corresponds to Snapdeal details such as the amount of shirt, discount offered and shipping charge. Last three input corresponds to amazon details such as the amount of shirt, discount offered and shipping charge.

SAMPLE INPUT:

1000

50

50

900

50

70

800

10

200

SAMPLE OUTPUT:

In Flipkart: Rs.550

In Snapdeal: Rs.520

In Amazon: Rs.920

He will prefer Snapdeal





SAMPLE INPUT:

1000
60
80
900
50
30
1000
10
200
SAMPLE OUTPUT:
In Flipkart Rs.480
In Snapdeal Rs.480
In Amazon Rs.1100
He will prefer Flipkart


Input (stdin)
1000
60
80
900
50
30
1000
90
89

Output (stdout)
In Flipkart Rs.480
In Snapdeal Rs.480
In Amazon Rs.189
He will prefer Amazon
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int flip_amt, flip_dis, flip_ship, flip_final, snp_amt, snp_dis, snp_ship, snp_final, am_amt, am_dis, am_ship, am_final;
    cin >> flip_amt >> flip_dis >> flip_ship >> snp_amt >> snp_dis >> snp_ship >> am_amt >> am_dis >> am_ship;
    flip_final = (flip_amt - (flip_amt * flip_dis) / 100) + flip_ship;
    snp_final = (snp_amt - (snp_amt * snp_dis) / 100) + snp_ship;
    am_final = (am_amt - (am_amt * am_dis) / 100) + am_ship;

    cout << "In Flipkart Rs." << flip_final << endl;
    cout << "In Snapdeal Rs." << snp_final << endl;
    cout << "In Amazon Rs." << am_final << endl;
    if (flip_final <= snp_final && flip_final <= am_final)
    {
        cout << "He will prefer Flipkart";
    }
    else if (snp_final <= flip_final && snp_final <= am_final)
    {
        cout << "He will prefer Snapdeal";
    }
    else
    {
        cout << "He will prefer Amazon";
    }
    return 0;
}