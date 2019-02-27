//
//  main.cpp
//  Starting to code again
//
//  Created by Benjamin Craig on 2/13/19.
//  Copyright © 2019 Benjamin Craig. All rights reserved.
//

// Standard Template Libraries:
#include <iostream>
#include <string>


////////// TILE CLASS ////////////

class mat{
    
    
    // Store 'mat' matrix (array within array)
    std::string mat [4]
    
    // Store
    std::string rMat [4]
    
        
    
    
};
// Rotate Matrix
void rotateMat(int n, std::string mat[n][n], std::string rMat[n][n]){
    for (int x = 0; x < n; x++){
        for (int y = 0; y < n; y++){
            rMat[x][y] = mat[n-1 - y][x];
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Angle of Rotation (degrees)
    // Needs to be positive or negative multiple of 90
    int angle;
    
    
    // Tile Size
    // (number of columns/rows that program will read in as input for the tile)
    int numberOfTiles;
    
    // Creating the Four mat objects (four different angle tiles)
    for (int i=0; i < 3; i++){
        
    }
    
    // Display Matrix
    for (int i=0; i < numberOfTiles; i++){
        std::cout <<
    }
    

    

    
    

    /////////// Output Tesselation /////////
    
    
    
    
    std::cout << "I would like to print an array.";
    std::cout.flush();
    std::cout << "\n";
    int userInput;
    std::cin >> userInput;
    std::cout << userInput;
    return 0;
}
