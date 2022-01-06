_weapon_p_old = primaryWeapon player;
_weapon_se_old = secondaryWeapon player;
_load0 = getUnitLoadout player;
_pwpn_info0 = _load0 select 0;
_sewpn_info0 = _load0 select 1;
_weapon_se_new = format["%1%2",_weapon_p_old,"_bcsewpn"];
_weapon_p_new = [_weapon_se_old, 0, -8] call BIS_fnc_trimString;
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
			hint "Your weapon do not support yet!"
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
						//player playAction "WeaponOn";					
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
					//player playAction "WeaponOn";
				};
			} else
			{
				hint "Launchslot is in use"
			};
	};
