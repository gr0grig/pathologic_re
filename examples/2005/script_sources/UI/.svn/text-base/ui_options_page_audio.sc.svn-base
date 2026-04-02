include ui_std.sci
include ui_text_res.sci

maintask UI_Options
{
	
	void init(void) {
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw(void) {
		@Print("default", 15, 15, GetStringByID(c_iTID_Set_VolMaster));
		@Print("default", 15, 98, GetStringByID(c_iTID_Set_VolMusic));
		@Print("default", 16, 182, GetStringByID(c_iTID_Set_VolVoice));
		@Print("default", 16, 265, GetStringByID(c_iTID_Set_VolSounds));
	}
	
}
