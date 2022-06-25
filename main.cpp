

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool isSame(string s){
    bool temp=true;
    int center=s.size()/2;
    for(int i = 1 ; 0<=center-i;i++){
        if(string(1,s.at(center))!=string(1,s.at(center-i))){
            temp=false;
            return temp;
        }
        if(center+i<s.size()){
            if(string(1,s.at(center-i))!=string(1,s.at(center+i))){
                temp=false;
                return temp;
            }
        }
    }
    return temp;
}
bool inPalindromic(string s){
    bool tempBool=true;
    int center=(s.size()-1)/2;
    for(int i = 1 ;0<=center-i;i++){
        if(string(1,s.at(center-i)) != string(1,s.at(center+i))) {
            tempBool = false;
            return tempBool;
        }
    }
    return tempBool;
}

string longestPalindrome(string s) {
    string temp;
    string temp2;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            string tempV2=s.substr(i,s.size()-j-i);
            if(s.substr(i,s.size()-j-i).size()%2==0){
                if(isSame(s.substr(i,s.size()-j-i))){
                    temp=s.substr(i,s.size()-j-i);
                }
                else {
                    string tempV3 = s.substr(i,s.size()-j-i);
                    tempV3.insert(tempV3.size() / 2, "a");
                    if (inPalindromic(tempV3))
                        temp = s.substr(i,s.size()-j-i);
                }
            }
            else if(s.substr(i,s.size()-j-i).size()%2!=0 && inPalindromic(s.substr(i,s.size()-j-i))){
                temp=s.substr(i,s.size()-j-i);
            }

            if(temp2.size()<temp.size())
                temp2=temp;
        }
    }
    return temp2;
}



 // Driver code
 int main()
 {
    isSame("cb");
    cout<<longestPalindrome("babad")<<endl;
    cout<<longestPalindrome("cbbd")<<endl;
    cout<<longestPalindrome("a")<<endl;
    cout<<longestPalindrome("ibvjkmpyzsifuxcabqqpahjdeuzaybqsrsmbfplxycsafogotliyvhxjtkrbzqxlyfwujzhkdafhebvsdhkkdbhlhmaoxmbkqiwiusngkbdhlvxdyvnjrzvxmukvdfobzlmvnbnilnsyrgoygfdzjlymhprcpxsnxpcafctikxxybcusgjwmfklkffehbvlhvxfiddznwumxosomfbgxoruoqrhezgsgidgcfzbtdftjxeahriirqgxbhicoxavquhbkaomrroghdnfkknyigsluqebaqrtcwgmlnvmxoagisdmsokeznjsnwpxygjjptvyjjkbmkxvlivinmpnpxgmmorkasebngirckqcawgevljplkkgextudqaodwqmfljljhrujoerycoojwwgtklypicgkyaboqjfivbeqdlonxeidgxsyzugkntoevwfuxovazcyayvwbcqswzhytlmtmrtwpikgacnpkbwgfmpavzyjoxughwhvlsxsgttbcyrlkaarngeoaldsdtjncivhcfsaohmdhgbwkuemcembmlwbwquxfaiukoqvzmgoeppieztdacvwngbkcxknbytvztodbfnjhbtwpjlzuajnlzfmmujhcggpdcwdquutdiubgcvnxvgspmfumeqrofewynizvynavjzkbpkuxxvkjujectdyfwygnfsukvzflcuxxzvxzravzznpxttduajhbsyiywpqunnarabcroljwcbdydagachbobkcvudkoddldaucwruobfylfhyvjuynjrosxczgjwudpxaqwnboxgxybnngxxhibesiaxkicinikzzmonftqkcudlzfzutplbycejmkpxcygsafzkgudy")<<endl;
    cout<<longestPalindrome("tattarrattat")<<endl;
    cout<<longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth")<<endl;

    return 0;
 }


