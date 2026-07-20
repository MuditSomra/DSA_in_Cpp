class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = -1;
        double area;
        int x1;
        int y1;
        int x2;
        int y2;
        int x3; 
        int y3;
        for(int i = 0; i<points.size();i++){
            for(int j = i+1; j < points.size(); j++){
                for(int k= j+1; k < points.size();k++){
                x1 = points[i][0];
                y1 = points[i][1];
                x2 = points[j][0];
                y2 = points[j][1];
                x3 = points[k][0];
                y3 = points[k][1];
                area = 0.5 * abs(x1 * (y2-y3) + x2 * (y3 - y1) + x3*( y1 - y2));
                maxArea = max(area, maxArea);

                }
            }

        }
        return maxArea;
    }
};