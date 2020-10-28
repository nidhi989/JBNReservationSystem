#pragma once

#include <any>
#include <memory>      // unique_ptr
#include <stdexcept>   // runtime_error
#include <string>
#include <vector>
#include "Domain/Hotel/HotelHandler.hpp"
#include "Domain/Hotel/Hotel.cpp"

namespace Domain::Hotel {

  Class HotelBase : public Hotel::HotelHandler {

    HotelBase();

    std::string addCostHotel(const std::vector<std::string> & args) override;
    std::string payHotel(const std::vector<std::string> & args) override;
    std::string checkoutHotel(const std::vector<std::string> & args) override;
    std::string unassignHotelRoom(const std::vector<std::string> & args) override;
    std::string assignHotelRoom(const std::vector<std::string> & args) override;

    ~HotelHandler() noexcept override = 0;

  };

}
