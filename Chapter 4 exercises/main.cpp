#include "PPPheaders.h"
int sum_of_n(int n, vector<int> x){
    if (n < 0){
        error("Out of range can't get sum");
    }
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += x[i];
    }

    return sum;
}

int main(){
    try {
    int n = 0;
    vector<int> nums;
    int sum = 0;
    cout << "Please enter the number of values you want to sum: ";
    cin >> n;
    cout <<"Please enter some integers (press '|' to stop): ";
    for (int num; cin >> num;){
        nums.push_back(num);
    }

    sum = sum_of_n(n, nums);

    cout << "The sum of the first " << n << " numbers ";
    
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << ", ";
    }
    
    cout << "is " << sum;
    }
    catch(exception& e){
        cerr << e.what() << endl;
    }   

}

/*
void quad_formula(int a, int b, int c){
    //Precondition: b^2 - 4ac cannot be less than 0: result no real roots
    int inside_root = (b*b) - 4 * (a * c);
    if(inside_root < 0){
        error("No real root", inside_root);
    }

    double x1 = ((-b + sqrt(inside_root)) / (2 * a));
    double x2 = ((b + sqrt(inside_root)) / (2 * a));

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

int main(){
    try{
        int a, b, c = 0;

        cout << "Please enter a, b, c: ";
        cin >> a >> b >> c;
        quad_formula(a,b,c);
        return 0;
    }
    catch (exception& e){
        cerr << "Error: " << e.what() << endl;
    }


}




double ctok(double c) {
    double k = c + 273.25;
    //Precondition: if K is below -273.15C = 0K throw error
    if (k < 0){
        error("Lowest Tempeture is 0k");
    }
    return k;
}

double ktoc(double k){
    double c = k - 273.25;
    //Precondition: if K is below -273.15C = 0K throw error
    if (c < -273.15){
        error("Lowest Temperture can't be lower than -273.15");
    }
    return c;

}

int main() {
    try {
        int c_input = 0;
        double k_input = 0;
        cout << "Enter C" << endl;
        cin >> c_input;

        cout << "Enter K" << endl;
        cin >> k_input;

        double k_output = ctok(c_input);
        double c_output = ktoc(k_input);

        cout << "K: " << k_output << "\n";
        cout << "C: " << c_output << endl;
        return 0;

    }
    catch(exception& e){
        cerr << "Error: " << e.what() << endl;
    }

    
}




void error(string s){
    throw runtime_error{s}; // what reports error, creates and throws and exception object, then it travels up call stack until a catch block handles it
}

int main()
try{

    return 0; // means succces
}

catch (runtime_error& e) { //standard library defines a few tyes of exceptions out_of_range also runtime_error
    cerr << "runtime error: " << e.what() <<'\n';
    return 1;
}

catch(...){ //catch ... handles exceptions of any type whatsover
    cerr << "Oops: unkowns exception!\n";
    return 2;
}






double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("divide by zero"); // detect
    }
    return a / b;
}

int main() {
    try {
        double result = divide(10, 0);
    }
    catch (const std::exception& e) { // handle
        std::cout << e.what() << '\n' << "Handled bitch";
    }
}

int main() {

    

try {
    //your code
    
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
*/