// Brian McIlwain
// HackerRank: cipher

/*  Jack and Daniel are friends. 
    They want to encrypt their conversation so that they can save themselves from interception by a detective agency. So they invent a new cipher. 
    Every message is encoded to its binary representation  of length . 
    Then it is written down  times, shifted by  bits. 
    If  and  it looks so:

    1001010   
     1001010  
      1001010 
       1001010
    Then calculate XOR in every column and write it down. This number is called . For example, XOR-ing the numbers in the above example results in

    1110100110
    Then the encoded message  and  are sent to Daniel.

    Jack is using this encoding algorithm and asks Daniel to implement a decoding algorithm. 
    Can you help Daniel implement this?

    Input Format 
    The first line contains two integers  and . 
    The second line contains string  of length  consisting of ones and zeros.

    Output Format 
    Decoded message of length , consisting of ones and zeros.

    Constraints 
     
     
     
    It is guaranteed that  is correct.

    Sample Input#00

    7 4
    1110100110
    Sample Output#00

    1001010
    Sample Input#01

    6 2
    1110001
    Sample Output#01

    101111
*/

#include<vector>
#include<iostream>
#include<string>

int main() {
    long n, k;
    std::cin >> n >> k;
    
    std::vector<bool> cipher;
    cipher.reserve(n+k-1);
    
    char tmp;
    while (std::cin >> tmp)
        cipher.push_back(tmp == '1');
    
    for(std::vector<bool>::iterator it = cipher.begin(); it != cipher.end() - k + 1; it++) {
        for (int i=1; i<k && it-i != cipher.begin() -1; i++)
            *it = *it ^ *(it-i);
        std::cout << *it;
    }

    return 0;
}
