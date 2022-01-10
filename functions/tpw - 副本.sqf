_weapon_p_old = primaryWeapon player;
_weapon_se_old = secondaryWeapon player;
_load0 = getUnitLoadout player;
_pwpn_info0 = _load0 select 0;
_sewpn_info0 = _load0 select 1;
_weapon_se_new = format["%1%2",_weapon_p_old,"_bcsewpn"];
_weapon_p_new = [_weapon_se_old, 0, -8] call BIS_fnc_trimString;

_weapon_mass = (getNumber (configfile >> "CfgWeapons" >> _weapon_p_old >> "WeaponSlotsInfo" >> "mass"));
_weapon_acc0 = _pwpn_info0 select 1;
_mass_acc0 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc0 >> "ItemInfo" >> "mass")) ;
_weapon_acc1 = _pwpn_info0 select 2;
_mass_acc1 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc1 >> "ItemInfo" >> "mass")) ;
_weapon_acc2 = _pwpn_info0 select 3;
_mass_acc2 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc2 >> "ItemInfo" >> "mass")) ;
_weapon_acc3 = _pwpn_info0 select 6;
_mass_acc3 = (getNumber (configfile >> "CfgWeapons" >> _weapon_acc3 >> "ItemInfo" >> "mass")) ;
_mass_acc = _mass_acc0 + _mass_acc1 + _mass_acc2 + _mass_acc3;
_weapon_pmag = (_pwpn_info0 select 4) select 0;
_mass_pmag = (getNumber (configfile >> "CfgMagazines" >> _weapon_pmag  >> "mass")) ;
if ( isNil "_weapon_pmag" ) then {_mass_pmag=0;};
_weapon_umag = (_pwpn_info0 select 5) select 0;
_mass_umag = (getNumber (configfile >> "CfgMagazines" >> _weapon_umag  >> "mass")) ;
if ( isNil "_weapon_umag" ) then {_mass_umag=0;};
_mass_mag = _mass_pmag + _mass_umag;
_mass_all = _weapon_mass + _mass_acc + _mass_mag;
_mass_all = round _mass_all;
_mass_all;
_tpw_mass_item = format["%1%2","bc_mass_item_",_mass_all];




if (_weapon_se_old isEqualTo "") then
	{
		if (isClass (configFile >> "CfgWeapons" >> _weapon_se_new) )then
		{
			_pwpn_info0 set  [0, _weapon_se_new];
			_load0 set [1, _pwpn_info0];
			_load0 set [0, []];
			player setUnitLoadout _load0;
			sleep 3;
			player addMagazine "mag_null";
			player removeMagazine "mag_null";
			//player playAction "SecondaryWeapon";
		} else
		{
			hint "Weapon do not support£¬working in Compatible Mode"
			localNamespace setVariable ["pwpn_info0",_pwpn_info0];
			localNamespace setVariable ["pwpn_t",_weapon_p_old];
			saveprofileNamespace;
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
						sleep 3;
						player addMagazine "mag_null";
						player removeMagazine "mag_null";
						player selectWeapon primaryWeapon player;
						//player playAction "";		
						//player action ["SwitchWeapon", player, player, 0];			
					} else
					{
						hint "Your weapon do not support yet!"
					};
				} else
				{
					_sewpn_info0 set  [0, _weapon_p_new];
					_load0 set [0, _sewpn_info0];
					_load0 set [1, []];
					player setUnitLoadout _load0;
					sleep 3;
					player addMagazine "mag_null";
					player removeMagazine "mag_null";
					player selectWeapon primaryWeapon player;
					//player playAction "";
				};
			} else
			{
				hint "Launchslot is in use"
			};
	};
