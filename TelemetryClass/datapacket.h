

#ifndef DATAPACKET_H
#define DATAPACKET_H

#include <string>


// Class definition
class DataPacket {
  protected:
   int count; //Number of packets created
   std::string timestamp; // Current timestamp

  // Function prototypes
  public:
    virtual void print() = 0;

};


#endif