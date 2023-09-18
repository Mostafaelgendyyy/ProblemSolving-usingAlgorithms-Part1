#include <iostream>
#include <cmath>
using namespace std;

class pt
{
public:
    int xCoordinate, yCoordinate;
};

int comparePointinXCoordinate(pt* a, pt* b)
{
    pt *p1 = (pt *)a;
    pt *p2 = (pt *)b;
    if (p1->xCoordinate != p2->xCoordinate)
    {
        return (p1->xCoordinate - p2->xCoordinate);
    }
    return (p1->yCoordinate - p2->yCoordinate);
}

int comparePointinYCoordinate(pt* a, pt* b)
{
    pt *p1 = (pt *)a;
    pt *p2 = (pt *)b;
    if (p1->yCoordinate != p2->yCoordinate)
    {
        return (p1->yCoordinate - p2->yCoordinate);
    }
    return (p1->xCoordinate - p2->xCoordinate);
}

/**********************************
 * Get distance between to points *
 **********************************/
float findDistance(pt p1, pt p2)
{
    return sqrt((p1.xCoordinate - p2.xCoordinate) * (p1.xCoordinate - p2.xCoordinate) + (p1.yCoordinate - p2.yCoordinate) * (p1.yCoordinate - p2.yCoordinate));
}


/***********************************************************
 * Function that Gets smallest distance between two points *
 ***********************************************************/
float BruteForceRule(pt P[], int n)
{
    float minimum = 1000000000000000000000000000.0;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (findDistance(P[i], P[j]) < minimum)
                minimum = findDistance(P[i], P[j]);
    return minimum;
}

float min(float x, float y)
{
    if (x>y){
        return y;
    }
    return x;
}

/***********************************************************************************************
 * Function that Gets smallest distance between the closest points after sorting according to Y*
 ***********************************************************************************************/
float Distance_Two_Closest(pt Points[], int size, float d)
{
    float min = d;
    qsort(Points, size, sizeof(pt), reinterpret_cast<int (*)(const void *, const void *)>(comparePointinYCoordinate));// sort coordinates according yCoordinate
    for (int i = 0; i < size; ++i){
        for (int j = i+1; j < size && (Points[j].yCoordinate - Points[i].yCoordinate) < min; ++j) {
            if (findDistance(Points[i], Points[j]) < min) {
                min = findDistance(Points[i], Points[j]);
            }
        }
    }
    return min;
}


/************************************************************************************
 * Function that Gets smallest distance bafter sorting Coordinates according to X,Y *
 ************************************************************************************/
float closestRecur(pt Px[], pt Py[], int n)
{
    qsort(Px, n, sizeof(pt), reinterpret_cast<int (*)(const void *, const void *)>(comparePointinXCoordinate)); // sort coordinates according X
    qsort(Py, n, sizeof(pt), reinterpret_cast<int (*)(const void *, const void *)>(comparePointinYCoordinate)); // sort coordinates according Y
    if (n <= 3)
        return BruteForceRule(Px, n);

    int mid = n/2;
    pt  midPoint = Px[mid];

    // divide Coordinates Sorted According to Y to left ,right
    pt  PointsYleft[mid];
    pt  PointsYright[n-mid];
    int leftInd = 0, rightInd = 0;
    for (int i = 0; i < n; i++)
    {
        if ((Py[i].xCoordinate < midPoint.xCoordinate || (Py[i].xCoordinate == midPoint.xCoordinate && Py[i].yCoordinate < midPoint.yCoordinate)) && leftInd < mid)
            PointsYleft[leftInd++] = Py[i];
        else
            PointsYright[rightInd++] = Py[i];
    }

    float dl = closestRecur(Px, PointsYleft, mid);
    float dr = closestRecur(Px + mid, PointsYright, n - mid);

    float d = min(dl, dr);

    pt  CloserPoints[n];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (abs(Py[i].xCoordinate - midPoint.xCoordinate) < d)
            CloserPoints[j] = Py[i], j++;

    // get the closest points in CloserPoints.
    return Distance_Two_Closest(CloserPoints, j, d);
}
/****************************************
 * Function that Gets smallest distance *
 ****************************************/
float closest(pt  P[], int n)
{
    pt  Px[n];
    pt  Py[n];
    for (int i = 0; i < n; i++)
    {
        Px[i] = P[i];
        Py[i] = P[i];
    }

    return closestRecur(Px, Py, n);
}

int main()
{

}
/*
 Example:
 pt P[6] = {
            {2, 3},
            {12, 30},
            {40, 50},
            {5, 1},
            {12, 10},
            {3, 4}
    };
    cout << "The smallest distance is " << closest(P, 6);
 */
