#pragma once

#include <any>
#include <memory>      // unique_ptr
#include <stdexcept>   // runtime_error
#include <string>
#include <vector>


namespace Domain::Hotel {

  class HotelHandler {
    public:
      static std::unique_ptr<HotelHandler> initiateHotel();

      virtual std::string addCostHotel(const std::vector<std::string> & args) = 0;
      virtual std::string payHotel(const std::vector<std::string> & args) = 0;
      virtual std::string checkoutHotel(const std::vector<std::string> & args) = 0;
      virtual std::string unassignHotelRoom(const std::vector<std::string> & args) = 0;
      virtual std::string assignHotelRoom(const std::vector<std::string> & args) = 0;

      virtual ~HotelHandler() noexcept = 0;

    private:


  };

}
