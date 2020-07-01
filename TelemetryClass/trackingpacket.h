


#ifndef TRACKINGPACKET_H
#define TRACKINGPACKET_H

#include <string>

#include "datapacket.h"

// Class definition
class TrackingPacket : public DataPacket {
  private:
    std::string latitude,longitude;



  // Function prototypes
  public:
    void print();


};


#endif