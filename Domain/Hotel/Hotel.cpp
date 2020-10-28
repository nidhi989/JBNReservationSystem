#include <string>
#include <vector>

#include "Domain/Hotel/HotelHandler.hpp"
#include "Domain/Hotel/HotelHandler.cpp"

namespace Domain::Hotel {

  HotelBase::HotelBase(){}

  std::string HotelBase::addCostHotel(const std::vector<std::string> & args){



  }

  std::string HotelBase::payHotel(const std::vector<std::string> & args){



  }

  std::string HotelBase::checkoutHotel(const std::vector<std::string> & args){



  }

  std::string HotelBase::unassignHotelRoom(const std::vector<std::string> & args){
    std::string results = "Checking out room " + args[0] + "...";
    return {results};
  }

  std::string HotelBase::assignHotelRoom(const std::vector<std::string> & args){




  }







}
