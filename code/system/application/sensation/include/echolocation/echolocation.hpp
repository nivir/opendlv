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

#ifndef ECHOLOCATION_ECHOLOCATION_HPP_
#define ECHOLOCATION_ECHOLOCATION_HPP_

#include <vector>

#include <opendavinci/odcore/base/module/DataTriggeredConferenceClientModule.h>
#include <opendavinci/odcore/data/Container.h>

namespace opendlv {
namespace sensation {
namespace echolocation {

/**
 * This class provides...
 */
class Echolocation
: public odcore::base::module::DataTriggeredConferenceClientModule {
 public:
  Echolocation(int32_t const &, char **);
  Echolocation(Echolocation const &) = delete;
  Echolocation &operator=(Echolocation const &) = delete;
  virtual ~Echolocation();
  virtual void nextContainer(odcore::data::Container &);

 private:
  void setUp();
  void tearDown();
  double PointDistance(float, double, float, double);
  bool Contains(uint32_t, std::vector<uint32_t>);

  std::vector<float> m_angles;
  std::vector<double> m_distances;
  std::vector<odcore::data::TimeStamp> m_times;
  float m_memoryThreshold;
};

} // echolocation
} // sensation
} // opendlv

#endif
