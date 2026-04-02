include ui_std.sci
include ui_text_res.sci

maintask UI_Options
{
	
	void init(void) {
		@SetOwnerDraw(true);
		@ProcessEvents();
	}
	
	void OnDraw(void) {
		@Print("default", 15, 15, GetStringByID(c_iTID_Set_InvertMouse));
		@Print("default", 15, 98, GetStringByID(c_iTID_Set_MouseSensivity));
	}
	
}
