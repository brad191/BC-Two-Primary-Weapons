_weapon_p_old = primaryWeapon player;
_weapon_se_old = secondaryWeapon player;
_load0 = getUnitLoadout player;
_pwpn_info0 = _load0 select 0;
_sewpn_info0 = _load0 select 1;
_weapon_se_new = format["%1%2",_weapon_p_old,"_bcsewpn"];
_weapon_p_new = [_weapon_se_old, 0, -8] call BIS_fnc_trimString;
_wpnCfg = configFile >> "cfgWeapons" >> _weapon_p_old; 
_weapon_p_base = getText (_wpnCfg >> "baseWeapon"); 

_nv_state = currentVisionMode player;

_weapon_mass = (getNumber (configfile >> "CfgWeapons" >> _weapon_p_old >> "WeaponSlotsInfo" >> "mass"));
_weapon_acc0 = _pwpn_info0 param [1, "0"];
_mass_acc0 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc0 >> "ItemInfo" >> "mass"));
_weapon_acc1 = _pwpn_info0 param [2, "0"];
_mass_acc1 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc1 >> "ItemInfo" >> "mass"));
_weapon_acc2 = _pwpn_info0 param [3, "0"];
_mass_acc2 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc2 >> "ItemInfo" >> "mass"));
_weapon_acc3 = _pwpn_info0 param [6, "0"];
_mass_acc3 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc3 >> "ItemInfo" >> "mass"));
_mass_acc = _mass_acc0 + _mass_acc1 + _mass_acc2 + _mass_acc3;
_weapon_pmag = (_pwpn_info0 param [4]) param [0];
_mass_pmag = (getNumber (configfile >> "CfgMagazines" >> _weapon_pmag  >> "mass"));
if ( isNil "_weapon_pmag" ) then {_mass_pmag = 0;};
_weapon_uglmag = (_pwpn_info0 param [5]) param [0, "Nil"];
_mass_uglmag = (getNumber (configfile >> "CfgMagazines" >> _weapon_uglmag  >> "mass"));
if ( isNil "_weapon_uglmag" ) then {_mass_uglmag = 0;};
_mass_mag = _mass_pmag + _mass_uglmag;
_mass_all = _weapon_mass + _mass_acc + _mass_mag;
_mass_all = round _mass_all;
_tpw_mass_item = format["%1%2","bc_mass_item_",_mass_all];


_weapon_model = getText (_wpnCfg >> "model"); 
parsingNamespace setVariable ["twp_weapon_model",_weapon_model];
_weapon_picture = getText (_wpnCfg >> "picture"); 
parsingNamespace setVariable ["twp_weapon_picture",_weapon_picture];

if ((!isClass (configFile >> "CfgWeapons" >> _weapon_se_new)) && (_weapon_p_base isnotEqualTo "")) then
	{
		_weapon_se_new = format["%1%2",_weapon_p_base,"_bcsewpn"];		
	};

if (_weapon_se_old isEqualTo "") then
	{
		if (isClass (configFile >> "CfgWeapons" >> _weapon_se_new) )then
		{
			
			_pwpn_info0 set  [0, _weapon_se_new];
			_load0 set [1, _pwpn_info0];
			_load0 set [0, []];
			player setUnitLoadout _load0;
			//sleep 3;
			player addMagazine "mag_null";
			player removeMagazine "mag_null";
			//player playAction "SecondaryWeapon";
		} else
		{
			
			hint "Weapon do not support, work in Compatible Mode";			
			localNamespace setVariable ["pwpn_info0",_pwpn_info0];
			localNamespace setVariable ["pwpn_t",_weapon_p_old];
			player addWeapon _tpw_mass_item;
			player removeWeapon _weapon_p_old;
			//player playAction "SecondaryWeapon";
		};
	}else
	{
		if ("_bcsewpn" in _weapon_se_old) then 
			{
				if (_weapon_p_old isnotEqualTo "") then
				{
					if (isClass (configFile >> "CfgWeapons" >> _weapon_se_new))  then
					{
						
						_pwpn_info0 set  [0, _weapon_se_new];
						_sewpn_info0 set  [0, _weapon_p_new];
						_load0 set [1, _pwpn_info0];
						_load0 set [0, _sewpn_info0];			
						player setUnitLoadout _load0;				
						//sleep 3;
						player addMagazine "mag_null";
						player removeMagazine "mag_null";
						player selectWeapon primaryWeapon player;
						
					} else
					{
						hint "Weapon do not support, work in Compatible Mode";
						
						_sewpn_info0 set  [0, _weapon_p_new];
						_load0 set [0, _sewpn_info0];
						_load0 set [1, []];
						player setUnitLoadout _load0;
						//sleep 3;						
						localNamespace setVariable ["pwpn_info0",_pwpn_info0];
						localNamespace setVariable ["pwpn_t",_weapon_p_old];
						player addWeapon _tpw_mass_item;		
						player addMagazine "mag_null";
						player removeMagazine "mag_null";
						player selectWeapon primaryWeapon player;
						
					};
				} else
				{
					
					_sewpn_info0 set  [0, _weapon_p_new];
					_load0 set [0, _sewpn_info0];
					_load0 set [1, []];
					player setUnitLoadout _load0;
					//sleep 3;
					player addMagazine "mag_null";
					player removeMagazine "mag_null";
					////player selectWeapon primaryWeapon player;
					
				};
			};
			
		if ("bc_mass_item" in _weapon_se_old) then
			{
				if (_weapon_p_old isnotEqualTo "") then
				{
					if (isClass (configFile >> "CfgWeapons" >> _weapon_se_new))  then
					{
						
						_pwpn_info0 set  [0, _weapon_se_new];
						_load0 set [1, _pwpn_info0];					
						_pwpn_info2 =	localNamespace getVariable["pwpn_info0",[]];			
						_load0 set  [0, _pwpn_info2];
						player setUnitLoadout _load0;
						//sleep 3;
						player addMagazine "mag_null";
						player removeMagazine "mag_null";
						player selectWeapon primaryWeapon player;	
						
					} else
					{
						
						hint "Weapon do not support,work in Compatible Mode";
						player removeWeapon _weapon_p_old;
						localNamespace setVariable ["pwpn_t",_weapon_p_old];		
						_pwpn_info2 =	localNamespace getVariable["pwpn_info0",[]];			
						_load0 set  [0, _pwpn_info2];
						player setUnitLoadout _load0;						
						player addWeapon _tpw_mass_item;		
						localNamespace setVariable ["pwpn_info0",_pwpn_info0];
						player selectWeapon primaryWeapon player;	
						
					};
				} else
				{
					
					_pwpn_info2 =	localNamespace getVariable["pwpn_info0",[]];			
					_load0 set  [0, _pwpn_info2];
					_load0 set [1, []];
					player setUnitLoadout _load0;
					localNamespace setVariable ["pwpn_info0",_pwpn_info0];
					//sleep 3;
					player addMagazine "mag_null";
					player removeMagazine "mag_null";
					//player selectWeapon primaryWeapon player;
					
				};
			};
		if (!("_bcsewpn" in _weapon_se_old) && !("bc_mass_item" in _weapon_se_old)) then
			{hint "Launchslot is in use"};
	};
if (_nv_state isnotEqualTo 0) then
	{
	player action ["nvGoggles", player];
	};
	
//player setUserActionText [_bc_tpw_id, format["Swap Weapon %1", getText (configFile >> "CfgWeapons" >> (secondaryWeapon player) >> "displayName")]];