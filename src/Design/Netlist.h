/*
 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   Netlist.h
 * Author: alain
 *
 * Created on April 15, 2019, 8:03 PM
 */

#ifndef NETLIST_H
#define NETLIST_H
#include <string>
#include <vector>
#include "SourceCompile/SymbolTable.h"
#include "Design/FileContent.h"

namespace UHDM {
  class port;
  class net;
};

namespace SURELOG {

class Netlist {
 public:
   Netlist();
  ~Netlist();
  std::vector<UHDM::port*>& actualPorts() { return m_actualPorts;}
  std::vector<UHDM::port*>& ports() { return m_ports;}
  std::vector<UHDM::net*>& nets() { return m_nets;}
 private:
  std::vector<UHDM::port*> m_actualPorts;
  std::vector<UHDM::net*>  m_nets;
  std::vector<UHDM::port*> m_ports;
};

};  // namespace SURELOG

#endif /* NETLIST_H */