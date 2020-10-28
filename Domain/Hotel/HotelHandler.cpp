#include <memory> // unique_ptr, make_unique
#include "Domain/Hotel/HotelHandler.hpp"
#include "Domain/Hotel/Hotel.hpp"
#include "Domain/Hotel/Hotel.cpp"


namespace Domain::Hotel
{
  HotelHandler::~HotelHandler() noexcept = default;

  std::unique_ptr<HotelHandler> HotelHandler::initiateHotel()
  {
    // auto & persistantData = TechnicalServices::Persistence::PersistenceHandler::instance();
    return std::make_unique<Domain::HotelBase>();
  }
} // namespace UI
