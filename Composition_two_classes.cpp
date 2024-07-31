#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int xCoord, int yCoord) {
        x = xCoord;
        y = yCoord;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    void setX(int xCoord) {
        x = xCoord;
    }

    void setY(int yCoord) {
        y = yCoord;
    }
};

class Line {
    Point startPoint;
    Point endPoint;

public:
    Line() {}

    Line(const Point& start, const Point& end) {
        startPoint = start;
        endPoint = end;
    }

    Point getStartPoint() const {
        return startPoint;
    }

    Point getEndPoint() const {
        return endPoint;
    }
};

int main() {
    int x1, y1, x2, y2;

    cout << "Enter the coordinates of the start point:\n";
    cout << "x-coordinate: ";
    cin >> x1;
    cout << "y-coordinate: ";
    cin >> y1;

    cout << "Enter the coordinates of the end point:\n";
    cout << "x-coordinate: ";
    cin >> x2;
    cout << "y-coordinate: ";
    cin >> y2;

    Point start(x1, y1);
    Point end(x2, y2);

    Line line(start, end);

    cout << "\nCoordinates of the start point: (" << line.getStartPoint().getX() << ", " << line.getStartPoint().getY() << ")" << endl;
    cout << "Coordinates of the end point: (" << line.getEndPoint().getX() << ", " << line.getEndPoint().getY() << ")" << endl;

    return 0;
}
