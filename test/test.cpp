#include <iostream>
#include <memory>
#include <string>

#include <test.h>

int main(int argc, char ** argv) {

  // Check # of arguments
  if (argc==1) {
    std::cout<<"Usage: "<<argv[0]<<" <nfishes>"<<std::endl;
    return 0;
  }

  int nfishes = std::stoi(argv[1]);
  std::cout<<"nfishes = "<<nfishes<<std::endl;

  Dolphin *willy = new Dolphin(2);
  for (int i=0; i<nfishes; i++) {
    willy->fish();
  }

  return 0;
}
