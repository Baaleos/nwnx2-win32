#include "stdafx.h"
#include "nwnx_funcs.h"
#include <hash_map>

void CNWNXFuncs::CreateFunctionLookup() {
	_log(1, "* CreateLookupTable\n");
	int i=0;
	FunctionLookup["PRINTEFFECTS"] =                      i = 0  ;  pFunc[i] = &CNWNXFuncs::PrintEffects;
	FunctionLookup["PRINTLOCALVARS"] =                    i = 1  ;  pFunc[i] = &CNWNXFuncs::PrintLocalVars;
	FunctionLookup["GETFIRSTLOCALVAR"] =                  i = 2  ;  pFunc[i] = &CNWNXFuncs::GetFirstLocalVariable;
	FunctionLookup["GETNEXTLOCALVAR"] =                   i = 3  ;  pFunc[i] = &CNWNXFuncs::GetNextLocalVariable;
	FunctionLookup["SETGOLD"] =                           i = 4  ;  pFunc[i] = &CNWNXFuncs::SetGold;
	FunctionLookup["SETABILITYSCORE"] =                   i = 5  ;  pFunc[i] = &CNWNXFuncs::SetAbilityScore;
	FunctionLookup["SETBABOVERRIDE"] =                    i = 6  ;  pFunc[i] = &CNWNXFuncs::SetBABOverride;
	FunctionLookup["SETXP"] =                             i = 7  ;  pFunc[i] = &CNWNXFuncs::SetXP;
	FunctionLookup["SETRACE"] =                           i = 8  ;  pFunc[i] = &CNWNXFuncs::SetRace;
	FunctionLookup["GETBASEAC"] =                         i = 9  ;  pFunc[i] = &CNWNXFuncs::GetBaseAC;
	FunctionLookup["SETBASEAC"] =                         i = 10 ;  pFunc[i] = &CNWNXFuncs::SetBaseAC;
	FunctionLookup["GETBONUSAC"] =                        i = 11 ;  pFunc[i] = &CNWNXFuncs::GetBonusAC;
	FunctionLookup["SETBONUSAC"] =                        i = 12 ;  pFunc[i] = &CNWNXFuncs::SetBonusAC;
	FunctionLookup["GETPENALTYAC"] =                      i = 13 ;  pFunc[i] = &CNWNXFuncs::GetPenaltyAC;
	FunctionLookup["SETPENALTYAC"] =                      i = 14 ;  pFunc[i] = &CNWNXFuncs::SetPenaltyAC;
	FunctionLookup["GETSAVEDSKILLPOINTS"] =               i = 15 ;  pFunc[i] = &CNWNXFuncs::GetSavedSkillPoints;
	FunctionLookup["SETSAVEDSKILLPOINTS"] =               i = 16 ;  pFunc[i] = &CNWNXFuncs::SetSavedSkillPoints;
	FunctionLookup["GETARMORCHECKPENALTY"] =              i = 17 ;  pFunc[i] = &CNWNXFuncs::GetArmorCheckPenalty;
	FunctionLookup["SETARMORCHECKPENALTY"] =              i = 18 ;  pFunc[i] = &CNWNXFuncs::SetArmorCheckPenalty;
	FunctionLookup["GETMOVEMENTRATE"] =                   i = 19 ;  pFunc[i] = &CNWNXFuncs::GetMovementRate;
	FunctionLookup["SETMOVEMENTRATE"] =                   i = 20 ;  pFunc[i] = &CNWNXFuncs::SetMovementRate;
	FunctionLookup["SETSKILL"] =                          i = 21 ;  pFunc[i] = &CNWNXFuncs::SetSkill;
	FunctionLookup["SETSKILLBYLEVEL"] =                   i = 22 ;  pFunc[i] = &CNWNXFuncs::SetSkillByLevel;
	FunctionLookup["SETHITPOINTSBYLEVEL"] =               i = 23 ;  pFunc[i] = &CNWNXFuncs::SetHitPointsByLevel;
	FunctionLookup["SETCURRENTHITPOINTS"] =               i = 24 ;  pFunc[i] = &CNWNXFuncs::SetCurrentHitPoints;
	FunctionLookup["SETMAXHITPOINTS"] =                   i = 25 ;  pFunc[i] = &CNWNXFuncs::SetMaxHitPoints;
	FunctionLookup["SETSAVINGTHROWBONUS"] =               i = 26 ;  pFunc[i] = &CNWNXFuncs::SetSavingThrowBonus;
	FunctionLookup["SETFAMILIARTYPE"] =                   i = 27 ;  pFunc[i] = &CNWNXFuncs::SetFamiliarType;
	FunctionLookup["SETCOMPANIONTYPE"] =                  i = 28 ;  pFunc[i] = &CNWNXFuncs::SetCompanionType;
	FunctionLookup["ADDFEAT"] =                           i = 29 ;  pFunc[i] = &CNWNXFuncs::AddFeat;
	FunctionLookup["ADDFEATATLEVEL"] =                    i = 30 ;  pFunc[i] = &CNWNXFuncs::AddFeatAtLevel;
	FunctionLookup["GETAREACOUNT"] =                      i = 31 ;  pFunc[i] = &CNWNXFuncs::GetAreaCount;
	FunctionLookup["GETLOCALVARIABLECOUNT"] =             i = 32 ;  pFunc[i] = &CNWNXFuncs::GetLocalVariableCount;
	FunctionLookup["GETHASLOCALVARIABLE"] =               i = 33 ;  pFunc[i] = &CNWNXFuncs::GetHasLocalVariable;
	FunctionLookup["SETTAG"] =                            i = 34 ;  pFunc[i] = &CNWNXFuncs::SetTag;
	FunctionLookup["SETEVENT"] =                          i = 35 ;  pFunc[i] = &CNWNXFuncs::SetEvent;
	FunctionLookup["GETEVENT"] =                          i = 36 ;  pFunc[i] = &CNWNXFuncs::GetEvent;
	FunctionLookup["SETCREATURESIZE"] =                   i = 37 ;  pFunc[i] = &CNWNXFuncs::SetCreatureSize;
	FunctionLookup["GETEQUIPPEDWEIGHT"] =                 i = 38 ;  pFunc[i] = &CNWNXFuncs::GetEquippedWeight;
	FunctionLookup["REMOVEFEAT"] =                        i = 39 ;  pFunc[i] = &CNWNXFuncs::RemoveFeat;
	FunctionLookup["GETFEATKNOWN"] =                      i = 40 ;  pFunc[i] = &CNWNXFuncs::GetFeatKnown;
	FunctionLookup["GETALLKNOWNFEATS"] =                  i = 41 ;  pFunc[i] = &CNWNXFuncs::GetAllKnownFeats;
	FunctionLookup["CLEARFEATLIST"] =                     i = 42 ;  pFunc[i] = &CNWNXFuncs::ClearFeatList;
	FunctionLookup["ZEROALLSKILLS"] =                     i = 43 ;  pFunc[i] = &CNWNXFuncs::ZeroAllSkills;
	FunctionLookup["ADDKNOWNSPELL"] =                     i = 44 ;  pFunc[i] = &CNWNXFuncs::AddKnownSpell;
	FunctionLookup["REMOVEKNOWNSPELL"] =                  i = 45 ;  pFunc[i] = &CNWNXFuncs::RemoveKnownSpell;
	FunctionLookup["REMOVEALLSPELLS"] =                   i = 46 ;  pFunc[i] = &CNWNXFuncs::RemoveAllSpells;
	FunctionLookup["GETKNOWSSPELL"] =                     i = 47 ;  pFunc[i] = &CNWNXFuncs::GetKnowsSpell;
	FunctionLookup["GETBABOVERRIDE"] =                    i = 48 ;  pFunc[i] = &CNWNXFuncs::GetBABOverride;
	FunctionLookup["SETITEMVALUE"] =                      i = 49 ;  pFunc[i] = &CNWNXFuncs::SetItemValue;
	FunctionLookup["SETITEMWEIGHT"] =                     i = 50 ;  pFunc[i] = &CNWNXFuncs::SetItemWeight;
	FunctionLookup["SETITEMCHARGES"] =                    i = 51 ;  pFunc[i] = &CNWNXFuncs::SetItemCharges;
	FunctionLookup["GETITEMVALUE"] =                      i = 52 ;  pFunc[i] = &CNWNXFuncs::GetItemValue;
	FunctionLookup["SETDOMAIN"] =                         i = 53 ;  pFunc[i] = &CNWNXFuncs::SetDomain;
	FunctionLookup["GETDOMAIN"] =                         i = 54 ;  pFunc[i] = &CNWNXFuncs::GetDomain;
	FunctionLookup["SETWIZARDSPECIALIZATION"] =           i = 55 ;  pFunc[i] = &CNWNXFuncs::SetWizardSpecialization;
	FunctionLookup["GETWIZARDSPECIALIZATION"] =           i = 56 ;  pFunc[i] = &CNWNXFuncs::GetWizardSpecialization;
	FunctionLookup["REPLACEKNOWNSPELL"] =                 i = 57 ;  pFunc[i] = &CNWNXFuncs::ReplaceKnownSpell;
	FunctionLookup["GETREMAININGSPELLSLOTS"] =            i = 58 ;  pFunc[i] = &CNWNXFuncs::GetRemainingSpellSlots;
	FunctionLookup["SETREMAININGSPELLSLOTS"] =            i = 59 ;  pFunc[i] = &CNWNXFuncs::SetRemainingSpellSlots;
	FunctionLookup["GETMAXSPELLSLOTS"] =                  i = 60 ;  pFunc[i] = &CNWNXFuncs::GetMaxSpellSlots;
	FunctionLookup["GETBONUSSPELLSLOTS"] =                i = 61 ;  pFunc[i] = &CNWNXFuncs::GetBonusSpellSlots;
	FunctionLookup["GETMEMORIZEDSPELLSLOT"] =             i = 62 ;  pFunc[i] = &CNWNXFuncs::GetMemorizedSpellSlot;
	FunctionLookup["SETMEMORIZEDSPELLSLOT"] =             i = 63 ;  pFunc[i] = &CNWNXFuncs::SetMemorizedSpell;
	FunctionLookup["GETFEATCOUNT"] =                      i = 64 ;  pFunc[i] = &CNWNXFuncs::GetFeatCount;
	FunctionLookup["RESTOREMEMORIZEDSPELLS"] =            i = 65 ;  pFunc[i] = &CNWNXFuncs::RestoreMemorizedSpells;
	FunctionLookup["GETKNOWNSPELLS"] =                    i = 66 ;  pFunc[i] = &CNWNXFuncs::GetKnownSpells;
	FunctionLookup["GETKNOWNSPELLCOUNT"] =                i = 67 ;  pFunc[i] = &CNWNXFuncs::GetKnownSpellCount;
	FunctionLookup["SETMAXSSPELLSPELLSLOTS"] =            i = 68 ;  pFunc[i] = &CNWNXFuncs::SetMaxSpellSlots;
	FunctionLookup["SETCONVERSATION"] =                   i = 69 ;  pFunc[i] = &CNWNXFuncs::SetConversation;
	FunctionLookup["GETCONVERSATION"] =                   i = 70 ;  pFunc[i] = &CNWNXFuncs::GetConversation;
	FunctionLookup["GETALLEFFECTREMAININGDURATION"] =     i = 71 ;  pFunc[i] = &CNWNXFuncs::GetAllEffectRemainingDuration;
	FunctionLookup["SETBODYBAG"] =                        i = 72 ;  pFunc[i] = &CNWNXFuncs::SetBodyBag;
	FunctionLookup["GETBODYBAG"] =                        i = 73 ;  pFunc[i] = &CNWNXFuncs::GetBodyBag;
	FunctionLookup["GETFEATSGAINEDATLEVEL"] =             i = 74 ;  pFunc[i] = &CNWNXFuncs::GetFeatsGainedAtLevel;
	FunctionLookup["GETSKILLRANKSGAINEDATLEVEL"] =        i = 75 ;  pFunc[i] = &CNWNXFuncs::GetSkillRanksGainedAtLevel;
	FunctionLookup["GETSPELLSGAINEDATLEVEL"] =            i = 76 ;  pFunc[i] = &CNWNXFuncs::GetSpellsGainedAtLevel;
	FunctionLookup["GETSTATSGAINEDATLEVEL"] =             i = 77 ;  pFunc[i] = &CNWNXFuncs::GetStatsGainedAtLevel;
	FunctionLookup["GETQUICKSLOT"] =                      i = 78 ;  pFunc[i] = &CNWNXFuncs::GetQuickSlot;
	FunctionLookup["SETQUICKSLOT"] =                      i = 79 ;  pFunc[i] = &CNWNXFuncs::SetQuickSlot;
	FunctionLookup["UPDATEQUICKBAR"] =                    i = 80 ;  pFunc[i] = &CNWNXFuncs::UpdateQuickbar;
	FunctionLookup["SETCLASSBYPOSITION"] =                i = 81 ;  pFunc[i] = &CNWNXFuncs::SetClassByPosition;
	FunctionLookup["SETGENDER"] =                         i = 82 ;  pFunc[i] = &CNWNXFuncs::SetGender;
	FunctionLookup["GETWORLDTIME"] =                      i = 83 ;  pFunc[i] = &CNWNXFuncs::GetWorldTime;
	FunctionLookup["GETFACTIONID"] =                      i = 84 ;  pFunc[i] = &CNWNXFuncs::GetFactionID;
	FunctionLookup["SETFACTIONID"] =                      i = 85 ;  pFunc[i] = &CNWNXFuncs::SetFactionID;
	FunctionLookup["SETSOUNDSETID"] =                     i = 86 ;  pFunc[i] = &CNWNXFuncs::GetSoundSetID;
	FunctionLookup["GETSOUNDSETID"] =                     i = 87 ;  pFunc[i] = &CNWNXFuncs::SetSoundSetID;
	FunctionLookup["GETSAVINGTHROWBONUS"] =               i = 88 ;  pFunc[i] = &CNWNXFuncs::GetSavingThrowBonus;
	FunctionLookup["JUMPTOLIMBO"] =                       i = 89 ;  pFunc[i] = &CNWNXFuncs::JumpToLimbo;
	FunctionLookup["SETCLASSLEVEL"] =                     i = 90 ;  pFunc[i] = &CNWNXFuncs::SetClassLevel;
	FunctionLookup["GETDAMAGEIMMUNITY"] =                 i = 91 ;  pFunc[i] = &CNWNXFuncs::GetDamageImmunity;
	FunctionLookup["GETHIGHESTEFFECTID"] =                i = 92 ;  pFunc[i] = &CNWNXFuncs::GetHighestEffectID;
	FunctionLookup["GETFIRSTALLEFFECT"] =                 i = 93 ;  pFunc[i] = &CNWNXFuncs::GetFirstAllEffect;
	FunctionLookup["GETNEXTALLEFFECT"] =                  i = 94 ;  pFunc[i] = &CNWNXFuncs::GetNextAllEffect;
	FunctionLookup["GETALLEFFECTINTEGERS"] =              i = 95 ;  pFunc[i] = &CNWNXFuncs::GetAllEffectInts;
	FunctionLookup["SETALLEFFECTINTEGERS"] =              i = 96 ;  pFunc[i] = &CNWNXFuncs::SetAllEffectInts;
	FunctionLookup["GETALLEFFECTID"] =                    i = 97 ;  pFunc[i] = &CNWNXFuncs::GetAllEffectID;
	FunctionLookup["GETALLEFFECTTYPE"] =                  i = 98 ;  pFunc[i] = &CNWNXFuncs::GetAllEffectType;
	FunctionLookup["GETALLEFFECTSUBTYPE"] =               i = 99 ;  pFunc[i] = &CNWNXFuncs::GetAllEffectSubType;
	FunctionLookup["GETALLEFFECTCREATOR"] =               i = 100;  pFunc[i] = &CNWNXFuncs::GetAllEffectCreator;
	FunctionLookup["GETALLEFFECTSPELLID"] =               i = 101;  pFunc[i] = &CNWNXFuncs::GetAllEffectSpellID;
	FunctionLookup["GETALLEFFECTDURATIONTYPE"] =          i = 102;  pFunc[i] = &CNWNXFuncs::GetAllEffectDurationType;
	FunctionLookup["QUEUEREMOVEEFFECT"] =                 i = 103;  pFunc[i] = &CNWNXFuncs::QueueRemoveEffect;
	FunctionLookup["REMOVEQUEUEDEFFECTS"] =               i = 104;  pFunc[i] = &CNWNXFuncs::RemoveQueuedEffects;
	FunctionLookup["APPLYVFXFORPC"] =                     i = 105;  pFunc[i] = &CNWNXFuncs::ApplyVFXForPC;
	FunctionLookup["GETEFFECTINTEGERS"] =                 i = 106;  pFunc[i] = &CNWNXFuncs::GetEffectInts;
	FunctionLookup["SETEFFECTINTEGERS"] =                 i = 107;  pFunc[i] = &CNWNXFuncs::SetEffectInt;
	FunctionLookup["GETEFFECTID"] =                       i = 108;  pFunc[i] = &CNWNXFuncs::GetEffectID;
	FunctionLookup["GETEFFECTREALTYPE"] =                 i = 109;  pFunc[i] = &CNWNXFuncs::GetEffectRealType;
	FunctionLookup["GETEFFECTREMAININGDURATION"] =        i = 110;  pFunc[i] = &CNWNXFuncs::GetEffectRemainingDuration;
	FunctionLookup["SETCUSTOMGEOMETRY"] =                 i = 111;  pFunc[i] = &CNWNXFuncs::SetCustomGeometry;
	FunctionLookup["ROTATECUSTOMGEOMETRY"] =              i = 112;  pFunc[i] = &CNWNXFuncs::RotateCustomGeometry;
	FunctionLookup["GETTRIGGERGEOMETRY"] =                i = 113;  pFunc[i] = &CNWNXFuncs::GetTriggerGeometry;
	FunctionLookup["GETSURFACEMATERIAL"] =                i = 114;  pFunc[i] = &CNWNXFuncs::GetSurfaceMaterial;
	FunctionLookup["PRINTOFFSETS"] =                      i = 115;  pFunc[i] = &CNWNXFuncs::PrintOffsets;
	FunctionLookup["SETDEBUGLEVEL"] =                     i = 116;  pFunc[i] = &CNWNXFuncs::SetDebugLevel;
	FunctionLookup["TIMEBARSTART"] =                      i = 117;  pFunc[i] = &CNWNXFuncs::TimebarStart;
	FunctionLookup["TIMEBARSTOP"] =                       i = 118;  pFunc[i] = &CNWNXFuncs::TimebarStop;
	FunctionLookup["SETAGE"] =                            i = 119;  pFunc[i] = &CNWNXFuncs::SetAge;
	FunctionLookup["MODIFYITEM"] =                        i = 120;  pFunc[i] = &CNWNXFuncs::ModifyItem;
	FunctionLookup["CLEARTURDLIST"] =                     i = 121;  pFunc[i] = &CNWNXFuncs::ClearTURDList;
	FunctionLookup["POSSESSCREATURE"] =                   i = 122;  pFunc[i] = &CNWNXFuncs::PossessCreature;
	FunctionLookup["SETCLASSBYLEVEL"] =                   i = 123;  pFunc[i] = &CNWNXFuncs::SetClassByLevel;
	FunctionLookup["REPLACECLASS"] =                      i = 125;  pFunc[i] = &CNWNXFuncs::ReplaceClass;
	FunctionLookup["UPDATECHARSHEET"] =                   i = 126;  pFunc[i] = &CNWNXFuncs::UpdateCharSheet;
	FunctionLookup["SUMMONASSOCIATE"] =                   i = 127;  pFunc[i] = &CNWNXFuncs::SummonAssociate;
	FunctionLookup["GETEFFECTDURATIONSUBTYPE"] =          i = 128;  pFunc[i] = &CNWNXFuncs::GetEffectDurationSubType;
	FunctionLookup["BOOTPCWITHMESSAGE"] =                 i = 129;  pFunc[i] = &CNWNXFuncs::BootPCWithMessage;
}