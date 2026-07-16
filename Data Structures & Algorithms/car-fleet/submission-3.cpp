class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        //i am going to store (index, time taken)
        int fleets = 0;
        double fleetTime = 0;
        vector <pair<int,double>> cars;
        for(int i=0; i<position.size();++i){
            double time=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
            //check for 2 conditions each iteration
            //1. position same, speed diff = change speed+ add fleet
            //2. position same, speed diff=add fleet
        }
        sort(cars.rbegin(), cars.rend());
         stack<double> stk;
        for (auto& car : cars) {
        double t = car.second;
        if (stk.empty() || t > stk.top()) {
            stk.push(t); // new fleet
        }
    }

        return stk.size();
        
    }
};
