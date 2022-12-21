#pragma once

#define RESOLUTION_ARRAY_SIZE 32
#define DEPTH_ARRAY_SIZE 8

class CGame {
public:
    char name[256];
    int x_array[RESOLUTION_ARRAY_SIZE];
    int y_array[RESOLUTION_ARRAY_SIZE];
    int depth[DEPTH_ARRAY_SIZE];

    bool IsValidResolutionSet(int x, int y, int bits);

};