/*
 *  NWNeXalt - Empty File
 *  (c) 2007 Doug Swarin (zac@intertex.net)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  $Id$
 *  $HeadURL$
 *
 */

#ifndef _NX_NWN_STRUCT_CNWSDOOR_
#define _NX_NWN_STRUCT_CNWSDOOR_

struct CNWSDoor_s {
  CNWSObject obj;
  CExoString OnOpen;
  CExoString OnClosed;
  CExoString OnDamaged;
  CExoString OnDeath;
  CExoString OnDisarm;
  CExoString OnHeartbeat;
  CExoString OnLock;
  CExoString OnMeleeAttacked;
  CExoString OnSpellCastAt;
  CExoString OnTrapTriggered;
  CExoString OnUnlock;
  CExoString OnUserDefined;
  CExoString OnClick;
  CExoString OnDialog;
  CExoString OnFailToOpen;
  uint32_t Appearance;
  uint32_t GenericType;
  char *cresref240[16];
  uint32_t Bearing;
  uint32_t Faction;
  uint8_t Fort;
  uint8_t byte259;
  uint8_t Will;
  uint8_t OpenLockDC;
  uint8_t CloseLockDC;
  uint8_t SecretDoorDC;
  uint8_t Hardness;
  uint8_t f25F[1];
  uint32_t Locked;
  uint32_t Lockable;
  uint8_t anim_state;
  uint8_t f269;
  uint8_t f26A;
  uint8_t f26B;
  CExoString KeyTag;
  CExoString KeyRequiredFeedbackMessage;
  uint32_t KeyRequired;
  uint32_t dword280;
  uint32_t dword284;
  uint32_t dword288;
  uint32_t TrapCreator;
  uint32_t TrapFlag;
  uint8_t DisarmDC;
  uint8_t TrapDetectDC;
  uint8_t f296;
  uint8_t f297;
  uint8_t AutoRemoveKey;
  uint8_t f299;
  uint8_t f29A;
  uint8_t f29B;
  uint32_t dword29C;
  uint8_t TrapType;
  uint8_t f2A1[3];
  uint32_t TrapDisarmable;
  uint32_t TrapDetectable;
  uint32_t TrapOneShot;
  uint32_t TrapRecoverable;
  uint32_t TrapActive;
  uint32_t TrapFaction;
  uint32_t dword2BC;
  uint32_t dword2C0;
  uint32_t dword2C4;
  uint32_t dword2C8;
  uint32_t dword2CC;
  uint32_t dword2D0;
  uint32_t dword2D4;
  uint32_t dword2D8;
  uint32_t dword2DC;
  uint32_t SurfaceMesh;
  uint32_t dword2E4;
  uint32_t dword2E8;
  uint32_t dword2EC;
  uint32_t dword2F0;
  uint32_t dword2F4;
  uint32_t dword2F8;
  uint8_t LinkedToFlags;
  uint8_t f2FD[3];
  CExoString LinkedToTag;
  uint32_t LinkedToObject;
  uint8_t f30C;
  uint8_t f30D;
  uint8_t f30E;
  uint8_t f30F;
  uint8_t f310;
  uint8_t f311;
  uint8_t f312;
  uint8_t f313;
  uint8_t f314;
  uint8_t f315;
  uint8_t f316;
  uint8_t f317;
  uint8_t f318;
  uint8_t f319;
  uint8_t f31A;
  uint8_t f31B;
  uint8_t f31C;
  uint8_t f31D;
  uint8_t f31E;
  uint8_t f31F;
  uint8_t f320;
  uint8_t f321;
  uint8_t f322;
  uint8_t f323;
  uint8_t f324;
  uint8_t f325;
  uint8_t f326;
  uint8_t f327;
  uint8_t f328[4];
  uint32_t dword32C;
  uint16_t LoadScreenID;
;
};

#endif /* _NX_NWN_STRUCT_CNWSDOOR_ */

/* vim: set sw=4: */
