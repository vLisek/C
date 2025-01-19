#pragma once

struct Point {
    float VarX;
    float VarY;
    float VarZ;
};

float Distance(struct Point PointA, struct Point PointB);
float ShortestDistance(struct Point MyTab[], int Size);