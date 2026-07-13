#include "PPPheaders.h"

int main() {
    
    /*
    while (curr_letter <= 122) {
        cout << curr_letter << " " << char_number << "\n";
        char_number++;
        curr_letter++;
    
    }
        
    //i is curr letter
    cout << "PART 2 \n";
    int char_int_value = 'a';

    for (int i = 0 ; char_int_value <= 122; i++) {
        
        char curr_letter = char('a' + i);
        int char_num = curr_letter;
        cout << curr_letter << " " << char_int_value << "\n";
        char_int_value++;
        
    }

    

    vector<double> temps;
    for(double temp; cin >>temp;) 
        temps.push_back(temp);

    double sum = 0;
    for (double x : temps) 
        sum += x;
    
    cout << "Average Temp: " << sum/temps.size() << '\n';

    //median

    ranges::sort(temps);

    cout <<"median temp: " << temps[temps.size()/2];

    
    
    vector<string> words;

    string disliked = "drugs";

    for(string word; cin >> word;){
        words.push_back(word);
    }

    for(int i = 0;  i < words.size(); i++){
        if (words[i] == disliked ){
            cout << "BlEEP" << '\n';
        }
        else
            cout << words[i] << '\n';

    }
    */
    
   //Chapter 3 - Computation Drill

   double smallest;
   double largest;

   double length = 1;
   string unit;

   constexpr double in_per_ft = 12;
   constexpr double cm_per_in = 2.54;
   constexpr double cm = 1;
   constexpr double cm_per_m = 100;

   double sum_of_m = 0;

   int count = 1;

   int num_of_values = 0;

   vector<double> values;


   while (cin >> length >> unit)
   {
    double ft_m_v;
    double cm_m_v;
    double in_m_v;
    

    if (unit == "ft") {
        
        ft_m_v = length * in_per_ft * cm_per_in / cm_per_m;
        values.push_back(ft_m_v);
        sum_of_m += ft_m_v;
        num_of_values++;

    }
    else if (unit == "cm"){
        cm_m_v = length / cm_per_m;
        values.push_back(cm_m_v);
        sum_of_m += cm_m_v;
        num_of_values++;

    }
    else if (unit == "in"){
        in_m_v = length * cm_per_in  / cm_per_m;
        values.push_back(in_m_v);
        sum_of_m += in_m_v;
        num_of_values++;

    }
    else if (unit == "m"){
        values.push_back(length);
        sum_of_m += length;
        num_of_values++;

    }
    else {
        cout << "That's not a valid input try again" << endl;
    }
   
    
    
    /*
        if (count == 1) {
            smallest = input;
            largest = input;
            count--;
        }
        else if (input < smallest){
            smallest = input;
            cout << "The smallest so far is " << smallest << '\n';
            cout << "The largest so far is " << largest << '\n';
        }
        else if (input > largest) {
            largest = input;
            cout << "The largest so far is " << largest << '\n';
            cout << "The smallest so far is " << smallest << '\n';
        }
        else {
            cout << smallest << " " << largest;
        }


        */
            
   }

   ranges::sort(values);
   // print smallest value
   cout << "Smallest " << values[0] << endl;

   // print smallest value
   cout << "Largest " << values[values.size() - 1] << endl;

   //pint number of values
   cout << "Num of Values: " << num_of_values << endl;

   // print sum
   cout << "sum: " << sum_of_m << " m" << endl;

   
   
   // print values
   for (double value : values) {
        cout << value <<  ", ";
   }

   
   
}  
   