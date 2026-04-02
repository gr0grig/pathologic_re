include ui_std.sci
include ../game_ext.sci

const string c_strStatDanko = "ui/stat_Danko.png";
const string c_strStatBurah = "ui/stat_Burah.png";
const string c_strStatKlara = "ui/stat_Klara.png";

const float c_fThreshold0_1 = 0.7;
const float c_fThreshold1_2 = 0.2;

maintask UI_PlayerStatsPhoto
{
	var string strPhoto;
	void init(void) {
		@EnableClipping(true);
	
		if (GetPlayer() == c_iBranchDanko) {
			strPhoto = c_strStatDanko;
		}
		else 
		if (GetPlayer() == c_iBranchBurah) {
			strPhoto = c_strStatBurah;
		}
		else {
			strPhoto = c_strStatKlara;
		}
		
		@LoadImage(strPhoto);
		
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw() 
	{
		@Blit(strPhoto, 0, 0);
	}
}
