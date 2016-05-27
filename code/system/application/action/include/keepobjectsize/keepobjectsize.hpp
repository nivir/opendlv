/**
 * Copyright (C) 2015 Chalmers REVERE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

#ifndef KEEPOBJECTSIZE_KEEPOBJECTSIZE_HPP_
#define KEEPOBJECTSIZE_KEEPOBJECTSIZE_HPP_

#include <memory>

#include "opendavinci/odcore/base/module/DataTriggeredConferenceClientModule.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendlvdata/GeneratedHeaders_opendlvdata.h"

namespace opendlv {
namespace action {
namespace keepobjectsize {

/**
 * This class provides...
 */
class KeepObjectSize
: public odcore::base::module::DataTriggeredConferenceClientModule {
 public:
  KeepObjectSize(int32_t const &, char **);
  KeepObjectSize(KeepObjectSize const &) = delete;
  KeepObjectSize &operator=(KeepObjectSize const &) = delete;
  virtual ~KeepObjectSize();
  virtual void nextContainer(odcore::data::Container &);

 private:
  void setUp();
  void tearDown();

  std::unique_ptr<opendlv::perception::Object> m_object;
  float m_desiredAzimuth;
  float m_angularSize;
};

} // keepobjectsize
} // action
} // opendlv

#endif
