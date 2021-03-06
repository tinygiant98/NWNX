#ifndef _NX_NWN_STRUCT_CNWSCREATURESTATS_
#define _NX_NWN_STRUCT_CNWSCREATURESTATS_

#include "CExoLocString2.h"

struct CNWSStats_SpellLikeAbility_s{

	unsigned long nSpell;
	unsigned long nReady;
	unsigned char bLevel;
};

struct CNWSStats_SpellLikeAbility_s;		typedef struct CNWSStats_SpellLikeAbility_s     CNWSStats_SpellLikeAbility;


struct CNWSCreatureStats_s {
  CExoArrayList_uint16 cs_feats;
  CExoArrayList_ptr cs_featuses;
  CExoArrayList_uint16 cs_skin_feats;
  CNWSCreature *cs_original;
  CExoArrayList_ptr cs_levelstat;
  CExoLocString2 cs_firstname;
  CExoLocString2 cs_lastname;
  char cs_conv[16];
  unsigned int cs_conv_interruptable;
  CExoLocString cs_desc_base;
  CExoLocString cs_desc_override;
  int cs_age;
  unsigned int cs_gender;
  unsigned int cs_xp;
  unsigned int cs_is_pc;
  unsigned int cs_is_dm;
  unsigned int field_7C;
  unsigned int field_80;
  unsigned int cs_ai_disabled;
  unsigned int field_88;
  unsigned int cs_mclasslevupin;
  unsigned int cs_faction_id;
  unsigned int cs_faction_orig;
  unsigned int cs_faction_predom;
  float cs_cr;
  unsigned __int8 cs_starting_package;
  char cs_classes_len;
  unsigned __int8 field_9A;
  unsigned __int8 field_9B;
  CNWSCreatureClass cs_classes[3];
  unsigned __int16 cs_race;
  unsigned __int16 field_3EE;
  CExoString cs_subrace;
  unsigned __int8 cs_str;
  char cs_str_mod;
  unsigned __int8 cs_dex;
  char cs_dex_mod;
  unsigned __int8 cs_con;
  char cs_con_mod;
  unsigned __int8 cs_int;
  char cs_int_mod;
  unsigned __int8 cs_wis;
  char cs_wis_mod;
  unsigned __int8 cs_cha;
  char cs_cha_mod;
  unsigned __int8 cs_ac_natural_base;
  unsigned __int8 cs_ac_armour_base;
  unsigned __int8 cs_ac_shield_base;
  unsigned __int8 cs_ac_armour_bonus;
  unsigned __int8 cs_ac_armour_penalty;
  unsigned __int8 cs_ac_deflection_bonus;
  unsigned __int8 cs_ac_deflection_penalty;
  unsigned __int8 cs_ac_shield_bonus;
  unsigned __int8 cs_ac_shield_penalty;
  unsigned __int8 cs_ac_natural_bonus;
  unsigned __int8 cs_ac_natural_penalty;
  unsigned __int8 cs_ac_dodge_bonus;
  unsigned __int8 cs_ac_dodge_penalty;
  unsigned __int8 cs_override_bab;
  unsigned __int8 field_412;
  unsigned __int8 field_413;
  unsigned int field_414;
  unsigned int field_418;
  unsigned int field_41C;
  unsigned int field_420;
  unsigned int field_424;
  CCombatinformation *cs_combat_info;
  unsigned int field_42C;
  unsigned int field_430;
  unsigned int field_434;
  unsigned int field_438;
  CExoArrayList_2<CNWSStats_SpellLikeAbility> *cs_specabil;
  unsigned __int16 field_440;
  unsigned __int16 effect_index_AC_INCREASE;
  unsigned __int16 effect_index_ATTACK_INCREASE;
  unsigned __int16 field_446;
  unsigned __int16 effect_index_DAMAGE_RESISTANCE;
  unsigned __int16 effect_index_DAMAGE_INCREASE;
  unsigned int field_44C;
  unsigned int field_450;
  unsigned __int16 field_454;
  unsigned __int16 effect_index_ABILITY_INCREASE;
  unsigned int field_458;
  unsigned int field_45C;
  unsigned int field_460;
  unsigned __int16 field_464;
  unsigned __int16 field_466;
  unsigned __int16 field_468;
  unsigned __int16 effect_index_SKILL_INCREASE;
  unsigned __int16 effect_index_SAVINGTHROW_INCREASE;
  unsigned __int16 field_46E;
  unsigned int field_470;
  unsigned __int16 field_474;
  unsigned __int16 cs_skill_points;
  unsigned __int8 *cs_skills;
  char cs_acp_armor;
  char cs_acp_shield;
  char cs_portrait[16];
  unsigned __int8 cs_al_goodevil;
  unsigned __int8 field_48F;
  unsigned __int8 cs_al_lawchaos;
  unsigned __int8 field_491;
  unsigned __int8 cs_color_skin;
  unsigned __int8 cs_color_hair;
  unsigned __int8 cs_color_tattoo_1;
  unsigned __int8 cs_color_tattoo_2;
  unsigned __int16 cs_appearance;
  unsigned __int8 cs_phenotype;
  unsigned __int8 cs_appearance_head;
  unsigned __int8 cs_bodypart_rfoot;
  unsigned __int8 cs_bodypart_lfoot;
  unsigned __int8 cs_bodypart_rshin;
  unsigned __int8 cs_bodypart_lshin;
  unsigned __int8 cs_bodypart_lthigh;
  unsigned __int8 cs_bodypart_rthigh;
  unsigned __int8 cs_bodypart_pelvis;
  unsigned __int8 cs_bodypart_torso;
  unsigned __int8 cs_bodypart_belt;
  unsigned __int8 cs_bodypart_neck;
  unsigned __int8 cs_bodypart_rfarm;
  unsigned __int8 cs_bodypart_lfarm;
  unsigned __int8 cs_bodypart_rbicep;
  unsigned __int8 cs_bodypart_lbicep;
  unsigned __int8 cs_bodypart_rshoul;
  unsigned __int8 cs_bodypart_lshoul;
  unsigned __int8 cs_bodypart_rhand;
  unsigned __int8 cs_bodypart_lhand;
  unsigned __int8 field_4AC;
  unsigned __int8 cs_tail_old;
  unsigned __int8 cs_wings_old;
  unsigned __int8 field_4AF;
  unsigned int cs_tail;
  unsigned int cs_wings;
  unsigned int cs_movement_rate;
  unsigned int cs_runrate;
  unsigned int cs_walkrate;
  char cs_save_fort;
  char cs_save_will;
  char cs_save_reflex;
  unsigned __int8 field_4C7;
  unsigned int cs_acomp_type;
  unsigned int cs_famil_type;
  CExoString cs_acomp_name;
  CExoString cs_famil_name;
  char *cs_deity;

void 				AddExperience(uint32_t XP);
char 				AddFeat(uint16_t Feat);
char				GetACNaturalBase(int bTouchAttack);
int 				GetAttackModifierVersus(CNWSCreature *Vs);
//unsigned char 	GetAttacksPerRound();
int 				GetBaseAttackBonus(int bPreEpicOnly);
int					GetCriticalHitMultiplier(int bOffhand);
int 				GetCanUseSkill(unsigned char Skill);
unsigned char		GetCONStat();
char 				GetDEXMod(int bMaxArmorDex);
signed int 			GetEpicWeaponFocus(CNWSItem *weapon);
int 				GetEffectImmunity(unsigned __int8 Type, CNWSCreature *a3_Versus);
int 				GetFavoredEnemyBonus(CNWSCreature *cre_enemy);
char 				GetFortSavingThrow(int bBaseOnly);
unsigned long 		GetHighestLevelKnown();
int 				GetIsWeaponOfChoice(uint32_t BaseItemType);
uint8_t				GetLevel(int bCountNegativeLevels);
int					GetMeleeAttackBonus(int a1, int a2, int a3);
char				GetSkillRank(unsigned char Skill, CNWSObject *vsObj, int bBaseRanksOnly);
unsigned char		GetUnarmedDamageDice();
unsigned char		GetUnarmedDamageDie();
int 				GetUseMonkAttackTables(int a1);
signed int 			GetWeaponFinesse(CNWSItem *weapon);
signed int 			GetWeaponFocus(CNWSItem *weapon);
int 				HasFeat(uint16_t feat);
bool 				LevelUp(CNWSStats_Level *a2, int a3, char a4, char a5, int a6);
void				ReadySpellLevel(unsigned char SpellLevel);
void 				ResetFeatRemainingUses();
void 				ResetSpellLikeAbilities();
int 				ResolveSpecialAttackAttackBonus(CNWSCreature *Defender);
unsigned char		GetSimpleAlignmentGoodEvil();
unsigned char		GetSimpleAlignmentLawChaos();

void				SetCHABase(uint8_t CHABase);
void				SetCONBase(uint8_t CONBase, int a3);
void				SetDEXBase(uint8_t DEXBase);
void				SetINTBase(uint8_t INTBase);
void				SetSTRBase(uint8_t STRBase);
void				SetWISBase(uint8_t WISBase);

unsigned char 		GetCHAStat();
unsigned char 		GetDEXStat();
unsigned char 		GetINTStat();
unsigned char 		GetSTRStat();
unsigned char 		GetWISStat();
	
int16_t				GetDamageRoll(CNWSObject *Defender, int bOffHand, int AttackResult, int SneakAttack, int DeathAttack, int a7);

int GetNumLevelsOfClass(unsigned char nClassType);
int GetNumLevelsOfClass(unsigned char nClassType, int bPreEpicOnly); 

uint8_t GetFeatRemainingUses(uint16_t FeatID);
void DecrementFeatRemainingUses(uint16_t FeatID);
unsigned char GetIsClass(unsigned char ClassType);
int GetArmorClassVersus(CNWSCreature *Attacker, int bTouchAttack);
int GetRangedAttackBonus( int arg1, int arg2 );
};


#endif
