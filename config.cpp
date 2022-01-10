class CfgPatches
{
	class BC_TPW
	{
		name = "BC Two Primary Weapons";
		author = "RobinDX";
		requiredVersion = 0.99;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class bc
	{
		tag = "bc";
		class functions
		{
			class tpw
			{
				file = "\BC_TPW\functions\tpw.sqf";
				description = "Two Primary Weapons";
			};		
		};
	};
};


class Extended_PostInit_EventHandlers
{
	class BC_wpn_dpw_post_init_event
	{
		init = "['BC Two Primary Weapons','tpw_key','Double weapons switch',{call bc_fnc_tpw},'',[211,[false,false,false]]] call CBA_fnc_addKeybind;";
	};
};



class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Noob_Auto :Mode_SemiAuto
{
	showToPlayer = 0;
	displayName = "Noob";
	textureType = "burst";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 2.4;
	aiDispersionCoefX = 1.9;
	soundBurst = 0;
	multiplier = 2;
	reloadTime = 1;
	burst = 0;
	autofire = 0;	
	dispersion = 0.4;
	aiRateOfFire = 1;
	aiRateOfFireDistance = 10;
	minRange = 0;
	minRangeProbab = 0.01;
	midRange = 1;
	midRangeProbab = 0.01;
	maxRange = 2;
	maxRangeProbab = 0.01;
	soundContinuous=false;
	sounds[] = {"StandardSound"};
	class StandardSound
	{
		begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
		soundBegin[] = {"begin1",1};
	};
	useAction=false;
	useActionTitle="";
	artillerydispersion = 0.4;

};
class SlotInfo;
class CowsSlot;
class ItemCore;
class PointerSlot;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;


class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Launcher;
	class launcher_weapon_base: Launcher
	{
		class WeaponSlotsInfo;
	};
	class GrenadeLauncher;	
	class NGL: GrenadeLauncher
	{
		magazines[] = {};
		magazineWell[] = {};
		displayName = "Noob GL";
		modes[] = {"Noob_Auto"};
		enableAttack = 0;
		class Noob_Auto: Noob_Auto{};
	};
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F: InventoryItem_Base_F
	{
		type = 302;
		mass = 2;
		mountAction = "GestureMountMuzzle";
		unmountAction = "GestureDismountMuzzle";
	};
	
	class arifle_MX_F;
	class arifle_MX_F_bcsewpn: arifle_MX_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_MXC_F;
	class arifle_MXC_F_bcsewpn: arifle_MXC_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_MX_SW_F;
	class arifle_MX_SW_F_bcsewpn: arifle_MX_SW_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};	
	};
	class arifle_MXM_F;
	class arifle_MXM_F_bcsewpn: arifle_MXM_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_MX_GL_F;
	class arifle_MX_GL_F_bcsewpn: arifle_MX_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};		
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};		
	};
	class arifle_MXC_Black_F;
	class arifle_MXC_Black_F_bcsewpn: arifle_MXC_Black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
	};
	class arifle_MX_Black_F;
	class arifle_MX_Black_F_bcsewpn: arifle_MX_Black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"};
	};
	class arifle_MX_GL_Black_F;
	class arifle_MX_GL_Black_F_bcsewpn: arifle_MX_GL_Black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"};
	};
	class arifle_MX_SW_Black_F;
	class arifle_MX_SW_Black_F_bcsewpn: arifle_MX_SW_Black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_LMG_Black_co.paa"};
	};
	class arifle_MXM_Black_F;
	class arifle_MXM_Black_F_bcsewpn: arifle_MXM_Black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"};
	};
	class arifle_MXC_khk_F;
	class arifle_MXC_khk_F_bcsewpn: arifle_MXC_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","a3\weapons_f_exp\Rifles\MX\Data\XMX_short_khk_co.paa"};
	};
	class arifle_MX_khk_F;
	class arifle_MX_khk_F_bcsewpn: arifle_MX_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\weapons_f_exp\Rifles\MX\Data\XMX_Base_khk_co.paa","a3\weapons_f_exp\Rifles\MX\Data\XMX_short_khk_co.paa"};
	};
	class arifle_MX_GL_khk_F;
	class arifle_MX_GL_khk_F_bcsewpn: arifle_MX_GL_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\weapons_f_exp\Rifles\MX\Data\XMX_Base_khk_co.paa","a3\weapons_f_exp\Rifles\MX\Data\GLX_khk_CO.paa"};
	};
	class arifle_MX_SW_khk_F;
	class arifle_MX_SW_khk_F_bcsewpn: arifle_MX_SW_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","a3\weapons_f_exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
	};
	class arifle_MXM_khk_F;
	class arifle_MXM_khk_F_bcsewpn: arifle_MXM_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1"};
		hiddenSelectionsTextures[] = {"","a3\weapons_f_exp\Rifles\MX\Data\XMX_long_khk_co.paa"};
	};

	class arifle_Mk20_F;
	class arifle_Mk20_F_bcsewpn: arifle_Mk20_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_co.paa"};
	};
	class arifle_Mk20C_F;
	class arifle_Mk20C_F_bcsewpn: arifle_Mk20C_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_Mk20C_plain_F;
	class arifle_Mk20C_plain_F_bcsewpn: arifle_Mk20C_plain_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_co.paa"};
	};
	class arifle_Mk20_GL_F;
	class arifle_Mk20_GL_F_bcsewpn: arifle_Mk20_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_indp_co.paa","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
	};
	class arifle_Mk20_GL_plain_F;
	class arifle_Mk20_GL_plain_F_bcsewpn: arifle_Mk20_GL_plain_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_co.paa","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"};
	};
	class arifle_TRG21_F;
	class arifle_TRG21_F_bcsewpn: arifle_TRG21_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f\rifles\trg20\data\tar21_base_co.paa"};
	};
	class arifle_TRG20_F;
	class arifle_TRG20_F_bcsewpn: arifle_TRG20_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f\rifles\trg20\data\tar21_base_co.paa"};
	};
	class arifle_TRG21_GL_F;
	class arifle_TRG21_GL_F_bcsewpn: arifle_TRG21_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f\rifles\trg20\data\tar21_base_co.paa","\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa","\a3\weapons_f\data\gl_holo_co.paa"};
	};
	class arifle_Katiba_F;
	class arifle_Katiba_F_bcsewpn: arifle_Katiba_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_Katiba_C_F;
	class arifle_Katiba_C_F_bcsewpn: arifle_Katiba_C_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_Katiba_GL_F;
	class arifle_Katiba_GL_F_bcsewpn: arifle_Katiba_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_SDAR_F;
	class arifle_SDAR_F_bcsewpn: arifle_SDAR_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class LMG_Zafir_F;
	class LMG_Zafir_F_bcsewpn: LMG_Zafir_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class LMG_Mk200_F;
	class LMG_Mk200_F_bcsewpn: LMG_Mk200_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class LMG_Mk200_black_F;
	class LMG_Mk200_black_F_bcsewpn: LMG_Mk200_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\Body_black_co.paa","a3\Weapons_F_Enoch\Machineguns\M200\Data\grip_black_co.paa"};
	};
	class SMG_01_F;
	class SMG_01_F_bcsewpn: SMG_01_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class SMG_02_F;
	class SMG_02_F_bcsewpn: SMG_02_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class SMG_05_F;
	class SMG_05_F_bcsewpn: SMG_05_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class hgun_PDW2000_F;
	class hgun_PDW2000_F_bcsewpn: hgun_PDW2000_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_EBR_F;
	class srifle_EBR_F_bcsewpn: srifle_EBR_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_DMR_01_F;
	class srifle_DMR_01_F_bcsewpn: srifle_DMR_01_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_GM6_F;
	class srifle_GM6_F_bcsewpn: srifle_GM6_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","mat1","mat2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat_co.paa"};
	};
	class srifle_GM6_camo_F;
	class srifle_GM6_camo_F_bcsewpn: srifle_GM6_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","mat1","mat2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat_co.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_csat.rvmat","a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"};
	};
	class srifle_GM6_ghex_F;
	class srifle_GM6_ghex_F_bcsewpn: srifle_GM6_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo","mat1","mat2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_co.paa"};
		hiddenSelectionsMaterials[] = {"","","a3\weapons_f_exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F.rvmat","a3\weapons_f_exp\LongRangeRifles\GM6\Data\srifle_GM6_ghex_F_plastic.rvmat"};
	};
	class srifle_LRR_F;
	class srifle_LRR_F_bcsewpn: srifle_LRR_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_LRR_camo_F;
	class srifle_LRR_camo_F_bcsewpn: srifle_LRR_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\weapons_f_bootcamp\longrangerifles\m320_camo\data\cheytac_m200_blufor.rvmat"};
	};
	class srifle_LRR_tna_F;
	class srifle_LRR_tna_F_bcsewpn: srifle_LRR_tna_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","tna"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_exp\LongRangeRifles\M320\Data\srifle_LRR_tna_F_co.paa"};
	};
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_01_blk_F_bcsewpn: arifle_SPAR_01_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
	};
	class arifle_SPAR_01_khk_F;
	class arifle_SPAR_01_khk_F_bcsewpn: arifle_SPAR_01_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
	};
	class arifle_SPAR_01_snd_F;
	class arifle_SPAR_01_snd_F_bcsewpn: arifle_SPAR_01_snd_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
	};
	class arifle_SPAR_01_GL_blk_F;
	class arifle_SPAR_01_GL_blk_F_bcsewpn: arifle_SPAR_01_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"};
	};
	class arifle_SPAR_01_GL_khk_F;
	class arifle_SPAR_01_GL_khk_F_bcsewpn: arifle_SPAR_01_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_co.paa"};
	};
	class arifle_SPAR_01_GL_snd_F;
	class arifle_SPAR_01_GL_snd_F_bcsewpn: arifle_SPAR_01_snd_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_co.paa"};
	};
	class arifle_SPAR_02_blk_F;
	class arifle_SPAR_02_blk_F_bcsewpn: arifle_SPAR_02_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
	};
	class arifle_SPAR_02_khk_F;
	class arifle_SPAR_02_khk_F_bcsewpn: arifle_SPAR_02_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
	};
	class arifle_SPAR_02_snd_F;
	class arifle_SPAR_02_snd_F_bcsewpn: arifle_SPAR_02_snd_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
	};
	class arifle_SPAR_03_blk_F;
	class arifle_SPAR_03_blk_F_bcsewpn: arifle_SPAR_03_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"};
	};
	class arifle_SPAR_03_khk_F;
	class arifle_SPAR_03_khk_F_bcsewpn: arifle_SPAR_03_khk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa"};
	};
	class arifle_SPAR_03_snd_F;
	class arifle_SPAR_03_snd_F_bcsewpn: arifle_SPAR_03_snd_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa"};
	};
	class arifle_AKS_F;
	class arifle_AKS_F_bcsewpn: arifle_AKS_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_AKM_F;
	class arifle_AKM_F_bcsewpn: arifle_AKM_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class arifle_AK12_F;
	class arifle_AK12_F_bcsewpn: arifle_AK12_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"};
	};
	class arifle_AK12_lush_F;
	class arifle_AK12_lush_F_bcsewpn: arifle_AK12_lush_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"};
	};
	class arifle_AK12_arid_F;
	class arifle_AK12_arid_F_bcsewpn: arifle_AK12_arid_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"};		
	};
	class arifle_AK12_GL_F;
	class arifle_AK12_GL_F_bcsewpn: arifle_AK12_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","\a3\weapons_f_exp\rifles\ak12\data\ak12_ak12_gl_co.paa"};
	};
	class arifle_AK12_GL_lush_F;
	class arifle_AK12_GL_lush_F_bcsewpn: arifle_AK12_GL_lush_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"};	
	};
	class arifle_AK12_GL_arid_F;
	class arifle_AK12_GL_arid_F_bcsewpn: arifle_AK12_GL_arid_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};	
	};
	class arifle_RPK12_F;
	class arifle_RPK12_F_bcsewpn: arifle_RPK12_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"};
	};
	class arifle_RPK12_lush_F;
	class arifle_RPK12_lush_F_bcsewpn: arifle_RPK12_lush_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	};
	class arifle_RPK12_arid_F;
	class arifle_RPK12_arid_F_bcsewpn: arifle_RPK12_arid_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	};
	class arifle_AK12U_F;
	class arifle_AK12U_F_bcsewpn: arifle_AK12U_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat","a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"};
	};
	class arifle_AK12U_lush_F;
	class arifle_AK12U_lush_F_bcsewpn: arifle_AK12U_lush_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	};
	class arifle_AK12U_arid_F;
	class arifle_AK12U_arid_F_bcsewpn: arifle_AK12U_arid_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa","a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat","a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"};
	};
	class arifle_ARX_blk_F;
	class arifle_ARX_blk_F_bcsewpn: arifle_ARX_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_01_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
	};
	class arifle_ARX_ghex_F;
	class arifle_ARX_ghex_F_bcsewpn: arifle_ARX_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_ghex_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
	};
	class arifle_ARX_hex_F;
	class arifle_ARX_hex_F_bcsewpn: arifle_ARX_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_hex_F_co.paa","\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"};
	};
	class arifle_CTAR_blk_F;
	class arifle_CTAR_blk_F_bcsewpn: arifle_CTAR_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
	};
	class arifle_CTAR_hex_F;
	class arifle_CTAR_hex_F_bcsewpn: arifle_CTAR_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
	};
	class arifle_CTAR_ghex_F;
	class arifle_CTAR_ghex_F_bcsewpn: arifle_CTAR_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"};
	};
	class arifle_CTAR_GL_blk_F;
	class arifle_CTAR_GL_blk_F_bcsewpn: arifle_CTAR_GL_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_co.paa"};
	};
	class arifle_CTAR_GL_hex_F;
	class arifle_CTAR_GL_hex_F_bcsewpn: arifle_CTAR_GL_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_bhex_co.paa"};
	};
	class arifle_CTAR_GL_ghex_F;
	class arifle_CTAR_GL_ghex_F_bcsewpn: arifle_CTAR_GL_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa","\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_ghex_co.paa"};
	};
	class arifle_CTARS_blk_F;
	class arifle_CTARS_blk_F_bcsewpn: arifle_CTARS_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_exp\rifles\ctar\Data\CTAR_F_1_co.paa","\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"};
	};
	class arifle_CTARS_hex_F;
	class arifle_CTARS_hex_F_bcsewpn: arifle_CTARS_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_exp\rifles\ctar\Data\CTAR_F_1_bhex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"};
	};
	class arifle_CTARS_ghex_F;
	class arifle_CTARS_ghex_F_bcsewpn: arifle_CTARS_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_exp\rifles\ctar\Data\CTAR_F_1_ghex_co.paa","\A3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"};
	};
	class LMG_03_F;
	class LMG_03_F_bcsewpn: LMG_03_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_DMR_07_blk_F;
	class srifle_DMR_07_blk_F_bcsewpn: srifle_DMR_07_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
	};
	class srifle_DMR_07_ghex_F;
	class srifle_DMR_07_ghex_F_bcsewpn: srifle_DMR_07_ghex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_ghex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
	};
	class srifle_DMR_07_hex_F;
	class srifle_DMR_07_hex_F_bcsewpn: srifle_DMR_07_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_1_hex_co.paa","\A3\Weapons_F_Exp\LongRangeRifles\DMR_07\Data\DMR_07_F_2_co.paa"};
	};
	class MMG_01_hex_F;
	class MMG_01_tan_F;	
	class MMG_01_hex_F_bcsewpn :MMG_01_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_hex_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_hex_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_hex_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_hex.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_hex.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_hex.rvmat"};
		
	};	
	class MMG_01_tan_F_bcsewpn :MMG_01_tan_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand.rvmat"};
		
	};
	class MMG_02_black_F;	
	class MMG_02_camo_F;
	class MMG_02_sand_F;	
	class MMG_02_black_F_bcsewpn :MMG_02_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_black_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_black_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_black_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_black.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_black.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_black.rvmat"};
		
	};
	class MMG_02_camo_F_bcsewpn :MMG_02_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_camo_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_camo_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_camo.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_camo.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_camo.rvmat"};
		
	};
	class MMG_02_sand_F_bcsewpn :MMG_02_sand_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_sand_CO.paa","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_sand_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_sand.rvmat","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_sand.rvmat"};
		
	};
	class srifle_DMR_02_F;
	class srifle_DMR_02_camo_F;
	class srifle_DMR_02_sniper_F;
	class srifle_DMR_03_F;
	class srifle_DMR_03_khaki_F;
	class srifle_DMR_03_tan_F;
	class srifle_DMR_03_multicam_F;
	class srifle_DMR_03_woodland_F;	
	class srifle_DMR_02_F_bcsewpn :srifle_DMR_02_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_CO.paa"};
		
	};
	class srifle_DMR_02_camo_F_bcsewpn :srifle_DMR_02_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_dazzle_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_dazzle_CO.paa"};
	
	};
	class srifle_DMR_02_sniper_F_bcsewpn :srifle_DMR_02_sniper_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"};
	
	};
	class srifle_DMR_03_F_bcsewpn :srifle_DMR_03_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class srifle_DMR_03_khaki_F_bcsewpn :srifle_DMR_03_khaki_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_khaki_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_khaki_CO.paa"};
	
	};
	class srifle_DMR_03_tan_F_bcsewpn :srifle_DMR_03_tan_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
	
	};
	class srifle_DMR_03_multicam_F_bcsewpn :srifle_DMR_03_multicam_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_multicam_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_multicam_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
	
	};
	class srifle_DMR_03_woodland_F_bcsewpn :srifle_DMR_03_woodland_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_woodland_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_woodland.rvmat","\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"};
	
	};
	class srifle_DMR_04_F;
	class srifle_DMR_04_Tan_F;
	
	class srifle_DMR_04_F_bcsewpn :srifle_DMR_04_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\DMR_04_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\DMR_04_02_CO.paa"};
	};
	class srifle_DMR_04_Tan_F_bcsewpn :srifle_DMR_04_Tan_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\DMR_04_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\Data\DMR_04_02_tan_CO.paa"};
	
	};
	class srifle_DMR_05_blk_F;
	class srifle_DMR_05_hex_F;
	class srifle_DMR_05_tan_f;	
	class srifle_DMR_05_blk_F_bcsewpn :srifle_DMR_05_blk_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\a3\weapons_f_mark\longrangerifles\dmr_05\data\dmr_05_01_co.paa","\a3\weapons_f_mark\longrangerifles\dmr_05\data\dmr_05_02_co.paa"};
		
	};
	class srifle_DMR_05_hex_F_bcsewpn :srifle_DMR_05_hex_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_01_csat_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_csat_CO.paa"};
	
	};
	class srifle_DMR_05_tan_f_bcsewpn :srifle_DMR_05_tan_f
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_01_tan_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02_tan_CO.paa"};
	
	};
	
	class srifle_DMR_06_camo_F;
	class srifle_DMR_06_olive_F;
	class srifle_DMR_06_hunter_F;
	class srifle_DMR_06_camo_F_bcsewpn :srifle_DMR_06_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_01_camo_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_01.rvmat","a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02.rvmat"};
	};

	class srifle_DMR_06_olive_F_bcsewpn :srifle_DMR_06_olive_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_01_CO.paa","\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_01.rvmat","a3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02.rvmat"};
	};
	class srifle_DMR_06_hunter_F_bcsewpn :srifle_DMR_06_hunter_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","camo1","camo2"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_01_CO.paa","a3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
		hiddenSelectionsMaterials[] = {"","a3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_01.rvmat","a3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_02.rvmat"};
	};
	class arifle_MSBS65_black_F;
	class arifle_MSBS65_camo_F;
	class arifle_MSBS65_F;
	class arifle_MSBS65_sand_F;
	class arifle_MSBS65_GL_black_F;
	class arifle_MSBS65_GL_camo_F;
	class arifle_MSBS65_GL_F;
	class arifle_MSBS65_GL_sand_F;
	class arifle_MSBS65_Mark_black_F;
	class arifle_MSBS65_Mark_camo_F;
	class arifle_MSBS65_Mark_F;
	class arifle_MSBS65_Mark_sand_F;	
	class arifle_MSBS65_UBS_black_F;
	class arifle_MSBS65_UBS_camo_F;
	class arifle_MSBS65_UBS_F;
	class arifle_MSBS65_UBS_sand_F;	
	class arifle_MSBS65_black_F_bcsewpn :arifle_MSBS65_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class arifle_MSBS65_camo_F_bcsewpn :arifle_MSBS65_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class arifle_MSBS65_F_bcsewpn :arifle_MSBS65_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
	};
	class arifle_MSBS65_sand_F_bcsewpn :arifle_MSBS65_sand_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	class arifle_MSBS65_GL_black_F_bcsewpn :arifle_MSBS65_GL_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class arifle_MSBS65_GL_camo_F_bcsewpn :arifle_MSBS65_GL_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class arifle_MSBS65_GL_F_bcsewpn :arifle_MSBS65_GL_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
	};
	class arifle_MSBS65_GL_sand_F_bcsewpn :arifle_MSBS65_GL_sand_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	class arifle_MSBS65_Mark_black_F_bcsewpn :arifle_MSBS65_Mark_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class arifle_MSBS65_Mark_camo_F_bcsewpn :arifle_MSBS65_Mark_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class arifle_MSBS65_Mark_F_bcsewpn :arifle_MSBS65_Mark_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
	};
	class arifle_MSBS65_Mark_sand_F_bcsewpn :arifle_MSBS65_Mark_sand_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};	
	class arifle_MSBS65_UBS_black_F_bcsewpn :arifle_MSBS65_UBS_black_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_black_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};
	class arifle_MSBS65_UBS_camo_F_bcsewpn :arifle_MSBS65_UBS_camo_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_camo_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_camo_CO.paa"};
	};
	class arifle_MSBS65_UBS_F_bcsewpn :arifle_MSBS65_UBS_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_CO.paa"};
	};
	class arifle_MSBS65_UBS_sand_F_bcsewpn :arifle_MSBS65_UBS_sand_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_01_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_02_sand_CO.paa","a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_sand_CO.paa"};
	};
	class sgun_HunterShotgun_01_F;
	class sgun_HunterShotgun_01_F_bcsewpn :sgun_HunterShotgun_01_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	class sgun_HunterShotgun_01_sawedoff_F;
	class sgun_HunterShotgun_01_sawedoff_F_bcsewpn :sgun_HunterShotgun_01_sawedoff_F
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		scopeArsenal = 0;
		handAnim[] = {};
		modes[] = {"Noob_Auto"};
		class Noob_Auto:Noob_Auto{};
		muzzles[] = {"this","NGL"};
		class NGL: NGL{};
		_generalMacro = "";
		baseWeapon = "";
		hiddenSelections[] = {"zasleh"};
		hiddenSelectionsTextures[] = {""};
	};
	#include "\BC_TPW\compat\rhs_blue.hpp"
	#include "\BC_TPW\compat\bad_apple.hpp"
	#include "\BC_TPW\compat\CUP_AK12.hpp"
	#include "\BC_TPW\compat\KT.hpp"
	#include "\BC_TPW\compat\ARD97.hpp"
	#include "\BC_TPW\compat\CDLC_SOG.hpp"
	#include "\BC_TPW\compat\Tier1.hpp"
	#include "\BC_TPW\compat\SPS.hpp"
	#include "\BC_TPW\compat\gold.hpp"
	#include "\BC_TPW\compat\SA.hpp"
	#include "\BC_TPW\compat\lxWS.hpp"
	//#include "\BC_TPW\compat\blank.hpp"
	//#include "\BC_TPW\compat\blank2.hpp"
	//#include "\BC_TPW\compat\blank3.hpp"
};

class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class mag_null: CA_Magazine
	{
		scope = 1;
		descriptionShort = "mag_null";
		displayName = "mag_null";
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		count = 1;
		mass = 0.2;
	};
};
