#include "PPPheaders.h"

int main() {

try {
    //your code
    /*
    int res = 7;
    vector<int> v(10);
    v[5] = 7;

    if(v[5] == 7 ){
        cout << "Success!\n";
    }
    else{
        cout << "Fail!\n";
    }
    
    bool c1 = false;
    if (c1 == false) {
        cout << "Success!\n";

    }
    else {
        cout << "Fail!\n";
    }
    string s = "ape";
    bool c = "fool";

    if (c) cout << "[9]success!\n";


    if (!(s == "fool")) cout <<"[10]Success!\n";

   
    if (!(s == "fool")) cout << "[11]Success!\n";

    
    string s ="ape";

    if (s != "fool") cout << "[12]Success!\n";

    
   vector<char> v(5);
   for (int i = 0; i < v.size(); ++i){
    cout << "[13]Success\n";
   }
   
   vector<char> v(5);
   for(int i = 0; i<= v.size(); ++i)
    cout << "[14]Success\n";


    string s = "[15]Success!\n";
    for (int i = 0; i < s.size(); ++i)
        cout << s[i];

    if (true) 
        cout << "[16]Success\n"; 
    else 
        cout <<"Fail\n";
    
   int x = 2000;
   int c = x;
   if (c == 2000)
   cout << "[17]Success!\n";

   

   string s ="[18]Success!\n";
   for (int i = 0; i < s.size(); ++i){
    cout << s[i];
    

    vector<int> v(5);

    for (int i = 0; i <= v.size(); ++i)
        cout <<"[19]Success!\n";

    
   int i = 0;
   int j = 9;
   while (i < 10){
    ++i;
    if (j < i){
        cout << "[20]success!" << i << endl;
    }
   }
    

    int x = 2;
    double d = 5 * (x - 2);
    if (d != 2 * x + 0.5){
        cout << "[21] Success!\n";
    }
   

   string s = "[22]Success!\n";
   for (int i = 0; i < s.size(); ++i) cout << s[i];

   


   int i = 0;
   int j = 0;
   while (i < 10){
    ++j;
    if(j < i){
        i++;
        cout << "[23]Success!\n";
    }
   }
    
   int x = 10000;
   double d = 5/(x-2);
   if(d != 2 * x + 0.5){
    cout << "[24]Success!\n";
   }
    */
   cout << "[25]Success!\n";
}
catch (exception& e){
    cerr << "error: " << e.what() << '\n';
 return 1;
}
catch(...){
    cerr << "Opps: unkown exception!\n";
    return 2;
}

}