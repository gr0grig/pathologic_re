include std.sci
include player_base.sci
include player_common2.sci

const string c_strPlayerName = "danko";

maintask TPlayer : TPlayerBase
{
	void init(void) {
		int iVal;
		@GetVariable("player_init", iVal);
		if (!iVal) {
			@Diary();
			@SetVariable("player_init", 1);	
		}
			
		super.init(NullObject());
	}

	void PerformShoot(string strWeapon) {
		if (strWeapon == "empty") {
			THands{};
		}
		else if (strWeapon == "scalpel") {
			TScalpel{};
		}
		else if (strWeapon == "knife") {
			TKnife{};
		}
		else if (strWeapon == "rifle") {
			TRifle{};
		}
		else if (strWeapon == "revolver") {
			TRevolver{};
		}
		else if (strWeapon == "samopal") {
			TSamopal{};
		}
		else if (strWeapon == "lockpick") {
			TLockpick{};
		}
	}
	
	void PerformReload(string strWeapon) {
		if (strWeapon == "rifle") {
			TRifleReload{};
		}
		else if (strWeapon == "revolver") {
			TRevolverReload{};
		}
		else if (strWeapon == "samopal") {
			TSamopalReload{};
		}
	}
	
	void PerformAltShoot(string strWeapon) {
		if (strWeapon == "empty") {
			TBlock{0.25};
		}
	}
}
