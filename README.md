# BC-Two-Primary-Weapons

How to add a new weapon support  
  //A fast way  
class mod_rifle_A; //classname  
class mod_rifle_A_bcsewpn: mod_rifle_A // create a secondweapon classname  
{  
  enableAttack = 0;  // disable Attack  
  type = 4;  // launchsolt  
  scope = 1; //hide in Arsenal  
  scopeArsenal = 0; //hide in Arsenal  
  handAnim[] = {}; // no handamin  
  modes[] = {"Noob_Auto"};  //disable firemode  
  class Noob_Auto:Noob_Auto{};  
  muzzles[] = {"this","NGL"}; //disable UGL firemode   
  class NGL: NGL{};  
  _generalMacro = "";  
  baseWeapon = "";  
  hiddenSelections[] = {"zasleh"};  //maybe not zasleh but muzzleflash sometimes  
  hiddenSelectionsTextures[] =  {""}; // hide muzzleflash  
  //hiddenSelectionsMaterials[] = {""}; //need it sometimes  
};  

//If suppport rhs grips  
  class mod_rifle_A_grip_bcsewpn: mod_rifle_A_bcsewpn{};	  
	class mod_rifle_A_grip2_bcsewpn: mod_rifle_A_bcsewpn{};	  
	class mod_rifle_A_grip3_bcsewpn: mod_rifle_A_bcsewpn{};	  
    
  If one p3d have several color variants，you need to edit hiddenSelections for display correct color.  
  If in original weapons config     
  hiddenSelections[] = {"camo1","camo2"};  
  hiddenSelectionsTextures[] = {"a_mod\tex\camo1.paa","a_mod\tex\camo2.pa"};  
  hiddenSelectionsMaterials[] = {"a_mod\tex\camo1.rvmat","a_mod\tex\camo2.rvmat"};  
  then in TPW config  
  hiddenSelections[] = {"zasleh","camo1","camo2"};  
  hiddenSelectionsTextures[] = {"","a_mod\tex\camo1.paa","a_mod\tex\camo2.pa"};  
  hiddenSelectionsMaterials[] = {"","a_mod\tex\camo1.rvmat","a_mod\tex\camo2.rvmat"};  
    
You can add support in compat directory.  
