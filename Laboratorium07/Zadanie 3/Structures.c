#include "Structures.h"
#include <math.h>

float Distance(struct Point PointA, struct Point PointB) {
    return sqrtf((PointB.VarX - PointA.VarX) * (PointB.VarX - PointA.VarX) + (PointB.VarY - PointA.VarY) * (PointB.VarY - PointA.VarY) + (PointB.VarZ - PointA.VarZ) * (PointB.VarZ - PointA.VarZ));
}

float ShortestDistance(struct Point MyTab[], int Size) {
    float MinDistance = Distance(MyTab[0], MyTab[1]);

    for (int i = 0; i < Size; i++) {
        for (int j = i + 1; j < Size; j++) {
            float PointDistance = Distance(MyTab[i], MyTab[j]);
            if (PointDistance < MinDistance) {
                MinDistance = PointDistance;
            }
        }
    }

    return MinDistance;
}