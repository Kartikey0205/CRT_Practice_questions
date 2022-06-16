/*
WORDAKSHARI
Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari. The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. The following rules need to be followed while playing this game. (ii) All other words have to begin with the last letter of the previous word (iii) No words can be repeated. write a program to print the wordakshari chain.
Input Fromat:

Input consists of n+1 lines.

The first n lines contain strings corresponding to the words in the chain.

The last line of input contains the string #### to mark the end of input.

Output Format:

The output consists of the valid wordakshari chain.

The first word can begin with any letter.

Sample Input:

architect

tailor

referee

electrician

nurse

blacksmith

####

Sample Output:

architect

tailor

referee

electrician

nurse

Case 1
Input (stdin)
oracle
error
rohit
####

Output (stdout)
oracle
error
rohit

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Try out your code here
    string str;
    getline(cin, str);
    int count = 0;
    char last = str.back();
    while (str != "####")
    {
        char lastEle = str.back();
        if (count == 0)
        {
            cout << str << endl;
            getline(cin, str);
            count++;
        }
        else if (count > 0 && str.front() == last)
        {
            cout << str << endl;
            last = lastEle;
            getline(cin, str);
            count++;
        }
    }
    return 0;
}