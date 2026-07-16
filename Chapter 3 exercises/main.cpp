#include "PPPheaders.h"

int main () {
    /*
    //[1]
    string input;
    cin >> input;
    for (char x : input) {
        int int_val_char = x;
        cout << x << '\t' << int_val_char << endl;
    }


   //[2]
   // fill vector with temps
   vector<double> temps;
   for(double temp; cin >> temp;){
    temps.push_back(temp);
   }

   //calculate the mean
   ranges::sort(temps);

   cout << temps.size() << endl;
   double medianL, medianR;
   double median;

   if (temps.size() % 2 != 0) {
    cout << "Median value: " << temps[temps.size()/2] << endl;
   }
   else {
     // median left and right values
    medianL = temps[temps.size()/ 2];
    medianR = temps[temps.size()/2 - 1];
    median = (medianL + medianR) / 2;
    
    cout << median;
    //cout << "Median value: " << temps[(temps[medianR]+temps[medianL]) / 2] << endl;
   }
    

    //[4] Series Vector - Distances
    vector<double> distances; // created vector
    double sum_of_distances = 0; //initalized to 0 since no negative save space.
    double smallest_distance;
    double largest_distance;
    double mean; // total distances / size of vector

    for(double distance_between_two_cities; cin >> distance_between_two_cities;){
        distances.push_back(distance_between_two_cities);
        sum_of_distances += distance_between_two_cities;
    }

    largest_distance = distances[distances.size() - 1];
    smallest_distance = distances[0];
    mean = sum_of_distances / distances.size();
    

    cout << sum_of_distances << endl << smallest_distance << endl << largest_distance << endl << mean;
    
   //[5]: number guessing game
   int r = 100;
   int l = 0;
   char input;

   while (input != '=')
   {
    int mid = std::ceil((r-l)/2 + l); // add l because then it'll set it to the correct l and ciel since when we divide in half .5 is usually the case 
    cout << "Is your number >, <, or = to " << mid << endl;
    cin >> input;

    if (input == '<') {
        r = mid; //50, 25, 12
        cout << "R: " <<r << endl ;
    }
    if (input == '>') {
        l = mid;// 
        cout << "L: " <<l << endl ;

    }
   }
   */ 

   //[9]
   int total_number_of_rice = 0;
   int current_grain = 1;
   
   for (int i = 0; i < 64; i++){
    cout << i << "Current Grain: " << current_grain << " Current Total_number of Rice: " << total_number_of_rice << endl;
    current_grain = current_grain * 2;
    total_number_of_rice += current_grain;
    if (total_number_of_rice >= 1000 && total_number_of_rice <= 1000000){
        cout << "(1000)Inventor needs " << i << " Squares" <<endl;
    }
    else if (total_number_of_rice >= 1000000 && total_number_of_rice <= 1000000000)
        cout << "(1,000,000)Inventor needs " << i << " Squares" <<endl;
    else if (total_number_of_rice >= 1000000000)
        cout << "(1,000,000,000)Inventor needs " << i << " Squares" <<endl;
    else{
        cout << "Too many";
    }

    
   }

   



   



};