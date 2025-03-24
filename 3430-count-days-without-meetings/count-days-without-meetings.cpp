class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;
        sort(meetings.begin(),meetings.end());
        int busy_days = 0;

        int meetings_start = meetings[0][0], meetings_end = meetings[0][1];
        for(int i = 1; i < meetings.size(); i++){
            if (meetings[i][0] <= meetings_end){
                // Merge overlapping meetings
                meetings_end = max(meetings[i][1], meetings_end);
            }
            else{
                busy_days += meetings_end - meetings_start + 1;
                meetings_start = meetings[i][0];
                meetings_end = meetings[i][1];
            }
        }
    // Add last merged interval
        busy_days += (meetings_end - meetings_start + 1);
        return days - busy_days;
    }
};