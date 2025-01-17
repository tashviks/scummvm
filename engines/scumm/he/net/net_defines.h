/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SCUMM_HE_NET_DEFINES_H
#define SCUMM_HE_NET_DEFINES_H

namespace Scumm {

// pnetwin.h

#define PN_PRIORITY_HIGH							0x00000001

#define PN_SENDTYPE_INDIVIDUAL						1
#define PN_SENDTYPE_GROUP							2
#define PN_SENDTYPE_HOST							3
#define PN_SENDTYPE_ALL								4

#define MAX_GAME_NAME								128				/* Used for the multiplayer networking code */
#define MAX_PLAYER_NAME								128				/* Used for the multiplayer networking code */
#define MAX_PROVIDER_NAME							128
#define MAX_SESSION_NAME							128

#define MAX_GAMES_POLLED							16
#define MAX_PROVIDERS								16

#define PACKETTYPE_REMOTESTARTSCRIPT				1
#define PACKETTYPE_REMOTESTARTSCRIPTRETURN			2
#define PACKETTYPE_REMOTESTARTSCRIPTRESULT			3
#define PACKETTYPE_REMOTESENDSCUMMARRAY				4

const int MAX_PACKET_SIZE = 4096;	// bytes
const int MAX_HOSTNAME_SIZE = 256;
const int MAX_IP_SIZE = 32;

} // End of namespace Scumm

#endif
