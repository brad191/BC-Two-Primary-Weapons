#define _ARMA_

class CfgPatches
{
	class mass_item
	{
		units[] = {};
		magazines[] = {};
		ammo[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_weapons_f","A3_weapons_f_beta","A3_weapons_f_bootcamp","A3_weapons_f_epa","A3_weapons_f_epb","A3_weapons_f_epc","A3_weapons_f_exp","A3_weapons_f_gamma","A3_weapons_f_kart","A3_weapons_f_mark"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
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
	class ItemCore;
	class bc_mass_item_base : launcher_weapon_base
	{
		enableAttack = 0;
		type = 4;
		scope = 1;
		author = "RobinDX";
		scope = 0;
		displayName = "Double weapon mass item";
		descriptionShort = "weapon mass item";
		//model = __EVAL(parsingNamespace getVariable twp_weapon_model);
		//picture = __EVAL(parsingNamespace getVariable twp_weapon_picture);
		model = "\BC_TPW\mass_item\bag.p3d";
		picture = "\BC_TPW\ui\dw.paa";
		class WeaponSlotsInfo
		{
			mass = 0;
		};
	};
	class bc_mass_item_00:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 0;
		};
	};
	class bc_mass_item_1:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 1;
		};
	};
	class bc_mass_item_2:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 2;
		};
	};
	class bc_mass_item_3:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 3;
		};
	};
	class bc_mass_item_4:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 4;
		};
	};
	class bc_mass_item_5:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 5;
		};
	};
	class bc_mass_item_6:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 6;
		};
	};
	class bc_mass_item_7:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 7;
		};
	};
	class bc_mass_item_8:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 8;
		};
	};
	class bc_mass_item_9:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 9;
		};
	};
	class bc_mass_item_10:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};
	class bc_mass_item_11:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 11;
		};
	};
	class bc_mass_item_12:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 12;
		};
	};
	class bc_mass_item_13:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 13;
		};
	};
	class bc_mass_item_14:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 14;
		};
	};
	class bc_mass_item_15:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 15;
		};
	};
	class bc_mass_item_16:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 16;
		};
	};
	class bc_mass_item_17:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 17;
		};
	};
	class bc_mass_item_18:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 18;
		};
	};
	class bc_mass_item_19:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 19;
		};
	};
	class bc_mass_item_20:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class bc_mass_item_21:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 21;
		};
	};
	class bc_mass_item_22:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 22;
		};
	};
	class bc_mass_item_23:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 23;
		};
	};
	class bc_mass_item_24:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 24;
		};
	};
	class bc_mass_item_25:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 25;
		};
	};
	class bc_mass_item_26:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 26;
		};
	};
	class bc_mass_item_27:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 27;
		};
	};
	class bc_mass_item_28:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 28;
		};
	};
	class bc_mass_item_29:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 29;
		};
	};
	class bc_mass_item_30:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 30;
		};
	};
	class bc_mass_item_31:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 31;
		};
	};
	class bc_mass_item_32:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 32;
		};
	};
	class bc_mass_item_33:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 33;
		};
	};
	class bc_mass_item_34:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 34;
		};
	};
	class bc_mass_item_35:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 35;
		};
	};
	class bc_mass_item_36:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 36;
		};
	};
	class bc_mass_item_37:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 37;
		};
	};
	class bc_mass_item_38:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 38;
		};
	};
	class bc_mass_item_39:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 39;
		};
	};
	class bc_mass_item_40:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 40;
		};
	};
	class bc_mass_item_41:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 41;
		};
	};
	class bc_mass_item_42:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 42;
		};
	};
	class bc_mass_item_43:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 43;
		};
	};
	class bc_mass_item_44:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 44;
		};
	};
	class bc_mass_item_45:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 45;
		};
	};
	class bc_mass_item_46:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 46;
		};
	};
	class bc_mass_item_47:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 47;
		};
	};
	class bc_mass_item_48:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 48;
		};
	};
	class bc_mass_item_49:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 49;
		};
	};
	class bc_mass_item_50:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 50;
		};
	};
	class bc_mass_item_51:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 51;
		};
	};
	class bc_mass_item_52:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 52;
		};
	};
	class bc_mass_item_53:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 53;
		};
	};
	class bc_mass_item_54:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 54;
		};
	};
	class bc_mass_item_55:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 55;
		};
	};
	class bc_mass_item_56:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 56;
		};
	};
	class bc_mass_item_57:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 57;
		};
	};
	class bc_mass_item_58:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 58;
		};
	};
	class bc_mass_item_59:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 59;
		};
	};
	class bc_mass_item_60:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 60;
		};
	};
	class bc_mass_item_61:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 61;
		};
	};
	class bc_mass_item_62:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 62;
		};
	};
	class bc_mass_item_63:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 63;
		};
	};
	class bc_mass_item_64:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 64;
		};
	};
	class bc_mass_item_65:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 65;
		};
	};
	class bc_mass_item_66:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 66;
		};
	};
	class bc_mass_item_67:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 67;
		};
	};
	class bc_mass_item_68:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 68;
		};
	};
	class bc_mass_item_69:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 69;
		};
	};
	class bc_mass_item_70:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class bc_mass_item_71:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 71;
		};
	};
	class bc_mass_item_72:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class bc_mass_item_73:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 73;
		};
	};
	class bc_mass_item_74:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 74;
		};
	};
	class bc_mass_item_75:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class bc_mass_item_76:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 76;
		};
	};
	class bc_mass_item_77:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 77;
		};
	};
	class bc_mass_item_78:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 78;
		};
	};
	class bc_mass_item_79:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 79;
		};
	};
	class bc_mass_item_80:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class bc_mass_item_81:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 81;
		};
	};
	class bc_mass_item_82:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 82;
		};
	};
	class bc_mass_item_83:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 83;
		};
	};
	class bc_mass_item_84:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 84;
		};
	};
	class bc_mass_item_85:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class bc_mass_item_86:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 86;
		};
	};
	class bc_mass_item_87:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 87;
		};
	};
	class bc_mass_item_88:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 88;
		};
	};
	class bc_mass_item_89:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 89;
		};
	};
		class bc_mass_item_90:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 90;
		};
	};
	class bc_mass_item_91:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 91;
		};
	};
	class bc_mass_item_92:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 92;
		};
	};
	class bc_mass_item_93:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 93;
		};
	};
	class bc_mass_item_94:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 94;
		};
	};
	class bc_mass_item_95:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 95;
		};
	};
	class bc_mass_item_96:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 96;
		};
	};
	class bc_mass_item_97:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 97;
		};
	};
	class bc_mass_item_98:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 98;
		};
	};
	class bc_mass_item_99:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 99;
		};
	};

	class bc_mass_item_100:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class bc_mass_item_101:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 101;
		};
	};
	class bc_mass_item_102:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 102;
		};
	};
	class bc_mass_item_103:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 103;
		};
	};
	class bc_mass_item_104:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 104;
		};
	};
	class bc_mass_item_105:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class bc_mass_item_106:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 106;
		};
	};
	class bc_mass_item_107:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 107;
		};
	};
	class bc_mass_item_108:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 108;
		};
	};
	class bc_mass_item_109:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 109;
		};
	};
	class bc_mass_item_110:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 110;
		};
	};
	class bc_mass_item_111:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 111;
		};
	};
	class bc_mass_item_112:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 112;
		};
	};
	class bc_mass_item_113:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 113;
		};
	};
	class bc_mass_item_114:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 114;
		};
	};
	class bc_mass_item_115:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 115;
		};
	};
	class bc_mass_item_116:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 116;
		};
	};
	class bc_mass_item_117:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 117;
		};
	};
	class bc_mass_item_118:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 118;
		};
	};
	class bc_mass_item_119:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 119;
		};
	};
	class bc_mass_item_120:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 120;
		};
	};
	class bc_mass_item_121:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 121;
		};
	};
	class bc_mass_item_122:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 122;
		};
	};
	class bc_mass_item_123:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 123;
		};
	};
	class bc_mass_item_124:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 124;
		};
	};
	class bc_mass_item_125:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 125;
		};
	};
	class bc_mass_item_126:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 126;
		};
	};
	class bc_mass_item_127:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 127;
		};
	};
	class bc_mass_item_128:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 128;
		};
	};
	class bc_mass_item_129:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 129;
		};
	};
	class bc_mass_item_130:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 130;
		};
	};
	class bc_mass_item_131:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 131;
		};
	};
	class bc_mass_item_132:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 132;
		};
	};
	class bc_mass_item_133:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 133;
		};
	};
	class bc_mass_item_134:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 134;
		};
	};
	class bc_mass_item_135:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 135;
		};
	};
	class bc_mass_item_136:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 136;
		};
	};
	class bc_mass_item_137:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 137;
		};
	};
	class bc_mass_item_138:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 138;
		};
	};
	class bc_mass_item_139:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 139;
		};
	};
	class bc_mass_item_140:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 140;
		};
	};
	class bc_mass_item_141:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 141;
		};
	};
	class bc_mass_item_142:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 142;
		};
	};
	class bc_mass_item_143:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 143;
		};
	};
	class bc_mass_item_144:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 144;
		};
	};
	class bc_mass_item_145:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 145;
		};
	};
	class bc_mass_item_146:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 146;
		};
	};
	class bc_mass_item_147:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 147;
		};
	};
	class bc_mass_item_148:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 148;
		};
	};
	class bc_mass_item_149:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 149;
		};
	};
	class bc_mass_item_150:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 150;
		};
	};
	class bc_mass_item_151:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 151;
		};
	};
	class bc_mass_item_152:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 152;
		};
	};
	class bc_mass_item_153:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 153;
		};
	};
	class bc_mass_item_154:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 154;
		};
	};
	class bc_mass_item_155:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 155;
		};
	};
	class bc_mass_item_156:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 156;
		};
	};
	class bc_mass_item_157:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 157;
		};
	};
	class bc_mass_item_158:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 158;
		};
	};
	class bc_mass_item_159:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 159;
		};
	};
	class bc_mass_item_160:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 160;
		};
	};
	class bc_mass_item_161:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 161;
		};
	};
	class bc_mass_item_162:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 162;
		};
	};
	class bc_mass_item_163:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 163;
		};
	};
	class bc_mass_item_164:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 164;
		};
	};
	class bc_mass_item_165:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 165;
		};
	};
	class bc_mass_item_166:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 166;
		};
	};
	class bc_mass_item_167:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 167;
		};
	};
	class bc_mass_item_168:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 168;
		};
	};
	class bc_mass_item_169:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 169;
		};
	};
	class bc_mass_item_170:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 170;
		};
	};
	class bc_mass_item_171:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 171;
		};
	};
	class bc_mass_item_172:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 172;
		};
	};
	class bc_mass_item_173:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 173;
		};
	};
	class bc_mass_item_174:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 174;
		};
	};
	class bc_mass_item_175:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 175;
		};
	};
	class bc_mass_item_176:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 176;
		};
	};
	class bc_mass_item_177:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 177;
		};
	};
	class bc_mass_item_178:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 178;
		};
	};
	class bc_mass_item_179:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 179;
		};
	};
	class bc_mass_item_180:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 180;
		};
	};
	class bc_mass_item_181:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 181;
		};
	};
	class bc_mass_item_182:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 182;
		};
	};
	class bc_mass_item_183:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 183;
		};
	};
	class bc_mass_item_184:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 184;
		};
	};
	class bc_mass_item_185:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 185;
		};
	};
	class bc_mass_item_186:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 186;
		};
	};
	class bc_mass_item_187:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 187;
		};
	};
	class bc_mass_item_188:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 188;
		};
	};
	class bc_mass_item_189:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 189;
		};
	};
		class bc_mass_item_190:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 190;
		};
	};
	class bc_mass_item_191:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 191;
		};
	};
	class bc_mass_item_192:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 192;
		};
	};
	class bc_mass_item_193:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 193;
		};
	};
	class bc_mass_item_194:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 194;
		};
	};
	class bc_mass_item_195:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 195;
		};
	};
	class bc_mass_item_196:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 196;
		};
	};
	class bc_mass_item_197:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 197;
		};
	};
	class bc_mass_item_198:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 198;
		};
	};
	class bc_mass_item_199:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 199;
		};
	};
	
	class bc_mass_item_200:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 200;
		};
	};
	class bc_mass_item_201:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 201;
		};
	};
	class bc_mass_item_202:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 202;
		};
	};
	class bc_mass_item_203:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 203;
		};
	};
	class bc_mass_item_204:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 204;
		};
	};
	class bc_mass_item_205:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 205;
		};
	};
	class bc_mass_item_206:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 206;
		};
	};
	class bc_mass_item_207:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 207;
		};
	};
	class bc_mass_item_208:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 208;
		};
	};
	class bc_mass_item_209:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 209;
		};
	};
	class bc_mass_item_210:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 210;
		};
	};
	class bc_mass_item_211:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 211;
		};
	};
	class bc_mass_item_212:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 212;
		};
	};
	class bc_mass_item_213:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 213;
		};
	};
	class bc_mass_item_214:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 214;
		};
	};
	class bc_mass_item_215:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 215;
		};
	};
	class bc_mass_item_216:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 216;
		};
	};
	class bc_mass_item_217:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 217;
		};
	};
	class bc_mass_item_218:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 218;
		};
	};
	class bc_mass_item_219:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 219;
		};
	};
	class bc_mass_item_220:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 220;
		};
	};
	class bc_mass_item_221:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 221;
		};
	};
	class bc_mass_item_222:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 222;
		};
	};
	class bc_mass_item_223:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 223;
		};
	};
	class bc_mass_item_224:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 224;
		};
	};
	class bc_mass_item_225:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 225;
		};
	};
	class bc_mass_item_226:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 226;
		};
	};
	class bc_mass_item_227:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 227;
		};
	};
	class bc_mass_item_228:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 228;
		};
	};
	class bc_mass_item_229:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 229;
		};
	};
	class bc_mass_item_230:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 230;
		};
	};
	class bc_mass_item_231:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 231;
		};
	};
	class bc_mass_item_232:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 232;
		};
	};
	class bc_mass_item_233:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 233;
		};
	};
	class bc_mass_item_234:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 234;
		};
	};
	class bc_mass_item_235:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 235;
		};
	};
	class bc_mass_item_236:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 236;
		};
	};
	class bc_mass_item_237:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 237;
		};
	};
	class bc_mass_item_238:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 238;
		};
	};
	class bc_mass_item_239:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 239;
		};
	};
	class bc_mass_item_240:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 240;
		};
	};
	class bc_mass_item_241:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 241;
		};
	};
	class bc_mass_item_242:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 242;
		};
	};
	class bc_mass_item_243:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 243;
		};
	};
	class bc_mass_item_244:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 244;
		};
	};
	class bc_mass_item_245:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 245;
		};
	};
	class bc_mass_item_246:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 246;
		};
	};
	class bc_mass_item_247:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 247;
		};
	};
	class bc_mass_item_248:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 248;
		};
	};
	class bc_mass_item_249:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 249;
		};
	};
	class bc_mass_item_250:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 250;
		};
	};
	class bc_mass_item_251:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 251;
		};
	};
	class bc_mass_item_252:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 252;
		};
	};
	class bc_mass_item_253:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 253;
		};
	};
	class bc_mass_item_254:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 254;
		};
	};
	class bc_mass_item_255:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 255;
		};
	};
	class bc_mass_item_256:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 256;
		};
	};
	class bc_mass_item_257:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 257;
		};
	};
	class bc_mass_item_258:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 258;
		};
	};
	class bc_mass_item_259:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 259;
		};
	};
	class bc_mass_item_260:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 260;
		};
	};
	class bc_mass_item_261:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 261;
		};
	};
	class bc_mass_item_262:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 262;
		};
	};
	class bc_mass_item_263:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 263;
		};
	};
	class bc_mass_item_264:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 264;
		};
	};
	class bc_mass_item_265:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 265;
		};
	};
	class bc_mass_item_266:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 266;
		};
	};
	class bc_mass_item_267:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 267;
		};
	};
	class bc_mass_item_268:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 268;
		};
	};
	class bc_mass_item_269:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 269;
		};
	};
	class bc_mass_item_270:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 270;
		};
	};
	class bc_mass_item_271:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 271;
		};
	};
	class bc_mass_item_272:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 272;
		};
	};
	class bc_mass_item_273:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 273;
		};
	};
	class bc_mass_item_274:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 274;
		};
	};
	class bc_mass_item_275:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 275;
		};
	};
	class bc_mass_item_276:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 276;
		};
	};
	class bc_mass_item_277:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 277;
		};
	};
	class bc_mass_item_278:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 278;
		};
	};
	class bc_mass_item_279:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 279;
		};
	};
	class bc_mass_item_280:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 280;
		};
	};
	class bc_mass_item_281:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 281;
		};
	};
	class bc_mass_item_282:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 282;
		};
	};
	class bc_mass_item_283:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 283;
		};
	};
	class bc_mass_item_284:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 284;
		};
	};
	class bc_mass_item_285:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 285;
		};
	};
	class bc_mass_item_286:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 286;
		};
	};
	class bc_mass_item_287:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 287;
		};
	};
	class bc_mass_item_288:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 288;
		};
	};
	class bc_mass_item_289:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 289;
		};
	};
		class bc_mass_item_290:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 290;
		};
	};
	class bc_mass_item_291:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 291;
		};
	};
	class bc_mass_item_292:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 292;
		};
	};
	class bc_mass_item_293:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 293;
		};
	};
	class bc_mass_item_294:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 294;
		};
	};
	class bc_mass_item_295:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 295;
		};
	};
	class bc_mass_item_296:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 296;
		};
	};
	class bc_mass_item_297:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 297;
		};
	};
	class bc_mass_item_298:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 298;
		};
	};
	class bc_mass_item_299:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 299;
		};
	};

	class bc_mass_item_300:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 300;
		};
	};
	class bc_mass_item_301:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 301;
		};
	};
	class bc_mass_item_302:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 302;
		};
	};
	class bc_mass_item_303:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 303;
		};
	};
	class bc_mass_item_304:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 304;
		};
	};
	class bc_mass_item_305:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 305;
		};
	};
	class bc_mass_item_306:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 306;
		};
	};
	class bc_mass_item_307:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 307;
		};
	};
	class bc_mass_item_308:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 308;
		};
	};
	class bc_mass_item_309:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 309;
		};
	};
	class bc_mass_item_310:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 310;
		};
	};
	class bc_mass_item_311:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 311;
		};
	};
	class bc_mass_item_312:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 312;
		};
	};
	class bc_mass_item_313:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 313;
		};
	};
	class bc_mass_item_314:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 314;
		};
	};
	class bc_mass_item_315:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 315;
		};
	};
	class bc_mass_item_316:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 316;
		};
	};
	class bc_mass_item_317:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 317;
		};
	};
	class bc_mass_item_318:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 318;
		};
	};
	class bc_mass_item_319:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 319;
		};
	};
	class bc_mass_item_320:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 320;
		};
	};
	class bc_mass_item_321:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 321;
		};
	};
	class bc_mass_item_322:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 322;
		};
	};
	class bc_mass_item_323:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 323;
		};
	};
	class bc_mass_item_324:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 324;
		};
	};
	class bc_mass_item_325:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 325;
		};
	};
	class bc_mass_item_326:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 326;
		};
	};
	class bc_mass_item_327:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 327;
		};
	};
	class bc_mass_item_328:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 328;
		};
	};
	class bc_mass_item_329:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 329;
		};
	};
	class bc_mass_item_330:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 330;
		};
	};
	class bc_mass_item_331:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 331;
		};
	};
	class bc_mass_item_332:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 332;
		};
	};
	class bc_mass_item_333:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 333;
		};
	};
	class bc_mass_item_334:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 334;
		};
	};
	class bc_mass_item_335:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 335;
		};
	};
	class bc_mass_item_336:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 336;
		};
	};
	class bc_mass_item_337:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 337;
		};
	};
	class bc_mass_item_338:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 338;
		};
	};
	class bc_mass_item_339:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 339;
		};
	};
	class bc_mass_item_340:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 340;
		};
	};
	class bc_mass_item_341:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 341;
		};
	};
	class bc_mass_item_342:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 342;
		};
	};
	class bc_mass_item_343:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 343;
		};
	};
	class bc_mass_item_344:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 344;
		};
	};
	class bc_mass_item_345:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 345;
		};
	};
	class bc_mass_item_346:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 346;
		};
	};
	class bc_mass_item_347:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 347;
		};
	};
	class bc_mass_item_348:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 348;
		};
	};
	class bc_mass_item_349:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 349;
		};
	};
	class bc_mass_item_350:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 350;
		};
	};
	class bc_mass_item_351:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 351;
		};
	};
	class bc_mass_item_352:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 352;
		};
	};
	class bc_mass_item_353:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 353;
		};
	};
	class bc_mass_item_354:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 354;
		};
	};
	class bc_mass_item_355:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 355;
		};
	};
	class bc_mass_item_356:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 356;
		};
	};
	class bc_mass_item_357:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 357;
		};
	};
	class bc_mass_item_358:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 358;
		};
	};
	class bc_mass_item_359:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 359;
		};
	};
	class bc_mass_item_360:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 360;
		};
	};
	class bc_mass_item_361:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 361;
		};
	};
	class bc_mass_item_362:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 362;
		};
	};
	class bc_mass_item_363:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 363;
		};
	};
	class bc_mass_item_364:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 364;
		};
	};
	class bc_mass_item_365:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 365;
		};
	};
	class bc_mass_item_366:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 366;
		};
	};
	class bc_mass_item_367:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 367;
		};
	};
	class bc_mass_item_368:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 368;
		};
	};
	class bc_mass_item_369:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 369;
		};
	};
	class bc_mass_item_370:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 370;
		};
	};
	class bc_mass_item_371:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 371;
		};
	};
	class bc_mass_item_372:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 372;
		};
	};
	class bc_mass_item_373:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 373;
		};
	};
	class bc_mass_item_374:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 374;
		};
	};
	class bc_mass_item_375:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 375;
		};
	};
	class bc_mass_item_376:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 376;
		};
	};
	class bc_mass_item_377:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 377;
		};
	};
	class bc_mass_item_378:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 378;
		};
	};
	class bc_mass_item_379:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 379;
		};
	};
	class bc_mass_item_380:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 380;
		};
	};
	class bc_mass_item_381:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 381;
		};
	};
	class bc_mass_item_382:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 382;
		};
	};
	class bc_mass_item_383:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 383;
		};
	};
	class bc_mass_item_384:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 384;
		};
	};
	class bc_mass_item_385:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 385;
		};
	};
	class bc_mass_item_386:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 386;
		};
	};
	class bc_mass_item_387:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 387;
		};
	};
	class bc_mass_item_388:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 388;
		};
	};
	class bc_mass_item_389:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 389;
		};
	};
		class bc_mass_item_390:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 390;
		};
	};
	class bc_mass_item_391:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 391;
		};
	};
	class bc_mass_item_392:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 392;
		};
	};
	class bc_mass_item_393:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 393;
		};
	};
	class bc_mass_item_394:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 394;
		};
	};
	class bc_mass_item_395:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 395;
		};
	};
	class bc_mass_item_396:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 396;
		};
	};
	class bc_mass_item_397:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 397;
		};
	};
	class bc_mass_item_398:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 398;
		};
	};
	class bc_mass_item_399:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 399;
		};
	};

	class bc_mass_item_400:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 400;
		};
	};
	class bc_mass_item_401:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 401;
		};
	};
	class bc_mass_item_402:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 402;
		};
	};
	class bc_mass_item_403:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 403;
		};
	};
	class bc_mass_item_404:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 404;
		};
	};
	class bc_mass_item_405:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 405;
		};
	};
	class bc_mass_item_406:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 406;
		};
	};
	class bc_mass_item_407:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 407;
		};
	};
	class bc_mass_item_408:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 408;
		};
	};
	class bc_mass_item_409:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 409;
		};
	};
	class bc_mass_item_410:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 410;
		};
	};
	class bc_mass_item_411:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 411;
		};
	};
	class bc_mass_item_412:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 412;
		};
	};
	class bc_mass_item_413:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 413;
		};
	};
	class bc_mass_item_414:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 414;
		};
	};
	class bc_mass_item_415:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 415;
		};
	};
	class bc_mass_item_416:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 416;
		};
	};
	class bc_mass_item_417:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 417;
		};
	};
	class bc_mass_item_418:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 418;
		};
	};
	class bc_mass_item_419:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 419;
		};
	};
	class bc_mass_item_420:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 420;
		};
	};
	class bc_mass_item_421:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 421;
		};
	};
	class bc_mass_item_422:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 422;
		};
	};
	class bc_mass_item_423:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 423;
		};
	};
	class bc_mass_item_424:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 424;
		};
	};
	class bc_mass_item_425:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 425;
		};
	};
	class bc_mass_item_426:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 426;
		};
	};
	class bc_mass_item_427:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 427;
		};
	};
	class bc_mass_item_428:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 428;
		};
	};
	class bc_mass_item_429:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 429;
		};
	};
	class bc_mass_item_430:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 430;
		};
	};
	class bc_mass_item_431:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 431;
		};
	};
	class bc_mass_item_432:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 432;
		};
	};
	class bc_mass_item_433:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 433;
		};
	};
	class bc_mass_item_434:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 434;
		};
	};
	class bc_mass_item_435:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 435;
		};
	};
	class bc_mass_item_436:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 436;
		};
	};
	class bc_mass_item_437:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 437;
		};
	};
	class bc_mass_item_438:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 438;
		};
	};
	class bc_mass_item_439:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 439;
		};
	};
	class bc_mass_item_440:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 440;
		};
	};
	class bc_mass_item_441:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 441;
		};
	};
	class bc_mass_item_442:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 442;
		};
	};
	class bc_mass_item_443:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 443;
		};
	};
	class bc_mass_item_444:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 444;
		};
	};
	class bc_mass_item_445:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 445;
		};
	};
	class bc_mass_item_446:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 446;
		};
	};
	class bc_mass_item_447:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 447;
		};
	};
	class bc_mass_item_448:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 448;
		};
	};
	class bc_mass_item_449:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 449;
		};
	};
	class bc_mass_item_450:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 450;
		};
	};
	class bc_mass_item_451:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 451;
		};
	};
	class bc_mass_item_452:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 452;
		};
	};
	class bc_mass_item_453:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 453;
		};
	};
	class bc_mass_item_454:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 454;
		};
	};
	class bc_mass_item_455:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 455;
		};
	};
	class bc_mass_item_456:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 456;
		};
	};
	class bc_mass_item_457:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 457;
		};
	};
	class bc_mass_item_458:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 458;
		};
	};
	class bc_mass_item_459:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 459;
		};
	};
	class bc_mass_item_460:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 460;
		};
	};
	class bc_mass_item_461:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 461;
		};
	};
	class bc_mass_item_462:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 462;
		};
	};
	class bc_mass_item_463:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 463;
		};
	};
	class bc_mass_item_464:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 464;
		};
	};
	class bc_mass_item_465:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 465;
		};
	};
	class bc_mass_item_466:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 466;
		};
	};
	class bc_mass_item_467:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 467;
		};
	};
	class bc_mass_item_468:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 468;
		};
	};
	class bc_mass_item_469:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 469;
		};
	};
	class bc_mass_item_470:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 470;
		};
	};
	class bc_mass_item_471:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 471;
		};
	};
	class bc_mass_item_472:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 472;
		};
	};
	class bc_mass_item_473:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 473;
		};
	};
	class bc_mass_item_474:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 474;
		};
	};
	class bc_mass_item_475:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 475;
		};
	};
	class bc_mass_item_476:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 476;
		};
	};
	class bc_mass_item_477:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 477;
		};
	};
	class bc_mass_item_478:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 478;
		};
	};
	class bc_mass_item_479:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 479;
		};
	};
	class bc_mass_item_480:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 480;
		};
	};
	class bc_mass_item_481:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 481;
		};
	};
	class bc_mass_item_482:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 482;
		};
	};
	class bc_mass_item_483:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 483;
		};
	};
	class bc_mass_item_484:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 484;
		};
	};
	class bc_mass_item_485:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 485;
		};
	};
	class bc_mass_item_486:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 486;
		};
	};
	class bc_mass_item_487:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 487;
		};
	};
	class bc_mass_item_488:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 488;
		};
	};
	class bc_mass_item_489:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 489;
		};
	};
		class bc_mass_item_490:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 490;
		};
	};
	class bc_mass_item_491:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 491;
		};
	};
	class bc_mass_item_492:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 492;
		};
	};
	class bc_mass_item_493:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 493;
		};
	};
	class bc_mass_item_494:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 494;
		};
	};
	class bc_mass_item_495:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 495;
		};
	};
	class bc_mass_item_496:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 496;
		};
	};
	class bc_mass_item_497:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 497;
		};
	};
	class bc_mass_item_498:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 498;
		};
	};
	class bc_mass_item_499:bc_mass_item_base
	{
		class WeaponSlotsInfo
		{
			mass = 499;
		};
	};
};


