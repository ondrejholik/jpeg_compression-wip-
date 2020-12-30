#include <iostream>
#include <array>
#include <valarray>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "ppm.h"

using namespace std;

int main(int argc, char * argv[]){
  
  if(argc != 3){
    cerr << "2 arguments:\ninput.ppm output.jpg\n";
    return -1;
  }

  // Load PPM image
  
  ppm image(argv[1]);

  image.write(argv[2]);

  /*
  int ci = 0;

  for(unsigned int i = 0; i < image.height; ++i){
    for(unsigned int j = 0; i < image.width; ++j){

      int r = image.r[ci];
      int g = image.g[ci];
      int b = image.b[ci];

      ++ci;
    }
  }

  */
}

