/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: December 7, 2018
 *      Author: SrikarNamburi
 */

#include <Utilities/NetworkTablesInterface.h>
#include "NetworkTablesInterface.h"
#include "NetworkTables/NetworkTableInstance.h"


bool NetworkTablesInterface::gethi(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetBoolean(false);
}
