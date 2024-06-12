#include <list>
#include <map>
#include <iostream>

int main(){

  // my list
  std::list<int> ma_lista;
  ma_lista.push_back(4);
  ma_lista.push_back(5);
  ma_lista.push_back(4);
  ma_lista.push_back(1);
  
  std::list<int>::const_iterator lit (ma_lista.begin()), lend(ma_lista.end());
  for(;lit!=lend;++lit){
    std::cout << *lit << ' ';
  }

  std::cout << std::endl; 
  std::cout << std::endl; 

  /*
  // my map
  std::map<std::string,unsigned> map_mis_idx;
  map_mis_idx["enero"] = 1;
  map_mis_idx["febrero"] = 2;
  //...
  std::map<std::string,unsigned>::const_iterator  mit (map_mis_idx.begin());
  std::map<std::string,unsigned>::const_iterator  mend(map_mis_idx.end());
  for(;mit!=mend;++mit){
      std::cout << mit->first << '\t' << mit->second << std::endl;
  }

  std::cout << "long way " << std::endl; 
  for(std::map<std::string,unsigned>::const_iterator  mit = map_mis_idx.begin() ;mit!=map_mis_idx.end();++mit){
      std::cout << mit->first << '\t' << mit->second << std::endl;
  }
  */
  
  std::cout << std::endl; 
  return 0;
}
